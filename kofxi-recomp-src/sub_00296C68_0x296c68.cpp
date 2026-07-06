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

// Function: sub_00296C68
// Address: 0x296c68 - 0x296d40
void sub_00296C68_0x296c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296C68_0x296c68");
#endif

    switch (ctx->pc) {
        case 0x296c98u: goto label_296c98;
        case 0x296cb0u: goto label_296cb0;
        case 0x296cd4u: goto label_296cd4;
        case 0x296cf4u: goto label_296cf4;
        case 0x296d24u: goto label_296d24;
        default: break;
    }

    ctx->pc = 0x296c68u;

    // 0x296c68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x296c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x296c6c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x296c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x296c70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x296c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x296c74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x296c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x296c78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x296c78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296c7c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x296c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x296c80: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x296C80u;
    {
        const bool branch_taken_0x296c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296C80u;
        // 0x296c84: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296c80) {
            ctx->pc = 0x296CB8u;
            goto label_296cb8;
        }
    }
    ctx->pc = 0x296C88u;
    // 0x296c88: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x296c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x296c8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x296c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296c90: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x296C90u;
    SET_GPR_U32(ctx, 31, 0x296C98u);
    ctx->pc = 0x296C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296C90u;
    // 0x296c94: 0x8e060008  lw          $a2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x296C90u, 0x296C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296C98u;
label_296c98:
    // 0x296c98: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x296c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x296c9c: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x296c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x296ca0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x296CA0u;
    {
        const bool branch_taken_0x296ca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x296ca0) {
            ctx->pc = 0x296CB8u;
            goto label_296cb8;
        }
    }
    ctx->pc = 0x296CA8u;
    // 0x296ca8: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x296CA8u;
    SET_GPR_U32(ctx, 31, 0x296CB0u);
    ctx->pc = 0x296CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296CA8u;
    // 0x296cac: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x296CA8u, 0x296CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296CB0u;
label_296cb0:
    // 0x296cb0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x296cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x296cb4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x296cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_296cb8:
    // 0x296cb8: 0x52200014  beql        $s1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x296CB8u;
    {
        const bool branch_taken_0x296cb8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x296cb8) {
            ctx->pc = 0x296CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296CB8u;
            // 0x296cbc: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x296D0Cu;
            goto label_296d0c;
        }
    }
    ctx->pc = 0x296CC0u;
    // 0x296cc0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x296cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x296cc4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x296CC4u;
    {
        const bool branch_taken_0x296cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x296cc4) {
            ctx->pc = 0x296CFCu;
            goto label_296cfc;
        }
    }
    ctx->pc = 0x296CCCu;
    // 0x296ccc: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x296CCCu;
    SET_GPR_U32(ctx, 31, 0x296CD4u);
    ctx->pc = 0x296CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296CCCu;
    // 0x296cd0: 0x8e240038  lw          $a0, 0x38($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x296CCCu, 0x296CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296CD4u;
label_296cd4:
    // 0x296cd4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x296CD4u;
    {
        const bool branch_taken_0x296cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x296CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296CD4u;
        // 0x296cd8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296cd4) {
            ctx->pc = 0x296CFCu;
            goto label_296cfc;
        }
    }
    ctx->pc = 0x296CDCu;
    // 0x296cdc: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x296cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x296ce0: 0x24050076  addiu       $a1, $zero, 0x76
    ctx->pc = 0x296ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x296ce4: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x296ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x296ce8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x296ce8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296cec: 0xc0a5648  jal         func_295920
    ctx->pc = 0x296CECu;
    SET_GPR_U32(ctx, 31, 0x296CF4u);
    ctx->pc = 0x296CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296CECu;
    // 0x296cf0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x296CECu, 0x296CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296CF4u;
label_296cf4:
    // 0x296cf4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x296CF4u;
    {
        const bool branch_taken_0x296cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296CF4u;
        // 0x296cf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296cf4) {
            ctx->pc = 0x296D28u;
            goto label_296d28;
        }
    }
    ctx->pc = 0x296CFCu;
label_296cfc:
    // 0x296cfc: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x296CFCu;
    {
        const bool branch_taken_0x296cfc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x296D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296CFCu;
        // 0x296d00: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296cfc) {
            ctx->pc = 0x296D0Cu;
            goto label_296d0c;
        }
    }
    ctx->pc = 0x296D04u;
    // 0x296d04: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x296d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x296d08: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x296d08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_296d0c:
    // 0x296d0c: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x296d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x296d10: 0x18c00005  blez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x296D10u;
    {
        const bool branch_taken_0x296d10 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x296D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296D10u;
        // 0x296d14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296d10) {
            ctx->pc = 0x296D28u;
            goto label_296d28;
        }
    }
    ctx->pc = 0x296D18u;
    // 0x296d18: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x296d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x296d1c: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x296D1Cu;
    SET_GPR_U32(ctx, 31, 0x296D24u);
    ctx->pc = 0x296D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296D1Cu;
    // 0x296d20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x296D1Cu, 0x296D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296D24u;
label_296d24:
    // 0x296d24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x296d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_296d28:
    // 0x296d28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x296d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296d2c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x296d2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296d30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x296d30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296d34: 0x3e00008  jr          $ra
    ctx->pc = 0x296D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296D34u;
        // 0x296d38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296D3Cu;
    // 0x296d3c: 0x0  nop
    ctx->pc = 0x296d3cu;
    // NOP
    if (ctx->pc == 0x296d3cu) { ctx->pc = 0x296d40u; }
}
