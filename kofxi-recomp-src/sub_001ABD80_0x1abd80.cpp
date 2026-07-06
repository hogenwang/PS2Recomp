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

// Function: sub_001ABD80
// Address: 0x1abd80 - 0x1abdc8
void sub_001ABD80_0x1abd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ABD80_0x1abd80");
#endif

    switch (ctx->pc) {
        case 0x1abd80u: goto label_1abd80;
        case 0x1abd84u: goto label_1abd84;
        case 0x1abd88u: goto label_1abd88;
        case 0x1abd8cu: goto label_1abd8c;
        case 0x1abd90u: goto label_1abd90;
        case 0x1abd94u: goto label_1abd94;
        case 0x1abd98u: goto label_1abd98;
        case 0x1abd9cu: goto label_1abd9c;
        case 0x1abda0u: goto label_1abda0;
        case 0x1abda4u: goto label_1abda4;
        case 0x1abda8u: goto label_1abda8;
        case 0x1abdacu: goto label_1abdac;
        case 0x1abdb0u: goto label_1abdb0;
        case 0x1abdb4u: goto label_1abdb4;
        case 0x1abdb8u: goto label_1abdb8;
        case 0x1abdbcu: goto label_1abdbc;
        case 0x1abdc0u: goto label_1abdc0;
        case 0x1abdc4u: goto label_1abdc4;
        default: break;
    }

    ctx->pc = 0x1abd80u;

label_1abd80:
    // 0x1abd80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1abd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1abd84:
    // 0x1abd84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1abd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1abd88:
    // 0x1abd88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1abd88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1abd8c:
    // 0x1abd8c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1abd8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1abd90:
    // 0x1abd90: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x1abd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
label_1abd94:
    // 0x1abd94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1abd98:
    if (ctx->pc == 0x1ABD98u) {
        ctx->pc = 0x1ABD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABD94u;
        // 0x1abd98: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABD9Cu;
        goto label_1abd9c;
    }
    ctx->pc = 0x1ABD94u;
    {
        const bool branch_taken_0x1abd94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABD94u;
        // 0x1abd98: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abd94) {
            ctx->pc = 0x1ABDA8u;
            goto label_1abda8;
        }
    }
    ctx->pc = 0x1ABD9Cu;
label_1abd9c:
    // 0x1abd9c: 0x8c43e698  lw          $v1, -0x1968($v0)
    ctx->pc = 0x1abd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960792)));
label_1abda0:
    // 0x1abda0: 0x60f809  jalr        $v1
label_1abda4:
    if (ctx->pc == 0x1ABDA4u) {
        ctx->pc = 0x1ABDA8u;
        goto label_1abda8;
    }
    ctx->pc = 0x1ABDA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1ABDA8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABDA0u, 0x1ABDA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ABDA8u;
label_1abda8:
    // 0x1abda8: 0xc06f72e  jal         func_1BDCB8
label_1abdac:
    if (ctx->pc == 0x1ABDACu) {
        ctx->pc = 0x1ABDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABDA8u;
        // 0x1abdac: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABDB0u;
        goto label_1abdb0;
    }
    ctx->pc = 0x1ABDA8u;
    SET_GPR_U32(ctx, 31, 0x1ABDB0u);
    ctx->pc = 0x1ABDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABDA8u;
    // 0x1abdac: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDCB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDCB8u, 0x1ABDA8u, 0x1ABDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABDB0u;
label_1abdb0:
    // 0x1abdb0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1abdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1abdb4:
    // 0x1abdb4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1abdb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1abdb8:
    // 0x1abdb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1abdb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1abdbc:
    // 0x1abdbc: 0x3e00008  jr          $ra
label_1abdc0:
    if (ctx->pc == 0x1ABDC0u) {
        ctx->pc = 0x1ABDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABDBCu;
        // 0x1abdc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABDC4u;
        goto label_1abdc4;
    }
    ctx->pc = 0x1ABDBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABDBCu;
        // 0x1abdc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABDBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABDC4u;
label_1abdc4:
    // 0x1abdc4: 0x0  nop
    ctx->pc = 0x1abdc4u;
    // NOP
    if (ctx->pc == 0x1abdc4u) { ctx->pc = 0x1abdc8u; }
}
