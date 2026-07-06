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

// Function: sub_003012F0
// Address: 0x3012f0 - 0x3013a0
void sub_003012F0_0x3012f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003012F0_0x3012f0");
#endif

    switch (ctx->pc) {
        case 0x301358u: goto label_301358;
        case 0x30136cu: goto label_30136c;
        case 0x301370u: goto label_301370;
        case 0x301394u: goto label_301394;
        default: break;
    }

    ctx->pc = 0x3012f0u;

    // 0x3012f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3012f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3012f4: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x3012f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x3012f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3012f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3012fc: 0x3c0501cb  lui         $a1, 0x1CB
    ctx->pc = 0x3012fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)459 << 16));
    // 0x301300: 0x8c49a490  lw          $t1, -0x5B70($v0)
    ctx->pc = 0x301300u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943888)));
    // 0x301304: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x301304u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x301308: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x301308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x30130c: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x30130cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x301310: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x301310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301314: 0x7d200000  sq          $zero, 0x0($t1)
    ctx->pc = 0x301314u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 0));
    // 0x301318: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x301318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x30131c: 0x8ca80c30  lw          $t0, 0xC30($a1)
    ctx->pc = 0x30131cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3120)));
    // 0x301320: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x301320u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x301324: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x301324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x301328: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x301328u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x30132c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x30132cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x301330: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x301330u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
    // 0x301334: 0x8c65a490  lw          $a1, -0x5B70($v1)
    ctx->pc = 0x301334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943888)));
    // 0x301338: 0x8c430c30  lw          $v1, 0xC30($v0)
    ctx->pc = 0x301338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3120)));
    // 0x30133c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x30133cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x301340: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x301340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x301344: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x301344u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x301348: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x301348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x30134c: 0x7c400010  sq          $zero, 0x10($v0)
    ctx->pc = 0x30134cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 0));
    // 0x301350: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x301350u;
    SET_GPR_U32(ctx, 31, 0x301358u);
    ctx->pc = 0x301354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301350u;
    // 0x301354: 0xac460010  sw          $a2, 0x10($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x301350u, 0x301358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301358u;
label_301358:
    // 0x301358: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x301358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30135c: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x30135cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x301360: 0x8c45a490  lw          $a1, -0x5B70($v0)
    ctx->pc = 0x301360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943888)));
    // 0x301364: 0xc040a04  jal         func_102810
    ctx->pc = 0x301364u;
    SET_GPR_U32(ctx, 31, 0x30136Cu);
    ctx->pc = 0x301368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301364u;
    // 0x301368: 0x8c64e688  lw          $a0, -0x1978($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960776)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102810u, 0x301364u, 0x30136Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30136Cu;
label_30136c:
    // 0x30136c: 0x3c021001  lui         $v0, 0x1001
    ctx->pc = 0x30136cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4097 << 16));
label_301370:
    // 0x301370: 0x8c43a000  lw          $v1, -0x6000($v0)
    ctx->pc = 0x301370u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294942720))); // MMIO: 0x1000a000
    // 0x301374: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x301374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x301378: 0x0  nop
    ctx->pc = 0x301378u;
    // NOP
    // 0x30137c: 0x0  nop
    ctx->pc = 0x30137cu;
    // NOP
    // 0x301380: 0x0  nop
    ctx->pc = 0x301380u;
    // NOP
    // 0x301384: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x301384u;
    {
        const bool branch_taken_0x301384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x301384) {
            ctx->pc = 0x301370u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_301370;
        }
    }
    ctx->pc = 0x30138Cu;
    // 0x30138c: 0xc08303c  jal         func_20C0F0
    ctx->pc = 0x30138Cu;
    SET_GPR_U32(ctx, 31, 0x301394u);
    ctx->pc = 0x20C0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C0F0u, 0x30138Cu, 0x301394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301394u;
label_301394:
    // 0x301394: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x301394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x301398: 0x3e00008  jr          $ra
    ctx->pc = 0x301398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301398u;
        // 0x30139c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3013A0u;
}
