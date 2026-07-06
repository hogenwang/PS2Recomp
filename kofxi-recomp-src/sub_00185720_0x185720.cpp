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

// Function: sub_00185720
// Address: 0x185720 - 0x1857c0
void sub_00185720_0x185720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185720_0x185720");
#endif

    switch (ctx->pc) {
        case 0x18573cu: goto label_18573c;
        case 0x185754u: goto label_185754;
        case 0x185798u: goto label_185798;
        case 0x1857a8u: goto label_1857a8;
        default: break;
    }

    ctx->pc = 0x185720u;

    // 0x185720: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x185720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x185724: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x185724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x185728: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x185728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18572c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18572cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x185730: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x185730u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x185734: 0xc0615f0  jal         func_1857C0
    ctx->pc = 0x185734u;
    SET_GPR_U32(ctx, 31, 0x18573Cu);
    ctx->pc = 0x185738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185734u;
    // 0x185738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1857C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1857C0u, 0x185734u, 0x18573Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18573Cu;
label_18573c:
    // 0x18573c: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x18573cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x185740: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x185740u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x185744: 0x6220019  bltzl       $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x185744u;
    {
        const bool branch_taken_0x185744 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x185744) {
            ctx->pc = 0x185748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185744u;
            // 0x185748: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1857ACu;
            goto label_1857ac;
        }
    }
    ctx->pc = 0x18574Cu;
    // 0x18574c: 0xc062948  jal         func_18A520
    ctx->pc = 0x18574Cu;
    SET_GPR_U32(ctx, 31, 0x185754u);
    ctx->pc = 0x185750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18574Cu;
    // 0x185750: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A520u, 0x18574Cu, 0x185754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185754u;
label_185754:
    // 0x185754: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x185754u;
    {
        const bool branch_taken_0x185754 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x185754) {
            ctx->pc = 0x1857A8u;
            goto label_1857a8;
        }
    }
    ctx->pc = 0x18575Cu;
    // 0x18575c: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x18575cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x185760: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x185760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x185764: 0x2463db55  addiu       $v1, $v1, -0x24AB
    ctx->pc = 0x185764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957909));
    // 0x185768: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x185768u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18576c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18576cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x185770: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x185770u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x185774: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x185774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x185778: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x185778u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18577c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18577cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x185780: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x185780u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x185784: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x185784u;
    {
        const bool branch_taken_0x185784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x185784) {
            ctx->pc = 0x185788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185784u;
            // 0x185788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1857A0u;
            goto label_1857a0;
        }
    }
    ctx->pc = 0x18578Cu;
    // 0x18578c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18578cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185790: 0xc06167c  jal         func_1859F0
    ctx->pc = 0x185790u;
    SET_GPR_U32(ctx, 31, 0x185798u);
    ctx->pc = 0x185794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185790u;
    // 0x185794: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1859F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1859F0u, 0x185790u, 0x185798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185798u;
label_185798:
    // 0x185798: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x185798u;
    {
        const bool branch_taken_0x185798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185798) {
            ctx->pc = 0x1857A8u;
            goto label_1857a8;
        }
    }
    ctx->pc = 0x1857A0u;
label_1857a0:
    // 0x1857a0: 0xc061678  jal         func_1859E0
    ctx->pc = 0x1857A0u;
    SET_GPR_U32(ctx, 31, 0x1857A8u);
    ctx->pc = 0x1857A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1857A0u;
    // 0x1857a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1859E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1859E0u, 0x1857A0u, 0x1857A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1857A8u;
label_1857a8:
    // 0x1857a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1857a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1857ac:
    // 0x1857ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1857acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1857b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1857b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1857b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1857B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1857B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1857B4u;
        // 0x1857b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1857B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1857BCu;
    // 0x1857bc: 0x0  nop
    ctx->pc = 0x1857bcu;
    // NOP
}
