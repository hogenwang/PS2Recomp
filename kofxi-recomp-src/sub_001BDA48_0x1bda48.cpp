#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BDA48
// Address: 0x1bda48 - 0x1bdb18
void sub_001BDA48_0x1bda48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BDA48_0x1bda48");
#endif

    switch (ctx->pc) {
        case 0x1bda70u: goto label_1bda70;
        case 0x1bdac4u: goto label_1bdac4;
        case 0x1bdaecu: goto label_1bdaec;
        case 0x1bdafcu: goto label_1bdafc;
        default: break;
    }

    ctx->pc = 0x1bda48u;

    // 0x1bda48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bda48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bda4c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1bda4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1bda50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bda50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bda54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bda54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bda58: 0x2483c3d0  addiu       $v1, $a0, -0x3C30
    ctx->pc = 0x1bda58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951888));
    // 0x1bda5c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bda5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bda60: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1bda60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bda64: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BDA64u;
    {
        const bool branch_taken_0x1bda64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDA64u;
        // 0x1bda68: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bda64) {
            ctx->pc = 0x1BDA94u;
            goto label_1bda94;
        }
    }
    ctx->pc = 0x1BDA6Cu;
    // 0x1bda6c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1bda6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1bda70:
    // 0x1bda70: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x1bda70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1bda74: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BDA74u;
    {
        const bool branch_taken_0x1bda74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDA74u;
        // 0x1bda78: 0x2463003c  addiu       $v1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bda74) {
            ctx->pc = 0x1BDA94u;
            goto label_1bda94;
        }
    }
    ctx->pc = 0x1BDA7Cu;
    // 0x1bda7c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1bda7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bda80: 0x0  nop
    ctx->pc = 0x1bda80u;
    // NOP
    // 0x1bda84: 0x0  nop
    ctx->pc = 0x1bda84u;
    // NOP
    // 0x1bda88: 0x0  nop
    ctx->pc = 0x1bda88u;
    // NOP
    // 0x1bda8c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1BDA8Cu;
    {
        const bool branch_taken_0x1bda8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bda8c) {
            ctx->pc = 0x1BDA90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BDA8Cu;
            // 0x1bda90: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BDA70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bda70;
        }
    }
    ctx->pc = 0x1BDA94u;
label_1bda94:
    // 0x1bda94: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1bda94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1bda98: 0x12230019  beq         $s1, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1BDA98u;
    {
        const bool branch_taken_0x1bda98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BDA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDA98u;
        // 0x1bda9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bda98) {
            ctx->pc = 0x1BDB00u;
            goto label_1bdb00;
        }
    }
    ctx->pc = 0x1BDAA0u;
    // 0x1bdaa0: 0x118100  sll         $s0, $s1, 4
    ctx->pc = 0x1bdaa0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1bdaa4: 0x2482c3d0  addiu       $v0, $a0, -0x3C30
    ctx->pc = 0x1bdaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951888));
    // 0x1bdaa8: 0x2118023  subu        $s0, $s0, $s1
    ctx->pc = 0x1bdaa8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1bdaac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bdaacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdab0: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1bdab0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1bdab4: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x1bdab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1bdab8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1bdab8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1bdabc: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1BDABCu;
    SET_GPR_U32(ctx, 31, 0x1BDAC4u);
    ctx->pc = 0x1BDAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDABCu;
    // 0x1bdac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1BDABCu, 0x1BDAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDAC4u;
label_1bdac4:
    // 0x1bdac4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bdac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bdac8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1bdac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1bdacc: 0x240401f4  addiu       $a0, $zero, 0x1F4
    ctx->pc = 0x1bdaccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x1bdad0: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x1bdad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x1bdad4: 0x3405ac44  ori         $a1, $zero, 0xAC44
    ctx->pc = 0x1bdad4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44100);
    // 0x1bdad8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1bdad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1bdadc: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x1bdadcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1bdae0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1bdae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1bdae4: 0xc06b49e  jal         func_1AD278
    ctx->pc = 0x1BDAE4u;
    SET_GPR_U32(ctx, 31, 0x1BDAECu);
    ctx->pc = 0x1BDAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDAE4u;
    // 0x1bdae8: 0x26070032  addiu       $a3, $s0, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD278u, 0x1BDAE4u, 0x1BDAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDAECu;
label_1bdaec:
    // 0x1bdaec: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x1bdaecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x1bdaf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bdaf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdaf4: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1BDAF4u;
    SET_GPR_U32(ctx, 31, 0x1BDAFCu);
    ctx->pc = 0x1BDAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDAF4u;
    // 0x1bdaf8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1BDAF4u, 0x1BDAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDAFCu;
label_1bdafc:
    // 0x1bdafc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bdafcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bdb00:
    // 0x1bdb00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bdb00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bdb04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bdb04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bdb08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bdb08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bdb0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDB0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDB0Cu;
        // 0x1bdb10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDB0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BDB14u;
    // 0x1bdb14: 0x0  nop
    ctx->pc = 0x1bdb14u;
    // NOP
    if (ctx->pc == 0x1bdb14u) { ctx->pc = 0x1bdb18u; }
}
