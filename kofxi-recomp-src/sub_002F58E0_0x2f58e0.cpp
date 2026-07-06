#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F58E0
// Address: 0x2f58e0 - 0x2f59f0
void sub_002F58E0_0x2f58e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F58E0_0x2f58e0");
#endif

    switch (ctx->pc) {
        case 0x2f58f8u: goto label_2f58f8;
        case 0x2f5928u: goto label_2f5928;
        case 0x2f593cu: goto label_2f593c;
        case 0x2f5944u: goto label_2f5944;
        case 0x2f5968u: goto label_2f5968;
        default: break;
    }

    ctx->pc = 0x2f58e0u;

    // 0x2f58e0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2f58e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f58e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f58e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f58e8: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x2F58E8u;
    {
        const bool branch_taken_0x2f58e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F58ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F58E8u;
            // 0x2f58ec: 0x24a6ffff  addiu       $a2, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f58e8) {
            ctx->pc = 0x2F5920u;
            goto label_2f5920;
        }
    }
    ctx->pc = 0x2F58F0u;
    // 0x2f58f0: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2f58f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2f58f4: 0x0  nop
    ctx->pc = 0x2f58f4u;
    // NOP
label_2f58f8:
    // 0x2f58f8: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x2f58f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2f58fc: 0x24a304d8  addiu       $v1, $a1, 0x4D8
    ctx->pc = 0x2f58fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1240));
    // 0x2f5900: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2f5900u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2f5904: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2f5904u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2f5908: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f5908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f590c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2f590cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2f5910: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2f5910u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f5914: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2f5914u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2f5918: 0x14c4fff7  bne         $a2, $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2F5918u;
    {
        const bool branch_taken_0x2f5918 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x2F591Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5918u;
            // 0x2f591c: 0x1034021  addu        $t0, $t0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5918) {
            ctx->pc = 0x2F58F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f58f8;
        }
    }
    ctx->pc = 0x2F5920u;
label_2f5920:
    // 0x2f5920: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5920u;
            // 0x2f5924: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F5928u;
label_2f5928:
    // 0x2f5928: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f5928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f592c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f592cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f5930: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f5930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f5934: 0xc0bd628  jal         func_2F58A0
    ctx->pc = 0x2F5934u;
    SET_GPR_U32(ctx, 31, 0x2F593Cu);
    ctx->pc = 0x2F5938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5934u;
            // 0x2f5938: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F58A0u;
    if (runtime->hasFunction(0x2F58A0u)) {
        auto targetFn = runtime->lookupFunction(0x2F58A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F593Cu; }
        if (ctx->pc != 0x2F593Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F58A0_0x2f58a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F593Cu; }
        if (ctx->pc != 0x2F593Cu) { return; }
    }
    ctx->pc = 0x2F593Cu;
label_2f593c:
    // 0x2f593c: 0xc0be450  jal         func_2F9140
    ctx->pc = 0x2F593Cu;
    SET_GPR_U32(ctx, 31, 0x2F5944u);
    ctx->pc = 0x2F5940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F593Cu;
            // 0x2f5940: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9140u;
    if (runtime->hasFunction(0x2F9140u)) {
        auto targetFn = runtime->lookupFunction(0x2F9140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5944u; }
        if (ctx->pc != 0x2F5944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F9140_0x2f9140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5944u; }
        if (ctx->pc != 0x2F5944u) { return; }
    }
    ctx->pc = 0x2F5944u;
label_2f5944:
    // 0x2f5944: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f5944u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5948: 0x10e00025  beqz        $a3, . + 4 + (0x25 << 2)
    ctx->pc = 0x2F5948u;
    {
        const bool branch_taken_0x2f5948 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F594Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5948u;
            // 0x2f594c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5948) {
            ctx->pc = 0x2F59E0u;
            goto label_2f59e0;
        }
    }
    ctx->pc = 0x2F5950u;
    // 0x2f5950: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2f5950u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f5954: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2F5954u;
    {
        const bool branch_taken_0x2f5954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5954u;
            // 0x2f5958: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5954) {
            ctx->pc = 0x2F59D8u;
            goto label_2f59d8;
        }
    }
    ctx->pc = 0x2F595Cu;
    // 0x2f595c: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x2f595cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x2f5960: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x2f5960u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f5964: 0x0  nop
    ctx->pc = 0x2f5964u;
    // NOP
label_2f5968:
    // 0x2f5968: 0x250204d8  addiu       $v0, $t0, 0x4D8
    ctx->pc = 0x2f5968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1240));
    // 0x2f596c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2f596cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f5970: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2f5970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2f5974: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2f5974u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f5978: 0x54640012  bnel        $v1, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2F5978u;
    {
        const bool branch_taken_0x2f5978 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2f5978) {
            ctx->pc = 0x2F597Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5978u;
            // 0x2f597c: 0xa0c50000  sb          $a1, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F59C4u;
            goto label_2f59c4;
        }
    }
    ctx->pc = 0x2F5980u;
    // 0x2f5980: 0x24030025  addiu       $v1, $zero, 0x25
    ctx->pc = 0x2f5980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x2f5984: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2f5984u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2f5988: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x2f5988u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f598c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2f598cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f5990: 0x8ca305d8  lw          $v1, 0x5D8($a1)
    ctx->pc = 0x2f5990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1496)));
    // 0x2f5994: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x2f5994u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x2f5998: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f5998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f599c: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x2f599cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f59a0: 0xa0c40001  sb          $a0, 0x1($a2)
    ctx->pc = 0x2f59a0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f59a4: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2f59a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f59a8: 0x8ca305d8  lw          $v1, 0x5D8($a1)
    ctx->pc = 0x2f59a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1496)));
    // 0x2f59ac: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2f59acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2f59b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f59b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f59b4: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x2f59b4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f59b8: 0xa0c40002  sb          $a0, 0x2($a2)
    ctx->pc = 0x2f59b8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f59bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F59BCu;
    {
        const bool branch_taken_0x2f59bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F59C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F59BCu;
            // 0x2f59c0: 0x24c60003  addiu       $a2, $a2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f59bc) {
            ctx->pc = 0x2F59C8u;
            goto label_2f59c8;
        }
    }
    ctx->pc = 0x2F59C4u;
label_2f59c4:
    // 0x2f59c4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2f59c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2f59c8:
    // 0x2f59c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2f59c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2f59cc: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2f59ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f59d0: 0x5440ffe5  bnel        $v0, $zero, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2F59D0u;
    {
        const bool branch_taken_0x2f59d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f59d0) {
            ctx->pc = 0x2F59D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F59D0u;
            // 0x2f59d4: 0x92050000  lbu         $a1, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F5968u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f5968;
        }
    }
    ctx->pc = 0x2F59D8u;
label_2f59d8:
    // 0x2f59d8: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x2f59d8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f59dc: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2f59dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2f59e0:
    // 0x2f59e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f59e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f59e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f59e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f59e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F59E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F59ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F59E8u;
            // 0x2f59ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F59F0u;
    ctx->pc = 0x2f59f0u;
}
