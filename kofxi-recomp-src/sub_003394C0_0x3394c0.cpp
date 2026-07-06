#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003394C0
// Address: 0x3394c0 - 0x3396f0
void sub_003394C0_0x3394c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003394C0_0x3394c0");
#endif

    switch (ctx->pc) {
        case 0x3394e8u: goto label_3394e8;
        case 0x339534u: goto label_339534;
        case 0x3396b4u: goto label_3396b4;
        default: break;
    }

    ctx->pc = 0x3394c0u;

    // 0x3394c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3394c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3394c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3394c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3394c8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3394c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3394cc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3394ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3394d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3394d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3394d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3394d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3394d8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3394d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3394dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3394dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3394e0: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x3394E0u;
    SET_GPR_U32(ctx, 31, 0x3394E8u);
    ctx->pc = 0x3394E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3394E0u;
            // 0x3394e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3394E8u; }
        if (ctx->pc != 0x3394E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3394E8u; }
        if (ctx->pc != 0x3394E8u) { return; }
    }
    ctx->pc = 0x3394E8u;
label_3394e8:
    // 0x3394e8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3394E8u;
    {
        const bool branch_taken_0x3394e8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3394ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3394E8u;
            // 0x3394ec: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3394e8) {
            ctx->pc = 0x3394F8u;
            goto label_3394f8;
        }
    }
    ctx->pc = 0x3394F0u;
    // 0x3394f0: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x3394f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3394f4: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x3394f4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_3394f8:
    // 0x3394f8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x3394f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3394fc: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x3394fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x339500: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x339500u;
    {
        const bool branch_taken_0x339500 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x339504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x339500u;
            // 0x339504: 0x2449023  subu        $s2, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339500) {
            ctx->pc = 0x339514u;
            goto label_339514;
        }
    }
    ctx->pc = 0x339508u;
    // 0x339508: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x339508u;
    {
        const bool branch_taken_0x339508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x339508) {
            ctx->pc = 0x339514u;
            goto label_339514;
        }
    }
    ctx->pc = 0x339510u;
    // 0x339510: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x339510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_339514:
    // 0x339514: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x339514u;
    {
        const bool branch_taken_0x339514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x339514) {
            ctx->pc = 0x339518u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x339514u;
            // 0x339518: 0x82230000  lb          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x339524u;
            goto label_339524;
        }
    }
    ctx->pc = 0x33951Cu;
    // 0x33951c: 0x2652fff8  addiu       $s2, $s2, -0x8
    ctx->pc = 0x33951cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
    // 0x339520: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x339520u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_339524:
    // 0x339524: 0x1060006c  beqz        $v1, . + 4 + (0x6C << 2)
    ctx->pc = 0x339524u;
    {
        const bool branch_taken_0x339524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x339524) {
            ctx->pc = 0x3396D8u;
            goto label_3396d8;
        }
    }
    ctx->pc = 0x33952Cu;
    // 0x33952c: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x33952cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x339530: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x339530u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
label_339534:
    // 0x339534: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x339534u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x339538: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x339538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x33953c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33953Cu;
    {
        const bool branch_taken_0x33953c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33953c) {
            ctx->pc = 0x339550u;
            goto label_339550;
        }
    }
    ctx->pc = 0x339544u;
    // 0x339544: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x339544u;
    {
        const bool branch_taken_0x339544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x339544u;
            // 0x339548: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339544) {
            ctx->pc = 0x339640u;
            goto label_339640;
        }
    }
    ctx->pc = 0x33954Cu;
    // 0x33954c: 0x0  nop
    ctx->pc = 0x33954cu;
    // NOP
label_339550:
    // 0x339550: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x339550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x339554: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x339554u;
    {
        const bool branch_taken_0x339554 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x339554) {
            ctx->pc = 0x339568u;
            goto label_339568;
        }
    }
    ctx->pc = 0x33955Cu;
    // 0x33955c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x33955Cu;
    {
        const bool branch_taken_0x33955c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33955Cu;
            // 0x339560: 0x2404002d  addiu       $a0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33955c) {
            ctx->pc = 0x339640u;
            goto label_339640;
        }
    }
    ctx->pc = 0x339564u;
    // 0x339564: 0x0  nop
    ctx->pc = 0x339564u;
    // NOP
label_339568:
    // 0x339568: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x339568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x33956c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33956Cu;
    {
        const bool branch_taken_0x33956c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33956c) {
            ctx->pc = 0x339580u;
            goto label_339580;
        }
    }
    ctx->pc = 0x339574u;
    // 0x339574: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x339574u;
    {
        const bool branch_taken_0x339574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x339574u;
            // 0x339578: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339574) {
            ctx->pc = 0x339640u;
            goto label_339640;
        }
    }
    ctx->pc = 0x33957Cu;
    // 0x33957c: 0x0  nop
    ctx->pc = 0x33957cu;
    // NOP
label_339580:
    // 0x339580: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x339580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x339584: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x339584u;
    {
        const bool branch_taken_0x339584 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x339584) {
            ctx->pc = 0x339598u;
            goto label_339598;
        }
    }
    ctx->pc = 0x33958Cu;
    // 0x33958c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x33958Cu;
    {
        const bool branch_taken_0x33958c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33958Cu;
            // 0x339590: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33958c) {
            ctx->pc = 0x339640u;
            goto label_339640;
        }
    }
    ctx->pc = 0x339594u;
    // 0x339594: 0x0  nop
    ctx->pc = 0x339594u;
    // NOP
label_339598:
    // 0x339598: 0x2403002e  addiu       $v1, $zero, 0x2E
    ctx->pc = 0x339598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x33959c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33959Cu;
    {
        const bool branch_taken_0x33959c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33959c) {
            ctx->pc = 0x3395B0u;
            goto label_3395b0;
        }
    }
    ctx->pc = 0x3395A4u;
    // 0x3395a4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x3395A4u;
    {
        const bool branch_taken_0x3395a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3395A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3395A4u;
            // 0x3395a8: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3395a4) {
            ctx->pc = 0x339640u;
            goto label_339640;
        }
    }
    ctx->pc = 0x3395ACu;
    // 0x3395ac: 0x0  nop
    ctx->pc = 0x3395acu;
    // NOP
label_3395b0:
    // 0x3395b0: 0x2403002b  addiu       $v1, $zero, 0x2B
    ctx->pc = 0x3395b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x3395b4: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3395B4u;
    {
        const bool branch_taken_0x3395b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3395b4) {
            ctx->pc = 0x3395C8u;
            goto label_3395c8;
        }
    }
    ctx->pc = 0x3395BCu;
    // 0x3395bc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x3395BCu;
    {
        const bool branch_taken_0x3395bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3395C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3395BCu;
            // 0x3395c0: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3395bc) {
            ctx->pc = 0x339640u;
            goto label_339640;
        }
    }
    ctx->pc = 0x3395C4u;
    // 0x3395c4: 0x0  nop
    ctx->pc = 0x3395c4u;
    // NOP
label_3395c8:
    // 0x3395c8: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x3395c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x3395cc: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3395CCu;
    {
        const bool branch_taken_0x3395cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3395cc) {
            ctx->pc = 0x3395E0u;
            goto label_3395e0;
        }
    }
    ctx->pc = 0x3395D4u;
    // 0x3395d4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3395D4u;
    {
        const bool branch_taken_0x3395d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3395D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3395D4u;
            // 0x3395d8: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3395d4) {
            ctx->pc = 0x339640u;
            goto label_339640;
        }
    }
    ctx->pc = 0x3395DCu;
    // 0x3395dc: 0x0  nop
    ctx->pc = 0x3395dcu;
    // NOP
label_3395e0:
    // 0x3395e0: 0x28830041  slti        $v1, $a0, 0x41
    ctx->pc = 0x3395e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x3395e4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3395E4u;
    {
        const bool branch_taken_0x3395e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3395e4) {
            ctx->pc = 0x339600u;
            goto label_339600;
        }
    }
    ctx->pc = 0x3395ECu;
    // 0x3395ec: 0x2881004f  slti        $at, $a0, 0x4F
    ctx->pc = 0x3395ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)79) ? 1 : 0);
    // 0x3395f0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3395F0u;
    {
        const bool branch_taken_0x3395f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3395f0) {
            ctx->pc = 0x339600u;
            goto label_339600;
        }
    }
    ctx->pc = 0x3395F8u;
    // 0x3395f8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3395F8u;
    {
        const bool branch_taken_0x3395f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3395FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3395F8u;
            // 0x3395fc: 0x2484ffcf  addiu       $a0, $a0, -0x31 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3395f8) {
            ctx->pc = 0x339640u;
            goto label_339640;
        }
    }
    ctx->pc = 0x339600u;
label_339600:
    // 0x339600: 0x2883004f  slti        $v1, $a0, 0x4F
    ctx->pc = 0x339600u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)79) ? 1 : 0);
    // 0x339604: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x339604u;
    {
        const bool branch_taken_0x339604 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x339604) {
            ctx->pc = 0x339620u;
            goto label_339620;
        }
    }
    ctx->pc = 0x33960Cu;
    // 0x33960c: 0x2881005b  slti        $at, $a0, 0x5B
    ctx->pc = 0x33960cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)91) ? 1 : 0);
    // 0x339610: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x339610u;
    {
        const bool branch_taken_0x339610 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x339610) {
            ctx->pc = 0x339620u;
            goto label_339620;
        }
    }
    ctx->pc = 0x339618u;
    // 0x339618: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x339618u;
    {
        const bool branch_taken_0x339618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33961Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x339618u;
            // 0x33961c: 0x2484ffd1  addiu       $a0, $a0, -0x2F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967249));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339618) {
            ctx->pc = 0x339640u;
            goto label_339640;
        }
    }
    ctx->pc = 0x339620u;
label_339620:
    // 0x339620: 0x28830030  slti        $v1, $a0, 0x30
    ctx->pc = 0x339620u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x339624: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x339624u;
    {
        const bool branch_taken_0x339624 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x339624) {
            ctx->pc = 0x339640u;
            goto label_339640;
        }
    }
    ctx->pc = 0x33962Cu;
    // 0x33962c: 0x2881003a  slti        $at, $a0, 0x3A
    ctx->pc = 0x33962cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x339630: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x339630u;
    {
        const bool branch_taken_0x339630 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x339630) {
            ctx->pc = 0x339640u;
            goto label_339640;
        }
    }
    ctx->pc = 0x339638u;
    // 0x339638: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x339638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x33963c: 0x0  nop
    ctx->pc = 0x33963cu;
    // NOP
label_339640:
    // 0x339640: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x339640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x339644: 0x1083001e  beq         $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x339644u;
    {
        const bool branch_taken_0x339644 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x339644) {
            ctx->pc = 0x3396C0u;
            goto label_3396c0;
        }
    }
    ctx->pc = 0x33964Cu;
    // 0x33964c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x33964cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x339650: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x339650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x339654: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x339654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x339658: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x339658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x33965c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33965cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x339660: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x339660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x339664: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x339664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x339668: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x339668u;
    {
        const bool branch_taken_0x339668 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x33966Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x339668u;
            // 0x33966c: 0xffa30018  sd          $v1, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339668) {
            ctx->pc = 0x33967Cu;
            goto label_33967c;
        }
    }
    ctx->pc = 0x339670u;
    // 0x339670: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x339670u;
    {
        const bool branch_taken_0x339670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x339670) {
            ctx->pc = 0x339674u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x339670u;
            // 0x339674: 0x24900  sll         $t1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x339680u;
            goto label_339680;
        }
    }
    ctx->pc = 0x339678u;
    // 0x339678: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x339678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_33967c:
    // 0x33967c: 0x24900  sll         $t1, $v0, 4
    ctx->pc = 0x33967cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_339680:
    // 0x339680: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x339680u;
    {
        const bool branch_taken_0x339680 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x339684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x339680u;
            // 0x339684: 0x41103  sra         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339680) {
            ctx->pc = 0x339690u;
            goto label_339690;
        }
    }
    ctx->pc = 0x339688u;
    // 0x339688: 0x2482000f  addiu       $v0, $a0, 0xF
    ctx->pc = 0x339688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x33968c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x33968cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_339690:
    // 0x339690: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x339690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x339694: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x339694u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x339698: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x339698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33969c: 0x244a01a0  addiu       $t2, $v0, 0x1A0
    ctx->pc = 0x33969cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    // 0x3396a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3396a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3396a4: 0x2406a833  addiu       $a2, $zero, -0x57CD
    ctx->pc = 0x3396a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x3396a8: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x3396a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3396ac: 0xc0c0ba8  jal         func_302EA0
    ctx->pc = 0x3396ACu;
    SET_GPR_U32(ctx, 31, 0x3396B4u);
    ctx->pc = 0x3396B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3396ACu;
            // 0x3396b0: 0xe0582d  daddu       $t3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (runtime->hasFunction(0x302EA0u)) {
        auto targetFn = runtime->lookupFunction(0x302EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3396B4u; }
        if (ctx->pc != 0x3396B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302EA0_0x302ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3396B4u; }
        if (ctx->pc != 0x3396B4u) { return; }
    }
    ctx->pc = 0x3396B4u;
label_3396b4:
    // 0x3396b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3396B4u;
    {
        const bool branch_taken_0x3396b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3396B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3396B4u;
            // 0x3396b8: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3396b4) {
            ctx->pc = 0x3396C8u;
            goto label_3396c8;
        }
    }
    ctx->pc = 0x3396BCu;
    // 0x3396bc: 0x0  nop
    ctx->pc = 0x3396bcu;
    // NOP
label_3396c0:
    // 0x3396c0: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x3396c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3396c4: 0x0  nop
    ctx->pc = 0x3396c4u;
    // NOP
label_3396c8:
    // 0x3396c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3396c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3396cc: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x3396ccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3396d0: 0x5460ff98  bnel        $v1, $zero, . + 4 + (-0x68 << 2)
    ctx->pc = 0x3396D0u;
    {
        const bool branch_taken_0x3396d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3396d0) {
            ctx->pc = 0x3396D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3396D0u;
            // 0x3396d4: 0x3263c  dsll32      $a0, $v1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x339534u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_339534;
        }
    }
    ctx->pc = 0x3396D8u;
label_3396d8:
    // 0x3396d8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3396d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3396dc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3396dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3396e0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3396e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3396e4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3396e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3396e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3396E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3396ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3396E8u;
            // 0x3396ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3396F0u;
    ctx->pc = 0x3396f0u;
}
