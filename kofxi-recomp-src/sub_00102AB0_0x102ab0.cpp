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

// Function: sub_00102AB0
// Address: 0x102ab0 - 0x102b20
void sub_00102AB0_0x102ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102AB0_0x102ab0");
#endif

    switch (ctx->pc) {
        case 0x102ad8u: goto label_102ad8;
        case 0x102b0cu: goto label_102b0c;
        default: break;
    }

    ctx->pc = 0x102ab0u;

    // 0x102ab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x102ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x102ab4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x102ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x102ab8: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x102AB8u;
    {
        const bool branch_taken_0x102ab8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x102ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102AB8u;
        // 0x102abc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102ab8) {
            ctx->pc = 0x102AD0u;
            goto label_102ad0;
        }
    }
    ctx->pc = 0x102AC0u;
    // 0x102ac0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x102ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x102ac4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x102ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x102ac8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x102AC8u;
    {
        const bool branch_taken_0x102ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102AC8u;
        // 0x102acc: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x102ac8) {
            ctx->pc = 0x102ADCu;
            goto label_102adc;
        }
    }
    ctx->pc = 0x102AD0u;
label_102ad0:
    // 0x102ad0: 0xc0408e2  jal         func_102388
    ctx->pc = 0x102AD0u;
    SET_GPR_U32(ctx, 31, 0x102AD8u);
    ctx->pc = 0x102388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102388u, 0x102AD0u, 0x102AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102AD8u;
label_102ad8:
    // 0x102ad8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x102ad8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_102adc:
    // 0x102adc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x102adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x102AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102AE0u;
        // 0x102ae4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102AE8u;
    // 0x102ae8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x102ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x102aec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x102aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x102af0: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x102AF0u;
    {
        const bool branch_taken_0x102af0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x102AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102AF0u;
        // 0x102af4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102af0) {
            ctx->pc = 0x102B04u;
            goto label_102b04;
        }
    }
    ctx->pc = 0x102AF8u;
    // 0x102af8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x102af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x102afc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x102AFCu;
    {
        const bool branch_taken_0x102afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102AFCu;
        // 0x102b00: 0x45102b  sltu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x102afc) {
            ctx->pc = 0x102B10u;
            goto label_102b10;
        }
    }
    ctx->pc = 0x102B04u;
label_102b04:
    // 0x102b04: 0xc0408fe  jal         func_1023F8
    ctx->pc = 0x102B04u;
    SET_GPR_U32(ctx, 31, 0x102B0Cu);
    ctx->pc = 0x102B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102B04u;
    // 0x102b08: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1023F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1023F8u, 0x102B04u, 0x102B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102B0Cu;
label_102b0c:
    // 0x102b0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x102b0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_102b10:
    // 0x102b10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x102b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102b14: 0x3e00008  jr          $ra
    ctx->pc = 0x102B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B14u;
        // 0x102b18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102B1Cu;
    // 0x102b1c: 0x0  nop
    ctx->pc = 0x102b1cu;
    // NOP
}
