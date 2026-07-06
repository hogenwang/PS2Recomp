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

// Function: sub_0031EA90
// Address: 0x31ea90 - 0x31eb30
void sub_0031EA90_0x31ea90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031EA90_0x31ea90");
#endif

    switch (ctx->pc) {
        case 0x31eae8u: goto label_31eae8;
        case 0x31eafcu: goto label_31eafc;
        case 0x31eb00u: goto label_31eb00;
        default: break;
    }

    ctx->pc = 0x31ea90u;

    // 0x31ea90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31ea90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31ea94: 0x3c0501da  lui         $a1, 0x1DA
    ctx->pc = 0x31ea94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)474 << 16));
    // 0x31ea98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31ea98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31ea9c: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x31ea9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x31eaa0: 0x7c402aa0  sq          $zero, 0x2AA0($v0)
    ctx->pc = 0x31eaa0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 10912), GPR_VEC(ctx, 0));
    // 0x31eaa4: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x31eaa4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x31eaa8: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x31eaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x31eaac: 0x24a52ab0  addiu       $a1, $a1, 0x2AB0
    ctx->pc = 0x31eaacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10928));
    // 0x31eab0: 0x8c482a90  lw          $t0, 0x2A90($v0)
    ctx->pc = 0x31eab0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10896)));
    // 0x31eab4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x31eab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x31eab8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31eab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31eabc: 0x83040  sll         $a2, $t0, 1
    ctx->pc = 0x31eabcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x31eac0: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x31eac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x31eac4: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x31eac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x31eac8: 0x64080  sll         $t0, $a2, 2
    ctx->pc = 0x31eac8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x31eacc: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x31eaccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x31ead0: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x31ead0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x31ead4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x31ead4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x31ead8: 0xac472aa0  sw          $a3, 0x2AA0($v0)
    ctx->pc = 0x31ead8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10912), GPR_U32(ctx, 7));
    // 0x31eadc: 0x7ca00000  sq          $zero, 0x0($a1)
    ctx->pc = 0x31eadcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 0));
    // 0x31eae0: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x31EAE0u;
    SET_GPR_U32(ctx, 31, 0x31EAE8u);
    ctx->pc = 0x31EAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EAE0u;
    // 0x31eae4: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x31EAE0u, 0x31EAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EAE8u;
label_31eae8:
    // 0x31eae8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x31eae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x31eaec: 0x3c0501da  lui         $a1, 0x1DA
    ctx->pc = 0x31eaecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)474 << 16));
    // 0x31eaf0: 0x8c44e688  lw          $a0, -0x1978($v0)
    ctx->pc = 0x31eaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960776)));
    // 0x31eaf4: 0xc040a04  jal         func_102810
    ctx->pc = 0x31EAF4u;
    SET_GPR_U32(ctx, 31, 0x31EAFCu);
    ctx->pc = 0x31EAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EAF4u;
    // 0x31eaf8: 0x24a52aa0  addiu       $a1, $a1, 0x2AA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102810u, 0x31EAF4u, 0x31EAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EAFCu;
label_31eafc:
    // 0x31eafc: 0x3c031001  lui         $v1, 0x1001
    ctx->pc = 0x31eafcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4097 << 16));
label_31eb00:
    // 0x31eb00: 0x8c64a000  lw          $a0, -0x6000($v1)
    ctx->pc = 0x31eb00u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 4294942720))); // MMIO: 0x1000a000
    // 0x31eb04: 0x30840100  andi        $a0, $a0, 0x100
    ctx->pc = 0x31eb04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x31eb08: 0x0  nop
    ctx->pc = 0x31eb08u;
    // NOP
    // 0x31eb0c: 0x0  nop
    ctx->pc = 0x31eb0cu;
    // NOP
    // 0x31eb10: 0x0  nop
    ctx->pc = 0x31eb10u;
    // NOP
    // 0x31eb14: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x31EB14u;
    {
        const bool branch_taken_0x31eb14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x31eb14) {
            ctx->pc = 0x31EB00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31eb00;
        }
    }
    ctx->pc = 0x31EB1Cu;
    // 0x31eb1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31eb1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31eb20: 0x3e00008  jr          $ra
    ctx->pc = 0x31EB20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31EB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EB20u;
        // 0x31eb24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EB20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31EB28u;
    // 0x31eb28: 0x0  nop
    ctx->pc = 0x31eb28u;
    // NOP
    // 0x31eb2c: 0x0  nop
    ctx->pc = 0x31eb2cu;
    // NOP
}
