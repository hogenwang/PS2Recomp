#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002833C8
// Address: 0x2833c8 - 0x283540
void sub_002833C8_0x2833c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002833C8_0x2833c8");
#endif

    switch (ctx->pc) {
        case 0x283418u: goto label_283418;
        case 0x283468u: goto label_283468;
        case 0x2834e4u: goto label_2834e4;
        default: break;
    }

    ctx->pc = 0x2833c8u;

    // 0x2833c8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2833c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2833cc: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x2833ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2833d0: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2833d0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x2833d4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2833d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2833d8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2833d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2833dc: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x2833dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2833e0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2833e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2833e4: 0x34179000  ori         $s7, $zero, 0x9000
    ctx->pc = 0x2833e4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    // 0x2833e8: 0x17bdb8  dsll        $s7, $s7, 22
    ctx->pc = 0x2833e8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << 22);
    // 0x2833ec: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2833ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2833f0: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2833f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2833f4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2833f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2833f8: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x2833f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2833fc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2833fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x283400: 0x247a021  addu        $s4, $s2, $a3
    ctx->pc = 0x283400u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x283404: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x283404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x283408: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x283408u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28340c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x28340cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x283410: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x283410u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283414: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x283414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_283418:
    // 0x283418: 0x56600034  bnel        $s3, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x283418u;
    {
        const bool branch_taken_0x283418 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x283418) {
            ctx->pc = 0x28341Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x283418u;
            // 0x28341c: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2834ECu;
            goto label_2834ec;
        }
    }
    ctx->pc = 0x283420u;
    // 0x283420: 0x92240016  lbu         $a0, 0x16($s1)
    ctx->pc = 0x283420u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x283424: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x283424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x283428: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x283428u;
    {
        const bool branch_taken_0x283428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28342Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283428u;
            // 0x28342c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283428) {
            ctx->pc = 0x283514u;
            goto label_283514;
        }
    }
    ctx->pc = 0x283430u;
    // 0x283430: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x283430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x283434: 0x92230015  lbu         $v1, 0x15($s1)
    ctx->pc = 0x283434u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 21)));
    // 0x283438: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x283438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x28343c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28343cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x283440: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x283440u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x283444: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x283444u;
    {
        const bool branch_taken_0x283444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283444u;
            // 0x283448: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283444) {
            ctx->pc = 0x283514u;
            goto label_283514;
        }
    }
    ctx->pc = 0x28344Cu;
    // 0x28344c: 0x92220014  lbu         $v0, 0x14($s1)
    ctx->pc = 0x28344cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x283450: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x283450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x283454: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x283454u;
    {
        const bool branch_taken_0x283454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283454u;
            // 0x283458: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x283454) {
            ctx->pc = 0x283474u;
            goto label_283474;
        }
    }
    ctx->pc = 0x28345Cu;
    // 0x28345c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28345cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283460: 0xc0a0d50  jal         func_283540
    ctx->pc = 0x283460u;
    SET_GPR_U32(ctx, 31, 0x283468u);
    ctx->pc = 0x283464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283460u;
            // 0x283464: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283540u;
    if (runtime->hasFunction(0x283540u)) {
        auto targetFn = runtime->lookupFunction(0x283540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283468u; }
        if (ctx->pc != 0x283468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00283540_0x283540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283468u; }
        if (ctx->pc != 0x283468u) { return; }
    }
    ctx->pc = 0x283468u;
label_283468:
    // 0x283468: 0x92240016  lbu         $a0, 0x16($s1)
    ctx->pc = 0x283468u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x28346c: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x28346cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x283470: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x283470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_283474:
    // 0x283474: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x283474u;
    {
        const bool branch_taken_0x283474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283474u;
            // 0x283478: 0xde300000  ld          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283474) {
            ctx->pc = 0x283494u;
            goto label_283494;
        }
    }
    ctx->pc = 0x28347Cu;
    // 0x28347c: 0x52000006  beql        $s0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x28347Cu;
    {
        const bool branch_taken_0x28347c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x28347c) {
            ctx->pc = 0x283480u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28347Cu;
            // 0x283480: 0x92220014  lbu         $v0, 0x14($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x283498u;
            goto label_283498;
        }
    }
    ctx->pc = 0x283484u;
    // 0x283484: 0x92220017  lbu         $v0, 0x17($s1)
    ctx->pc = 0x283484u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 23)));
    // 0x283488: 0x6610ffff  daddiu      $s0, $s0, -0x1
    ctx->pc = 0x283488u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)4294967295);
    // 0x28348c: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x28348cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x283490: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x283490u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_283494:
    // 0x283494: 0x92220014  lbu         $v0, 0x14($s1)
    ctx->pc = 0x283494u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
label_283498:
    // 0x283498: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x283498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x28349c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x28349Cu;
    {
        const bool branch_taken_0x28349c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28349c) {
            ctx->pc = 0x2834C8u;
            goto label_2834c8;
        }
    }
    ctx->pc = 0x2834A4u;
    // 0x2834a4: 0xde220010  ld          $v0, 0x10($s1)
    ctx->pc = 0x2834a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2834a8: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x2834a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x2834ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2834ACu;
    {
        const bool branch_taken_0x2834ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2834ac) {
            ctx->pc = 0x2834C8u;
            goto label_2834c8;
        }
    }
    ctx->pc = 0x2834B4u;
    // 0x2834b4: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2834b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2834b8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2834B8u;
    {
        const bool branch_taken_0x2834b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2834b8) {
            ctx->pc = 0x2834BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2834B8u;
            // 0x2834bc: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2834ECu;
            goto label_2834ec;
        }
    }
    ctx->pc = 0x2834C0u;
    // 0x2834c0: 0x1000ffd5  b           . + 4 + (-0x2B << 2)
    ctx->pc = 0x2834C0u;
    {
        const bool branch_taken_0x2834c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2834C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2834C0u;
            // 0x2834c4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2834c0) {
            ctx->pc = 0x283418u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_283418;
        }
    }
    ctx->pc = 0x2834C8u;
label_2834c8:
    // 0x2834c8: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2834C8u;
    {
        const bool branch_taken_0x2834c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2834CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2834C8u;
            // 0x2834cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2834c8) {
            ctx->pc = 0x2834E8u;
            goto label_2834e8;
        }
    }
    ctx->pc = 0x2834D0u;
    // 0x2834d0: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x2834d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x2834d4: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x2834d4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x2834d8: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x2834d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2834dc: 0xc049c48  jal         func_127120
    ctx->pc = 0x2834DCu;
    SET_GPR_U32(ctx, 31, 0x2834E4u);
    ctx->pc = 0x2834E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2834DCu;
            // 0x2834e0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2834E4u; }
        if (ctx->pc != 0x2834E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2834E4u; }
        if (ctx->pc != 0x2834E4u) { return; }
    }
    ctx->pc = 0x2834E4u;
label_2834e4:
    // 0x2834e4: 0x2509021  addu        $s2, $s2, $s0
    ctx->pc = 0x2834e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_2834e8:
    // 0x2834e8: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2834e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2834ec:
    // 0x2834ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2834ECu;
    {
        const bool branch_taken_0x2834ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2834F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2834ECu;
            // 0x2834f0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2834ec) {
            ctx->pc = 0x2834FCu;
            goto label_2834fc;
        }
    }
    ctx->pc = 0x2834F4u;
    // 0x2834f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2834F4u;
    {
        const bool branch_taken_0x2834f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2834F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2834F4u;
            // 0x2834f8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2834f4) {
            ctx->pc = 0x283504u;
            goto label_283504;
        }
    }
    ctx->pc = 0x2834FCu;
label_2834fc:
    // 0x2834fc: 0x8e310018  lw          $s1, 0x18($s1)
    ctx->pc = 0x2834fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x283500: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x283500u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_283504:
    // 0x283504: 0x1620ffc4  bnez        $s1, . + 4 + (-0x3C << 2)
    ctx->pc = 0x283504u;
    {
        const bool branch_taken_0x283504 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x283508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283504u;
            // 0x283508: 0x2551823  subu        $v1, $s2, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283504) {
            ctx->pc = 0x283418u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_283418;
        }
    }
    ctx->pc = 0x28350Cu;
    // 0x28350c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28350cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283510: 0xfec30000  sd          $v1, 0x0($s6)
    ctx->pc = 0x283510u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 3));
label_283514:
    // 0x283514: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x283514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x283518: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x283518u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28351c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x28351cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x283520: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x283520u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x283524: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x283524u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x283528: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x283528u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28352c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28352cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x283530: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x283530u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283534: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x283534u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283538: 0x3e00008  jr          $ra
    ctx->pc = 0x283538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28353Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283538u;
            // 0x28353c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x283540u;
    ctx->pc = 0x283540u;
}
