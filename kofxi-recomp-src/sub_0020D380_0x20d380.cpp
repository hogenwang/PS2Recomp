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

// Function: sub_0020D380
// Address: 0x20d380 - 0x20d430
void sub_0020D380_0x20d380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D380_0x20d380");
#endif

    switch (ctx->pc) {
        case 0x20d3e8u: goto label_20d3e8;
        case 0x20d3fcu: goto label_20d3fc;
        case 0x20d400u: goto label_20d400;
        case 0x20d424u: goto label_20d424;
        default: break;
    }

    ctx->pc = 0x20d380u;

    // 0x20d380: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20d380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20d384: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x20d384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x20d388: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20d388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20d38c: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x20d38cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x20d390: 0x8c49a490  lw          $t1, -0x5B70($v0)
    ctx->pc = 0x20d390u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943888)));
    // 0x20d394: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x20d394u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x20d398: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20d398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20d39c: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x20d39cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x20d3a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20d3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d3a4: 0x7d200000  sq          $zero, 0x0($t1)
    ctx->pc = 0x20d3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 0));
    // 0x20d3a8: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x20d3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x20d3ac: 0x8ca8a080  lw          $t0, -0x5F80($a1)
    ctx->pc = 0x20d3acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294942848)));
    // 0x20d3b0: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x20d3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x20d3b4: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x20d3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x20d3b8: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x20d3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x20d3bc: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x20d3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x20d3c0: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x20d3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
    // 0x20d3c4: 0x8c65a490  lw          $a1, -0x5B70($v1)
    ctx->pc = 0x20d3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943888)));
    // 0x20d3c8: 0x8c43a080  lw          $v1, -0x5F80($v0)
    ctx->pc = 0x20d3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942848)));
    // 0x20d3cc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x20d3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20d3d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20d3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20d3d4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x20d3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x20d3d8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20d3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x20d3dc: 0x7c400010  sq          $zero, 0x10($v0)
    ctx->pc = 0x20d3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 0));
    // 0x20d3e0: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x20D3E0u;
    SET_GPR_U32(ctx, 31, 0x20D3E8u);
    ctx->pc = 0x20D3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D3E0u;
    // 0x20d3e4: 0xac460010  sw          $a2, 0x10($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x20D3E0u, 0x20D3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D3E8u;
label_20d3e8:
    // 0x20d3e8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x20d3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x20d3ec: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x20d3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x20d3f0: 0x8c45a490  lw          $a1, -0x5B70($v0)
    ctx->pc = 0x20d3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943888)));
    // 0x20d3f4: 0xc040a04  jal         func_102810
    ctx->pc = 0x20D3F4u;
    SET_GPR_U32(ctx, 31, 0x20D3FCu);
    ctx->pc = 0x20D3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D3F4u;
    // 0x20d3f8: 0x8c64e688  lw          $a0, -0x1978($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960776)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102810u, 0x20D3F4u, 0x20D3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D3FCu;
label_20d3fc:
    // 0x20d3fc: 0x3c021001  lui         $v0, 0x1001
    ctx->pc = 0x20d3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4097 << 16));
label_20d400:
    // 0x20d400: 0x8c43a000  lw          $v1, -0x6000($v0)
    ctx->pc = 0x20d400u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294942720))); // MMIO: 0x1000a000
    // 0x20d404: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x20d404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x20d408: 0x0  nop
    ctx->pc = 0x20d408u;
    // NOP
    // 0x20d40c: 0x0  nop
    ctx->pc = 0x20d40cu;
    // NOP
    // 0x20d410: 0x0  nop
    ctx->pc = 0x20d410u;
    // NOP
    // 0x20d414: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20D414u;
    {
        const bool branch_taken_0x20d414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20d414) {
            ctx->pc = 0x20D400u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20d400;
        }
    }
    ctx->pc = 0x20D41Cu;
    // 0x20d41c: 0xc08303c  jal         func_20C0F0
    ctx->pc = 0x20D41Cu;
    SET_GPR_U32(ctx, 31, 0x20D424u);
    ctx->pc = 0x20C0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C0F0u, 0x20D41Cu, 0x20D424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D424u;
label_20d424:
    // 0x20d424: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20d424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d428: 0x3e00008  jr          $ra
    ctx->pc = 0x20D428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D428u;
        // 0x20d42c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D430u;
}
