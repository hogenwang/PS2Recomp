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

// Function: sub_002D7CA0
// Address: 0x2d7ca0 - 0x2d7d10
void sub_002D7CA0_0x2d7ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7CA0_0x2d7ca0");
#endif

    switch (ctx->pc) {
        case 0x2d7ca0u: goto label_2d7ca0;
        case 0x2d7ca4u: goto label_2d7ca4;
        case 0x2d7ca8u: goto label_2d7ca8;
        case 0x2d7cacu: goto label_2d7cac;
        case 0x2d7cb0u: goto label_2d7cb0;
        case 0x2d7cb4u: goto label_2d7cb4;
        case 0x2d7cb8u: goto label_2d7cb8;
        case 0x2d7cbcu: goto label_2d7cbc;
        case 0x2d7cc0u: goto label_2d7cc0;
        case 0x2d7cc4u: goto label_2d7cc4;
        case 0x2d7cc8u: goto label_2d7cc8;
        case 0x2d7cccu: goto label_2d7ccc;
        case 0x2d7cd0u: goto label_2d7cd0;
        case 0x2d7cd4u: goto label_2d7cd4;
        case 0x2d7cd8u: goto label_2d7cd8;
        case 0x2d7cdcu: goto label_2d7cdc;
        case 0x2d7ce0u: goto label_2d7ce0;
        case 0x2d7ce4u: goto label_2d7ce4;
        case 0x2d7ce8u: goto label_2d7ce8;
        case 0x2d7cecu: goto label_2d7cec;
        case 0x2d7cf0u: goto label_2d7cf0;
        case 0x2d7cf4u: goto label_2d7cf4;
        case 0x2d7cf8u: goto label_2d7cf8;
        case 0x2d7cfcu: goto label_2d7cfc;
        case 0x2d7d00u: goto label_2d7d00;
        case 0x2d7d04u: goto label_2d7d04;
        case 0x2d7d08u: goto label_2d7d08;
        case 0x2d7d0cu: goto label_2d7d0c;
        default: break;
    }

    ctx->pc = 0x2d7ca0u;

label_2d7ca0:
    // 0x2d7ca0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d7ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2d7ca4:
    // 0x2d7ca4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d7ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d7ca8:
    // 0x2d7ca8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d7ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d7cac:
    // 0x2d7cac: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2d7cacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2d7cb0:
    // 0x2d7cb0: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2d7cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_2d7cb4:
    // 0x2d7cb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d7cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d7cb8:
    // 0x2d7cb8: 0x80b608e  j           func_2D8238
label_2d7cbc:
    if (ctx->pc == 0x2D7CBCu) {
        ctx->pc = 0x2D7CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7CB8u;
        // 0x2d7cbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7CC0u;
        goto label_2d7cc0;
    }
    ctx->pc = 0x2D7CB8u;
    ctx->pc = 0x2D7CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7CB8u;
    // 0x2d7cbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    sub_002D8238_0x2d8238(rdram, ctx, runtime); return;
    ctx->pc = 0x2D7CC0u;
label_2d7cc0:
    // 0x2d7cc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d7cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2d7cc4:
    // 0x2d7cc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d7cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2d7cc8:
    // 0x2d7cc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d7cc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d7ccc:
    // 0x2d7ccc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2d7cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2d7cd0:
    // 0x2d7cd0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2d7cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2d7cd4:
    // 0x2d7cd4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2d7cd8:
    if (ctx->pc == 0x2D7CD8u) {
        ctx->pc = 0x2D7CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7CD4u;
        // 0x2d7cd8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7CDCu;
        goto label_2d7cdc;
    }
    ctx->pc = 0x2D7CD4u;
    {
        const bool branch_taken_0x2d7cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7cd4) {
            ctx->pc = 0x2D7CD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7CD4u;
            // 0x2d7cd8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7CE8u;
            goto label_2d7ce8;
        }
    }
    ctx->pc = 0x2D7CDCu;
label_2d7cdc:
    // 0x2d7cdc: 0x40f809  jalr        $v0
label_2d7ce0:
    if (ctx->pc == 0x2D7CE0u) {
        ctx->pc = 0x2D7CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7CDCu;
        // 0x2d7ce0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7CE4u;
        goto label_2d7ce4;
    }
    ctx->pc = 0x2D7CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D7CE4u);
        ctx->pc = 0x2D7CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7CDCu;
        // 0x2d7ce0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7CDCu, 0x2D7CE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D7CE4u;
label_2d7ce4:
    // 0x2d7ce4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d7ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d7ce8:
    // 0x2d7ce8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d7ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d7cec:
    // 0x2d7cec: 0xc0b608e  jal         func_2D8238
label_2d7cf0:
    if (ctx->pc == 0x2D7CF0u) {
        ctx->pc = 0x2D7CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7CECu;
        // 0x2d7cf0: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7CF4u;
        goto label_2d7cf4;
    }
    ctx->pc = 0x2D7CECu;
    SET_GPR_U32(ctx, 31, 0x2D7CF4u);
    ctx->pc = 0x2D7CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7CECu;
    // 0x2d7cf0: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8238u, 0x2D7CECu, 0x2D7CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7CF4u;
label_2d7cf4:
    // 0x2d7cf4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2d7cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2d7cf8:
    // 0x2d7cf8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d7cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d7cfc:
    // 0x2d7cfc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d7cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2d7d00:
    // 0x2d7d00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d7d00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d7d04:
    // 0x2d7d04: 0x80b60dc  j           func_2D8370
label_2d7d08:
    if (ctx->pc == 0x2D7D08u) {
        ctx->pc = 0x2D7D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7D04u;
        // 0x2d7d08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7D0Cu;
        goto label_2d7d0c;
    }
    ctx->pc = 0x2D7D04u;
    ctx->pc = 0x2D7D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7D04u;
    // 0x2d7d08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8370u;
    sub_002D8370_0x2d8370(rdram, ctx, runtime); return;
    ctx->pc = 0x2D7D0Cu;
label_2d7d0c:
    // 0x2d7d0c: 0x0  nop
    ctx->pc = 0x2d7d0cu;
    // NOP
    if (ctx->pc == 0x2d7d0cu) { ctx->pc = 0x2d7d10u; }
}
