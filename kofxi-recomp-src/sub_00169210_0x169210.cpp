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

// Function: sub_00169210
// Address: 0x169210 - 0x1692f0
void sub_00169210_0x169210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169210_0x169210");
#endif

    switch (ctx->pc) {
        case 0x16922cu: goto label_16922c;
        case 0x169234u: goto label_169234;
        case 0x169240u: goto label_169240;
        case 0x169288u: goto label_169288;
        case 0x1692b0u: goto label_1692b0;
        case 0x1692d0u: goto label_1692d0;
        default: break;
    }

    ctx->pc = 0x169210u;

    // 0x169210: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x169210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x169214: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x169214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x169218: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x169218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16921c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16921cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x169220: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x169220u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169224: 0xc05c6ac  jal         func_171AB0
    ctx->pc = 0x169224u;
    SET_GPR_U32(ctx, 31, 0x16922Cu);
    ctx->pc = 0x169228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169224u;
    // 0x169228: 0x8c8400dc  lw          $a0, 0xDC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171AB0u, 0x169224u, 0x16922Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16922Cu;
label_16922c:
    // 0x16922c: 0xc05a108  jal         func_168420
    ctx->pc = 0x16922Cu;
    SET_GPR_U32(ctx, 31, 0x169234u);
    ctx->pc = 0x169230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16922Cu;
    // 0x169230: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168420u, 0x16922Cu, 0x169234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169234u;
label_169234:
    // 0x169234: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x169234u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x169238: 0xc05a34c  jal         func_168D30
    ctx->pc = 0x169238u;
    SET_GPR_U32(ctx, 31, 0x169240u);
    ctx->pc = 0x16923Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169238u;
    // 0x16923c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168D30u, 0x169238u, 0x169240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169240u;
label_169240:
    // 0x169240: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x169240u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x169244: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x169244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x169248: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x169248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x16924c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x16924Cu;
    {
        const bool branch_taken_0x16924c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16924c) {
            ctx->pc = 0x169250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16924Cu;
            // 0x169250: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x169290u;
            goto label_169290;
        }
    }
    ctx->pc = 0x169254u;
    // 0x169254: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x169254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x169258: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x169258u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16925c: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x16925cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x169260: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x169260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x169264: 0x24422cd0  addiu       $v0, $v0, 0x2CD0
    ctx->pc = 0x169264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11472));
    // 0x169268: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x169268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16926c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x16926cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x169270: 0x24422d10  addiu       $v0, $v0, 0x2D10
    ctx->pc = 0x169270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11536));
    // 0x169274: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x169274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x169278: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x169278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16927c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x16927cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x169280: 0xc05a138  jal         func_1684E0
    ctx->pc = 0x169280u;
    SET_GPR_U32(ctx, 31, 0x169288u);
    ctx->pc = 0x169284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169280u;
    // 0x169284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1684E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1684E0u, 0x169280u, 0x169288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169288u;
label_169288:
    // 0x169288: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x169288u;
    {
        const bool branch_taken_0x169288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16928Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169288u;
        // 0x16928c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x169288) {
            ctx->pc = 0x1692D4u;
            goto label_1692d4;
        }
    }
    ctx->pc = 0x169290u;
label_169290:
    // 0x169290: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x169290u;
    {
        const bool branch_taken_0x169290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169290) {
            ctx->pc = 0x1692B8u;
            goto label_1692b8;
        }
    }
    ctx->pc = 0x169298u;
    // 0x169298: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x169298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x16929c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16929cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1692a0: 0x24a52040  addiu       $a1, $a1, 0x2040
    ctx->pc = 0x1692a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8256));
    // 0x1692a4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1692a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1692a8: 0xc05a138  jal         func_1684E0
    ctx->pc = 0x1692A8u;
    SET_GPR_U32(ctx, 31, 0x1692B0u);
    ctx->pc = 0x1692ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1692A8u;
    // 0x1692ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1684E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1684E0u, 0x1692A8u, 0x1692B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1692B0u;
label_1692b0:
    // 0x1692b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1692B0u;
    {
        const bool branch_taken_0x1692b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1692B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1692B0u;
        // 0x1692b4: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1692b0) {
            ctx->pc = 0x1692D4u;
            goto label_1692d4;
        }
    }
    ctx->pc = 0x1692B8u;
label_1692b8:
    // 0x1692b8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1692b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1692bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1692bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1692c0: 0x24a51f50  addiu       $a1, $a1, 0x1F50
    ctx->pc = 0x1692c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8016));
    // 0x1692c4: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1692c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1692c8: 0xc05a138  jal         func_1684E0
    ctx->pc = 0x1692C8u;
    SET_GPR_U32(ctx, 31, 0x1692D0u);
    ctx->pc = 0x1692CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1692C8u;
    // 0x1692cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1684E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1684E0u, 0x1692C8u, 0x1692D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1692D0u;
label_1692d0:
    // 0x1692d0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1692d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1692d4:
    // 0x1692d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1692d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1692d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1692d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1692dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1692dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1692e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1692E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1692E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1692E0u;
        // 0x1692e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1692E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1692E8u;
    // 0x1692e8: 0x0  nop
    ctx->pc = 0x1692e8u;
    // NOP
    // 0x1692ec: 0x0  nop
    ctx->pc = 0x1692ecu;
    // NOP
    if (ctx->pc == 0x1692ecu) { ctx->pc = 0x1692f0u; }
}
