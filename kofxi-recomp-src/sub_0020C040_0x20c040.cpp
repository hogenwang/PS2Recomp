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

// Function: sub_0020C040
// Address: 0x20c040 - 0x20c0f0
void sub_0020C040_0x20c040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C040_0x20c040");
#endif

    switch (ctx->pc) {
        case 0x20c0a8u: goto label_20c0a8;
        case 0x20c0bcu: goto label_20c0bc;
        case 0x20c0c0u: goto label_20c0c0;
        case 0x20c0e4u: goto label_20c0e4;
        default: break;
    }

    ctx->pc = 0x20c040u;

    // 0x20c040: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20c040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20c044: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x20c044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x20c048: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20c048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20c04c: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x20c04cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x20c050: 0x8c49a490  lw          $t1, -0x5B70($v0)
    ctx->pc = 0x20c050u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943888)));
    // 0x20c054: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x20c054u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x20c058: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20c058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20c05c: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x20c05cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x20c060: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20c060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c064: 0x7d200000  sq          $zero, 0x0($t1)
    ctx->pc = 0x20c064u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 0));
    // 0x20c068: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x20c068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x20c06c: 0x8ca8a498  lw          $t0, -0x5B68($a1)
    ctx->pc = 0x20c06cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294943896)));
    // 0x20c070: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x20c070u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x20c074: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x20c074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x20c078: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x20c078u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x20c07c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x20c07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x20c080: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x20c080u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
    // 0x20c084: 0x8c65a490  lw          $a1, -0x5B70($v1)
    ctx->pc = 0x20c084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943888)));
    // 0x20c088: 0x8c43a498  lw          $v1, -0x5B68($v0)
    ctx->pc = 0x20c088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943896)));
    // 0x20c08c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x20c08cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20c090: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20c090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20c094: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x20c094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x20c098: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20c098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x20c09c: 0x7c400010  sq          $zero, 0x10($v0)
    ctx->pc = 0x20c09cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 0));
    // 0x20c0a0: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x20C0A0u;
    SET_GPR_U32(ctx, 31, 0x20C0A8u);
    ctx->pc = 0x20C0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C0A0u;
    // 0x20c0a4: 0xac460010  sw          $a2, 0x10($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x20C0A0u, 0x20C0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C0A8u;
label_20c0a8:
    // 0x20c0a8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x20c0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x20c0ac: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x20c0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x20c0b0: 0x8c45a490  lw          $a1, -0x5B70($v0)
    ctx->pc = 0x20c0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943888)));
    // 0x20c0b4: 0xc040a04  jal         func_102810
    ctx->pc = 0x20C0B4u;
    SET_GPR_U32(ctx, 31, 0x20C0BCu);
    ctx->pc = 0x20C0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C0B4u;
    // 0x20c0b8: 0x8c64e688  lw          $a0, -0x1978($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960776)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102810u, 0x20C0B4u, 0x20C0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C0BCu;
label_20c0bc:
    // 0x20c0bc: 0x3c021001  lui         $v0, 0x1001
    ctx->pc = 0x20c0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4097 << 16));
label_20c0c0:
    // 0x20c0c0: 0x8c43a000  lw          $v1, -0x6000($v0)
    ctx->pc = 0x20c0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294942720))); // MMIO: 0x1000a000
    // 0x20c0c4: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x20c0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x20c0c8: 0x0  nop
    ctx->pc = 0x20c0c8u;
    // NOP
    // 0x20c0cc: 0x0  nop
    ctx->pc = 0x20c0ccu;
    // NOP
    // 0x20c0d0: 0x0  nop
    ctx->pc = 0x20c0d0u;
    // NOP
    // 0x20c0d4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20C0D4u;
    {
        const bool branch_taken_0x20c0d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c0d4) {
            ctx->pc = 0x20C0C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20c0c0;
        }
    }
    ctx->pc = 0x20C0DCu;
    // 0x20c0dc: 0xc08303c  jal         func_20C0F0
    ctx->pc = 0x20C0DCu;
    SET_GPR_U32(ctx, 31, 0x20C0E4u);
    ctx->pc = 0x20C0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C0F0u, 0x20C0DCu, 0x20C0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C0E4u;
label_20c0e4:
    // 0x20c0e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20c0e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c0e8: 0x3e00008  jr          $ra
    ctx->pc = 0x20C0E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C0E8u;
        // 0x20c0ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C0E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20C0F0u;
}
