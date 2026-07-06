#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C5410
// Address: 0x2c5410 - 0x2c5768
void sub_002C5410_0x2c5410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5410_0x2c5410");
#endif

    switch (ctx->pc) {
        case 0x2c542cu: goto label_2c542c;
        case 0x2c5434u: goto label_2c5434;
        case 0x2c5448u: goto label_2c5448;
        case 0x2c5458u: goto label_2c5458;
        case 0x2c5468u: goto label_2c5468;
        case 0x2c54a0u: goto label_2c54a0;
        case 0x2c54b0u: goto label_2c54b0;
        case 0x2c54c0u: goto label_2c54c0;
        case 0x2c54d4u: goto label_2c54d4;
        case 0x2c54fcu: goto label_2c54fc;
        case 0x2c5508u: goto label_2c5508;
        case 0x2c5514u: goto label_2c5514;
        case 0x2c5520u: goto label_2c5520;
        case 0x2c5548u: goto label_2c5548;
        case 0x2c5594u: goto label_2c5594;
        case 0x2c55dcu: goto label_2c55dc;
        case 0x2c5604u: goto label_2c5604;
        case 0x2c5640u: goto label_2c5640;
        case 0x2c567cu: goto label_2c567c;
        case 0x2c56b8u: goto label_2c56b8;
        case 0x2c56ccu: goto label_2c56cc;
        case 0x2c56d8u: goto label_2c56d8;
        case 0x2c5718u: goto label_2c5718;
        case 0x2c5728u: goto label_2c5728;
        case 0x2c574cu: goto label_2c574c;
        default: break;
    }

    ctx->pc = 0x2c5410u;

    // 0x2c5410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c5410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c5414: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c5414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c5418: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c5418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c541c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C541Cu;
    {
        const bool branch_taken_0x2c541c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C541Cu;
            // 0x2c5420: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c541c) {
            ctx->pc = 0x2C5448u;
            goto label_2c5448;
        }
    }
    ctx->pc = 0x2C5424u;
    // 0x2c5424: 0xc0a070c  jal         func_281C30
    ctx->pc = 0x2C5424u;
    SET_GPR_U32(ctx, 31, 0x2C542Cu);
    ctx->pc = 0x2C5428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5424u;
            // 0x2c5428: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281C30u;
    if (runtime->hasFunction(0x281C30u)) {
        auto targetFn = runtime->lookupFunction(0x281C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C542Cu; }
        if (ctx->pc != 0x2C542Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281C30_0x281c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C542Cu; }
        if (ctx->pc != 0x2C542Cu) { return; }
    }
    ctx->pc = 0x2C542Cu;
label_2c542c:
    // 0x2c542c: 0xc0a070c  jal         func_281C30
    ctx->pc = 0x2C542Cu;
    SET_GPR_U32(ctx, 31, 0x2C5434u);
    ctx->pc = 0x2C5430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C542Cu;
            // 0x2c5430: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281C30u;
    if (runtime->hasFunction(0x281C30u)) {
        auto targetFn = runtime->lookupFunction(0x281C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5434u; }
        if (ctx->pc != 0x2C5434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281C30_0x281c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5434u; }
        if (ctx->pc != 0x2C5434u) { return; }
    }
    ctx->pc = 0x2C5434u;
label_2c5434:
    // 0x2c5434: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c5434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5438: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c5438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c543c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c543cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c5440: 0x80a8c0a  j           func_2A3028
    ctx->pc = 0x2C5440u;
    ctx->pc = 0x2C5444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5440u;
            // 0x2c5444: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002A3028_0x2a3028(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2C5448u;
label_2c5448:
    // 0x2c5448: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c5448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c544c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c544cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c5450: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5450u;
            // 0x2c5454: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C5458u;
label_2c5458:
    // 0x2c5458: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2c5458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2c545c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C545Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C545Cu;
            // 0x2c5460: 0x24427e68  addiu       $v0, $v0, 0x7E68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32360));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C5464u;
    // 0x2c5464: 0x0  nop
    ctx->pc = 0x2c5464u;
    // NOP
label_2c5468:
    // 0x2c5468: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c5468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c546c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2c546cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2c5470: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2c5470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2c5474: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c5474u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5478: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c5478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c547c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c547cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5480: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2c5480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2c5484: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C5484u;
    {
        const bool branch_taken_0x2c5484 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5484u;
            // 0x2c5488: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5484) {
            ctx->pc = 0x2C5494u;
            goto label_2c5494;
        }
    }
    ctx->pc = 0x2C548Cu;
    // 0x2c548c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2C548Cu;
    {
        const bool branch_taken_0x2c548c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C548Cu;
            // 0x2c5490: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c548c) {
            ctx->pc = 0x2C552Cu;
            goto label_2c552c;
        }
    }
    ctx->pc = 0x2C5494u;
label_2c5494:
    // 0x2c5494: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2c5494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2c5498: 0xc0b0a1a  jal         func_2C2868
    ctx->pc = 0x2C5498u;
    SET_GPR_U32(ctx, 31, 0x2C54A0u);
    ctx->pc = 0x2C549Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5498u;
            // 0x2c549c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2868u;
    if (runtime->hasFunction(0x2C2868u)) {
        auto targetFn = runtime->lookupFunction(0x2C2868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C54A0u; }
        if (ctx->pc != 0x2C54A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C2868_0x2c2868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C54A0u; }
        if (ctx->pc != 0x2C54A0u) { return; }
    }
    ctx->pc = 0x2C54A0u;
label_2c54a0:
    // 0x2c54a0: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2c54a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2c54a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c54a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c54a8: 0xc0b093c  jal         func_2C24F0
    ctx->pc = 0x2C54A8u;
    SET_GPR_U32(ctx, 31, 0x2C54B0u);
    ctx->pc = 0x2C54ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C54A8u;
            // 0x2c54ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C24F0u;
    if (runtime->hasFunction(0x2C24F0u)) {
        auto targetFn = runtime->lookupFunction(0x2C24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C54B0u; }
        if (ctx->pc != 0x2C54B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C24F0_0x2c24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C54B0u; }
        if (ctx->pc != 0x2C54B0u) { return; }
    }
    ctx->pc = 0x2C54B0u;
label_2c54b0:
    // 0x2c54b0: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x2c54b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2c54b4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2c54b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2c54b8: 0xc09fc32  jal         func_27F0C8
    ctx->pc = 0x2C54B8u;
    SET_GPR_U32(ctx, 31, 0x2C54C0u);
    ctx->pc = 0x2C54BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C54B8u;
            // 0x2c54bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C8u;
    if (runtime->hasFunction(0x27F0C8u)) {
        auto targetFn = runtime->lookupFunction(0x27F0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C54C0u; }
        if (ctx->pc != 0x2C54C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F0C8_0x27f0c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C54C0u; }
        if (ctx->pc != 0x2C54C0u) { return; }
    }
    ctx->pc = 0x2C54C0u;
label_2c54c0:
    // 0x2c54c0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2c54c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2c54c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c54c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c54c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c54c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c54cc: 0xc0a063a  jal         func_2818E8
    ctx->pc = 0x2C54CCu;
    SET_GPR_U32(ctx, 31, 0x2C54D4u);
    ctx->pc = 0x2C54D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C54CCu;
            // 0x2c54d0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2818E8u;
    if (runtime->hasFunction(0x2818E8u)) {
        auto targetFn = runtime->lookupFunction(0x2818E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C54D4u; }
        if (ctx->pc != 0x2C54D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002818E8_0x2818e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C54D4u; }
        if (ctx->pc != 0x2C54D4u) { return; }
    }
    ctx->pc = 0x2C54D4u;
label_2c54d4:
    // 0x2c54d4: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C54D4u;
    {
        const bool branch_taken_0x2c54d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C54D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C54D4u;
            // 0x2c54d8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c54d4) {
            ctx->pc = 0x2C552Cu;
            goto label_2c552c;
        }
    }
    ctx->pc = 0x2C54DCu;
    // 0x2c54dc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2c54dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c54e0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c54e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c54e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c54e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c54e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c54e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c54ec: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2c54ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2c54f0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2c54f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2c54f4: 0xc0a05d0  jal         func_281740
    ctx->pc = 0x2C54F4u;
    SET_GPR_U32(ctx, 31, 0x2C54FCu);
    ctx->pc = 0x2C54F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C54F4u;
            // 0x2c54f8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281740u;
    if (runtime->hasFunction(0x281740u)) {
        auto targetFn = runtime->lookupFunction(0x281740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C54FCu; }
        if (ctx->pc != 0x2C54FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281740_0x281740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C54FCu; }
        if (ctx->pc != 0x2C54FCu) { return; }
    }
    ctx->pc = 0x2C54FCu;
label_2c54fc:
    // 0x2c54fc: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2c54fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2c5500: 0xc0b0a1a  jal         func_2C2868
    ctx->pc = 0x2C5500u;
    SET_GPR_U32(ctx, 31, 0x2C5508u);
    ctx->pc = 0x2C5504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5500u;
            // 0x2c5504: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2868u;
    if (runtime->hasFunction(0x2C2868u)) {
        auto targetFn = runtime->lookupFunction(0x2C2868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5508u; }
        if (ctx->pc != 0x2C5508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C2868_0x2c2868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5508u; }
        if (ctx->pc != 0x2C5508u) { return; }
    }
    ctx->pc = 0x2C5508u;
label_2c5508:
    // 0x2c5508: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2c5508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2c550c: 0xc0b093c  jal         func_2C24F0
    ctx->pc = 0x2C550Cu;
    SET_GPR_U32(ctx, 31, 0x2C5514u);
    ctx->pc = 0x2C5510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C550Cu;
            // 0x2c5510: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C24F0u;
    if (runtime->hasFunction(0x2C24F0u)) {
        auto targetFn = runtime->lookupFunction(0x2C24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5514u; }
        if (ctx->pc != 0x2C5514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C24F0_0x2c24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5514u; }
        if (ctx->pc != 0x2C5514u) { return; }
    }
    ctx->pc = 0x2C5514u;
label_2c5514:
    // 0x2c5514: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x2c5514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2c5518: 0xc09fc32  jal         func_27F0C8
    ctx->pc = 0x2C5518u;
    SET_GPR_U32(ctx, 31, 0x2C5520u);
    ctx->pc = 0x2C551Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5518u;
            // 0x2c551c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C8u;
    if (runtime->hasFunction(0x27F0C8u)) {
        auto targetFn = runtime->lookupFunction(0x27F0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5520u; }
        if (ctx->pc != 0x2C5520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F0C8_0x27f0c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5520u; }
        if (ctx->pc != 0x2C5520u) { return; }
    }
    ctx->pc = 0x2C5520u;
label_2c5520:
    // 0x2c5520: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2c5520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c5524: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2c5524u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5528: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2c5528u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_2c552c:
    // 0x2c552c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c552cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c5530: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2c5530u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c5534: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2c5534u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c5538: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2c5538u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c553c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c553cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c5540: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5540u;
            // 0x2c5544: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C5548u;
label_2c5548:
    // 0x2c5548: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2c5548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2c554c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2c554cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c5550: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2c5550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2c5554: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x2c5554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x2c5558: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c5558u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c555c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2c555cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2c5560: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c5560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5564: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2c5564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2c5568: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2c5568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c556c: 0xffa60030  sd          $a2, 0x30($sp)
    ctx->pc = 0x2c556cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 6));
    // 0x2c5570: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2c5570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2c5574: 0xafb20028  sw          $s2, 0x28($sp)
    ctx->pc = 0x2c5574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 18));
    // 0x2c5578: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C5578u;
    {
        const bool branch_taken_0x2c5578 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C557Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5578u;
            // 0x2c557c: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5578) {
            ctx->pc = 0x2C558Cu;
            goto label_2c558c;
        }
    }
    ctx->pc = 0x2C5580u;
    // 0x2c5580: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c5580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c5584: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C5584u;
    {
        const bool branch_taken_0x2c5584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5584u;
            // 0x2c5588: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5584) {
            ctx->pc = 0x2C55ACu;
            goto label_2c55ac;
        }
    }
    ctx->pc = 0x2C558Cu;
label_2c558c:
    // 0x2c558c: 0xc0b15da  jal         func_2C5768
    ctx->pc = 0x2C558Cu;
    SET_GPR_U32(ctx, 31, 0x2C5594u);
    ctx->pc = 0x2C5768u;
    if (runtime->hasFunction(0x2C5768u)) {
        auto targetFn = runtime->lookupFunction(0x2C5768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5594u; }
        if (ctx->pc != 0x2C5594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C5768_0x2c5768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5594u; }
        if (ctx->pc != 0x2C5594u) { return; }
    }
    ctx->pc = 0x2C5594u;
label_2c5594:
    // 0x2c5594: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c5594u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5598: 0x56000004  bnel        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C5598u;
    {
        const bool branch_taken_0x2c5598 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5598) {
            ctx->pc = 0x2C559Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5598u;
            // 0x2c559c: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C55ACu;
            goto label_2c55ac;
        }
    }
    ctx->pc = 0x2C55A0u;
    // 0x2c55a0: 0x2402003d  addiu       $v0, $zero, 0x3D
    ctx->pc = 0x2c55a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x2c55a4: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x2C55A4u;
    {
        const bool branch_taken_0x2c55a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C55A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C55A4u;
            // 0x2c55a8: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c55a4) {
            ctx->pc = 0x2C5700u;
            goto label_2c5700;
        }
    }
    ctx->pc = 0x2C55ACu;
label_2c55ac:
    // 0x2c55ac: 0xdfa20030  ld          $v0, 0x30($sp)
    ctx->pc = 0x2c55acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c55b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C55B0u;
    {
        const bool branch_taken_0x2c55b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C55B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C55B0u;
            // 0x2c55b4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c55b0) {
            ctx->pc = 0x2C55C8u;
            goto label_2c55c8;
        }
    }
    ctx->pc = 0x2C55B8u;
    // 0x2c55b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2c55b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2c55bc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2c55bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2c55c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C55C0u;
    {
        const bool branch_taken_0x2c55c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C55C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C55C0u;
            // 0x2c55c4: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c55c0) {
            ctx->pc = 0x2C55CCu;
            goto label_2c55cc;
        }
    }
    ctx->pc = 0x2C55C8u;
label_2c55c8:
    // 0x2c55c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c55c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c55cc:
    // 0x2c55cc: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2c55ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2c55d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c55d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c55d4: 0xc0a067c  jal         func_2819F0
    ctx->pc = 0x2C55D4u;
    SET_GPR_U32(ctx, 31, 0x2C55DCu);
    ctx->pc = 0x2C55D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C55D4u;
            // 0x2c55d8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2819F0u;
    if (runtime->hasFunction(0x2819F0u)) {
        auto targetFn = runtime->lookupFunction(0x2819F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C55DCu; }
        if (ctx->pc != 0x2C55DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002819F0_0x2819f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C55DCu; }
        if (ctx->pc != 0x2C55DCu) { return; }
    }
    ctx->pc = 0x2C55DCu;
label_2c55dc:
    // 0x2c55dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C55DCu;
    {
        const bool branch_taken_0x2c55dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C55E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C55DCu;
            // 0x2c55e0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c55dc) {
            ctx->pc = 0x2C55F0u;
            goto label_2c55f0;
        }
    }
    ctx->pc = 0x2C55E4u;
    // 0x2c55e4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2c55e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2c55e8: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2C55E8u;
    {
        const bool branch_taken_0x2c55e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C55ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C55E8u;
            // 0x2c55ec: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c55e8) {
            ctx->pc = 0x2C5700u;
            goto label_2c5700;
        }
    }
    ctx->pc = 0x2C55F0u;
label_2c55f0:
    // 0x2c55f0: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2c55f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c55f4: 0xdfa60018  ld          $a2, 0x18($sp)
    ctx->pc = 0x2c55f4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c55f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c55f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c55fc: 0xc0b0ac4  jal         func_2C2B10
    ctx->pc = 0x2C55FCu;
    SET_GPR_U32(ctx, 31, 0x2C5604u);
    ctx->pc = 0x2C5600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C55FCu;
            // 0x2c5600: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2B10u;
    if (runtime->hasFunction(0x2C2B10u)) {
        auto targetFn = runtime->lookupFunction(0x2C2B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5604u; }
        if (ctx->pc != 0x2C5604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C2B10_0x2c2b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5604u; }
        if (ctx->pc != 0x2C5604u) { return; }
    }
    ctx->pc = 0x2C5604u;
label_2c5604:
    // 0x2c5604: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C5604u;
    {
        const bool branch_taken_0x2c5604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5604u;
            // 0x2c5608: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5604) {
            ctx->pc = 0x2C5618u;
            goto label_2c5618;
        }
    }
    ctx->pc = 0x2C560Cu;
    // 0x2c560c: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x2c560cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x2c5610: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2C5610u;
    {
        const bool branch_taken_0x2c5610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5610u;
            // 0x2c5614: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5610) {
            ctx->pc = 0x2C5700u;
            goto label_2c5700;
        }
    }
    ctx->pc = 0x2C5618u;
label_2c5618:
    // 0x2c5618: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2c5618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2c561c: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x2c561cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2c5620: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c5620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5624: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x2c5624u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c5628: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x2c5628u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2c562c: 0xafa60024  sw          $a2, 0x24($sp)
    ctx->pc = 0x2c562cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
    // 0x2c5630: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x2c5630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x2c5634: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c5634u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5638: 0xc0b0970  jal         func_2C25C0
    ctx->pc = 0x2C5638u;
    SET_GPR_U32(ctx, 31, 0x2C5640u);
    ctx->pc = 0x2C563Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5638u;
            // 0x2c563c: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C25C0u;
    if (runtime->hasFunction(0x2C25C0u)) {
        auto targetFn = runtime->lookupFunction(0x2C25C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5640u; }
        if (ctx->pc != 0x2C5640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C25C0_0x2c25c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5640u; }
        if (ctx->pc != 0x2C5640u) { return; }
    }
    ctx->pc = 0x2C5640u;
label_2c5640:
    // 0x2c5640: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C5640u;
    {
        const bool branch_taken_0x2c5640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5640u;
            // 0x2c5644: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5640) {
            ctx->pc = 0x2C5654u;
            goto label_2c5654;
        }
    }
    ctx->pc = 0x2C5648u;
    // 0x2c5648: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x2c5648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x2c564c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2C564Cu;
    {
        const bool branch_taken_0x2c564c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C564Cu;
            // 0x2c5650: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c564c) {
            ctx->pc = 0x2C5700u;
            goto label_2c5700;
        }
    }
    ctx->pc = 0x2C5654u;
label_2c5654:
    // 0x2c5654: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x2c5654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2c5658: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x2c5658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2c565c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c565cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5660: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x2c5660u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c5664: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x2c5664u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2c5668: 0xafa60024  sw          $a2, 0x24($sp)
    ctx->pc = 0x2c5668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
    // 0x2c566c: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x2c566cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x2c5670: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c5670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5674: 0xc09fc76  jal         func_27F1D8
    ctx->pc = 0x2C5674u;
    SET_GPR_U32(ctx, 31, 0x2C567Cu);
    ctx->pc = 0x2C5678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5674u;
            // 0x2c5678: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F1D8u;
    if (runtime->hasFunction(0x27F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x27F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C567Cu; }
        if (ctx->pc != 0x2C567Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F1D8_0x27f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C567Cu; }
        if (ctx->pc != 0x2C567Cu) { return; }
    }
    ctx->pc = 0x2C567Cu;
label_2c567c:
    // 0x2c567c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C567Cu;
    {
        const bool branch_taken_0x2c567c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C567Cu;
            // 0x2c5680: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c567c) {
            ctx->pc = 0x2C5690u;
            goto label_2c5690;
        }
    }
    ctx->pc = 0x2C5684u;
    // 0x2c5684: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x2c5684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x2c5688: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2C5688u;
    {
        const bool branch_taken_0x2c5688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C568Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5688u;
            // 0x2c568c: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5688) {
            ctx->pc = 0x2C5700u;
            goto label_2c5700;
        }
    }
    ctx->pc = 0x2C5690u;
label_2c5690:
    // 0x2c5690: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2c5690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c5694: 0xdfa30018  ld          $v1, 0x18($sp)
    ctx->pc = 0x2c5694u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c5698: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2c5698u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c569c: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x2c569cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x2c56a0: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x2c56a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x2c56a4: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x2c56a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2c56a8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C56A8u;
    {
        const bool branch_taken_0x2c56a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c56a8) {
            ctx->pc = 0x2C56ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C56A8u;
            // 0x2c56ac: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C56BCu;
            goto label_2c56bc;
        }
    }
    ctx->pc = 0x2C56B0u;
    // 0x2c56b0: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x2C56B0u;
    SET_GPR_U32(ctx, 31, 0x2C56B8u);
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C56B8u; }
        if (ctx->pc != 0x2C56B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3028_0x2a3028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C56B8u; }
        if (ctx->pc != 0x2C56B8u) { return; }
    }
    ctx->pc = 0x2C56B8u;
label_2c56b8:
    // 0x2c56b8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2c56b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2c56bc:
    // 0x2c56bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c56bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c56c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c56c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c56c4: 0xc0b024e  jal         func_2C0938
    ctx->pc = 0x2C56C4u;
    SET_GPR_U32(ctx, 31, 0x2C56CCu);
    ctx->pc = 0x2C56C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C56C4u;
            // 0x2c56c8: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C0938u;
    if (runtime->hasFunction(0x2C0938u)) {
        auto targetFn = runtime->lookupFunction(0x2C0938u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C56CCu; }
        if (ctx->pc != 0x2C56CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C0938_0x2c0938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C56CCu; }
        if (ctx->pc != 0x2C56CCu) { return; }
    }
    ctx->pc = 0x2C56CCu;
label_2c56cc:
    // 0x2c56cc: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2c56ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2c56d0: 0xc0a065c  jal         func_281970
    ctx->pc = 0x2C56D0u;
    SET_GPR_U32(ctx, 31, 0x2C56D8u);
    ctx->pc = 0x2C56D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C56D0u;
            // 0x2c56d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281970u;
    if (runtime->hasFunction(0x281970u)) {
        auto targetFn = runtime->lookupFunction(0x281970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C56D8u; }
        if (ctx->pc != 0x2C56D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281970_0x281970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C56D8u; }
        if (ctx->pc != 0x2C56D8u) { return; }
    }
    ctx->pc = 0x2C56D8u;
label_2c56d8:
    // 0x2c56d8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C56D8u;
    {
        const bool branch_taken_0x2c56d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C56DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C56D8u;
            // 0x2c56dc: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c56d8) {
            ctx->pc = 0x2C56ECu;
            goto label_2c56ec;
        }
    }
    ctx->pc = 0x2C56E0u;
    // 0x2c56e0: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x2c56e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x2c56e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C56E4u;
    {
        const bool branch_taken_0x2c56e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C56E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C56E4u;
            // 0x2c56e8: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c56e4) {
            ctx->pc = 0x2C5700u;
            goto label_2c5700;
        }
    }
    ctx->pc = 0x2C56ECu;
label_2c56ec:
    // 0x2c56ec: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C56ECu;
    {
        const bool branch_taken_0x2c56ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C56F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C56ECu;
            // 0x2c56f0: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c56ec) {
            ctx->pc = 0x2C56F8u;
            goto label_2c56f8;
        }
    }
    ctx->pc = 0x2C56F4u;
    // 0x2c56f4: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2c56f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_2c56f8:
    // 0x2c56f8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2C56F8u;
    {
        const bool branch_taken_0x2c56f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C56FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C56F8u;
            // 0x2c56fc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c56f8) {
            ctx->pc = 0x2C5750u;
            goto label_2c5750;
        }
    }
    ctx->pc = 0x2C5700u;
label_2c5700:
    // 0x2c5700: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x2c5700u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c5704: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2c5704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2c5708: 0x2405009f  addiu       $a1, $zero, 0x9F
    ctx->pc = 0x2c5708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
    // 0x2c570c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c570cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5710: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2C5710u;
    SET_GPR_U32(ctx, 31, 0x2C5718u);
    ctx->pc = 0x2C5714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5710u;
            // 0x2c5714: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5718u; }
        if (ctx->pc != 0x2C5718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5718u; }
        if (ctx->pc != 0x2C5718u) { return; }
    }
    ctx->pc = 0x2C5718u;
label_2c5718:
    // 0x2c5718: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2c5718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c571c: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x2c571cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2c5720: 0xc0a0738  jal         func_281CE0
    ctx->pc = 0x2C5720u;
    SET_GPR_U32(ctx, 31, 0x2C5728u);
    ctx->pc = 0x2C5724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5720u;
            // 0x2c5724: 0xa42823  subu        $a1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281CE0u;
    if (runtime->hasFunction(0x281CE0u)) {
        auto targetFn = runtime->lookupFunction(0x281CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5728u; }
        if (ctx->pc != 0x2C5728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281CE0_0x281ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5728u; }
        if (ctx->pc != 0x2C5728u) { return; }
    }
    ctx->pc = 0x2C5728u;
label_2c5728:
    // 0x2c5728: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C5728u;
    {
        const bool branch_taken_0x2c5728 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C572Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5728u;
            // 0x2c572c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5728) {
            ctx->pc = 0x2C5750u;
            goto label_2c5750;
        }
    }
    ctx->pc = 0x2C5730u;
    // 0x2c5730: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C5730u;
    {
        const bool branch_taken_0x2c5730 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5730) {
            ctx->pc = 0x2C5744u;
            goto label_2c5744;
        }
    }
    ctx->pc = 0x2C5738u;
    // 0x2c5738: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c5738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c573c: 0x10500004  beq         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C573Cu;
    {
        const bool branch_taken_0x2c573c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2C5740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C573Cu;
            // 0x2c5740: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c573c) {
            ctx->pc = 0x2C5750u;
            goto label_2c5750;
        }
    }
    ctx->pc = 0x2C5744u;
label_2c5744:
    // 0x2c5744: 0xc0b1608  jal         func_2C5820
    ctx->pc = 0x2C5744u;
    SET_GPR_U32(ctx, 31, 0x2C574Cu);
    ctx->pc = 0x2C5748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5744u;
            // 0x2c5748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C5820u;
    if (runtime->hasFunction(0x2C5820u)) {
        auto targetFn = runtime->lookupFunction(0x2C5820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C574Cu; }
        if (ctx->pc != 0x2C574Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C5820_0x2c5820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C574Cu; }
        if (ctx->pc != 0x2C574Cu) { return; }
    }
    ctx->pc = 0x2C574Cu;
label_2c574c:
    // 0x2c574c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c574cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c5750:
    // 0x2c5750: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2c5750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c5754: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x2c5754u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c5758: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x2c5758u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c575c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2c575cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c5760: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5760u;
            // 0x2c5764: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C5768u;
    ctx->pc = 0x2c5768u;
}
