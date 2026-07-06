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

// Function: sub_00307630
// Address: 0x307630 - 0x3076d0
void sub_00307630_0x307630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307630_0x307630");
#endif

    switch (ctx->pc) {
        case 0x307688u: goto label_307688;
        case 0x30769cu: goto label_30769c;
        case 0x3076a0u: goto label_3076a0;
        case 0x3076c4u: goto label_3076c4;
        default: break;
    }

    ctx->pc = 0x307630u;

    // 0x307630: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x307630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x307634: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x307634u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x307638: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x307638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30763c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x30763cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x307640: 0x7c4000c0  sq          $zero, 0xC0($v0)
    ctx->pc = 0x307640u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 192), GPR_VEC(ctx, 0));
    // 0x307644: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x307644u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x307648: 0x3c0201d1  lui         $v0, 0x1D1
    ctx->pc = 0x307648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)465 << 16));
    // 0x30764c: 0x24a500d0  addiu       $a1, $a1, 0xD0
    ctx->pc = 0x30764cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
    // 0x307650: 0x94481db0  lhu         $t0, 0x1DB0($v0)
    ctx->pc = 0x307650u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 7600)));
    // 0x307654: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x307654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x307658: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x307658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30765c: 0x83040  sll         $a2, $t0, 1
    ctx->pc = 0x30765cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x307660: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x307660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x307664: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x307664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x307668: 0x64080  sll         $t0, $a2, 2
    ctx->pc = 0x307668u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x30766c: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x30766cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x307670: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x307670u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x307674: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x307674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x307678: 0xac4700c0  sw          $a3, 0xC0($v0)
    ctx->pc = 0x307678u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 7));
    // 0x30767c: 0x7ca00000  sq          $zero, 0x0($a1)
    ctx->pc = 0x30767cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 0));
    // 0x307680: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x307680u;
    SET_GPR_U32(ctx, 31, 0x307688u);
    ctx->pc = 0x307684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307680u;
    // 0x307684: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x307680u, 0x307688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307688u;
label_307688:
    // 0x307688: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x307688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30768c: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x30768cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x307690: 0x8c44e688  lw          $a0, -0x1978($v0)
    ctx->pc = 0x307690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960776)));
    // 0x307694: 0xc040a04  jal         func_102810
    ctx->pc = 0x307694u;
    SET_GPR_U32(ctx, 31, 0x30769Cu);
    ctx->pc = 0x307698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307694u;
    // 0x307698: 0x24a500c0  addiu       $a1, $a1, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102810u, 0x307694u, 0x30769Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30769Cu;
label_30769c:
    // 0x30769c: 0x3c021001  lui         $v0, 0x1001
    ctx->pc = 0x30769cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4097 << 16));
label_3076a0:
    // 0x3076a0: 0x8c43a000  lw          $v1, -0x6000($v0)
    ctx->pc = 0x3076a0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294942720))); // MMIO: 0x1000a000
    // 0x3076a4: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x3076a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x3076a8: 0x0  nop
    ctx->pc = 0x3076a8u;
    // NOP
    // 0x3076ac: 0x0  nop
    ctx->pc = 0x3076acu;
    // NOP
    // 0x3076b0: 0x0  nop
    ctx->pc = 0x3076b0u;
    // NOP
    // 0x3076b4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3076B4u;
    {
        const bool branch_taken_0x3076b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3076b4) {
            ctx->pc = 0x3076A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3076a0;
        }
    }
    ctx->pc = 0x3076BCu;
    // 0x3076bc: 0xc0c1d84  jal         func_307610
    ctx->pc = 0x3076BCu;
    SET_GPR_U32(ctx, 31, 0x3076C4u);
    ctx->pc = 0x307610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307610u, 0x3076BCu, 0x3076C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3076C4u;
label_3076c4:
    // 0x3076c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3076c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3076c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3076C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3076CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3076C8u;
        // 0x3076cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3076C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3076D0u;
}
