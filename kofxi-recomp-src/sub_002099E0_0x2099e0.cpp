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

// Function: sub_002099E0
// Address: 0x2099e0 - 0x209b70
void sub_002099E0_0x2099e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002099E0_0x2099e0");
#endif

    switch (ctx->pc) {
        case 0x209a28u: goto label_209a28;
        case 0x209a84u: goto label_209a84;
        case 0x209a90u: goto label_209a90;
        case 0x209a98u: goto label_209a98;
        case 0x209ac0u: goto label_209ac0;
        case 0x209ac8u: goto label_209ac8;
        case 0x209ad8u: goto label_209ad8;
        case 0x209af0u: goto label_209af0;
        case 0x209b44u: goto label_209b44;
        case 0x209b50u: goto label_209b50;
        case 0x209b58u: goto label_209b58;
        default: break;
    }

    ctx->pc = 0x2099e0u;

label_2099e0:
    // 0x2099e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2099e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2099e4: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x2099e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x2099e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2099e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2099ec: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2099ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2099f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2099f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2099f4: 0x2463beb0  addiu       $v1, $v1, -0x4150
    ctx->pc = 0x2099f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950576));
    // 0x2099f8: 0x658021  addu        $s0, $v1, $a1
    ctx->pc = 0x2099f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2099fc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2099fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x209a00: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x209A00u;
    {
        const bool branch_taken_0x209a00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x209a00) {
            ctx->pc = 0x209A10u;
            goto label_209a10;
        }
    }
    ctx->pc = 0x209A08u;
    // 0x209a08: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x209A08u;
    {
        const bool branch_taken_0x209a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209A08u;
        // 0x209a0c: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209a08) {
            ctx->pc = 0x209A2Cu;
            goto label_209a2c;
        }
    }
    ctx->pc = 0x209A10u;
label_209a10:
    // 0x209a10: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x209a10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x209a14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x209a14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209a18: 0x24a5f970  addiu       $a1, $a1, -0x690
    ctx->pc = 0x209a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965616));
    // 0x209a1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x209a1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209a20: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x209A20u;
    SET_GPR_U32(ctx, 31, 0x209A28u);
    ctx->pc = 0x209A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209A20u;
    // 0x209a24: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x209A20u, 0x209A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209A28u;
label_209a28:
    // 0x209a28: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x209a28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_209a2c:
    // 0x209a2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x209a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209a30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x209a30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209a34: 0x3e00008  jr          $ra
    ctx->pc = 0x209A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209A34u;
        // 0x209a38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209A3Cu;
    // 0x209a3c: 0x0  nop
    ctx->pc = 0x209a3cu;
    // NOP
    // 0x209a40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x209a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x209a44: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x209a44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x209a48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x209a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x209a4c: 0x2484be90  addiu       $a0, $a0, -0x4170
    ctx->pc = 0x209a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950544));
    // 0x209a50: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x209a50u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x209a54: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x209a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x209a58: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x209a58u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x209a5c: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x209a5cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x209a60: 0x5460000e  bnel        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x209A60u;
    {
        const bool branch_taken_0x209a60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x209a60) {
            ctx->pc = 0x209A64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209A60u;
            // 0x209a64: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209A9Cu;
            goto label_209a9c;
        }
    }
    ctx->pc = 0x209A68u;
    // 0x209a68: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x209a68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x209a6c: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x209a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x209a70: 0x3c0601c1  lui         $a2, 0x1C1
    ctx->pc = 0x209a70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)449 << 16));
    // 0x209a74: 0x2484f830  addiu       $a0, $a0, -0x7D0
    ctx->pc = 0x209a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965296));
    // 0x209a78: 0x24a59c10  addiu       $a1, $a1, -0x63F0
    ctx->pc = 0x209a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941712));
    // 0x209a7c: 0xc087c72  jal         func_21F1C8
    ctx->pc = 0x209A7Cu;
    SET_GPR_U32(ctx, 31, 0x209A84u);
    ctx->pc = 0x209A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209A7Cu;
    // 0x209a80: 0x24c69c00  addiu       $a2, $a2, -0x6400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F1C8u, 0x209A7Cu, 0x209A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209A84u;
label_209a84:
    // 0x209a84: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x209a84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x209a88: 0xc082674  jal         func_2099D0
    ctx->pc = 0x209A88u;
    SET_GPR_U32(ctx, 31, 0x209A90u);
    ctx->pc = 0x209A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209A88u;
    // 0x209a8c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x209A88u, 0x209A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209A90u;
label_209a90:
    // 0x209a90: 0xc0826dc  jal         func_209B70
    ctx->pc = 0x209A90u;
    SET_GPR_U32(ctx, 31, 0x209A98u);
    ctx->pc = 0x209B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209B70u, 0x209A90u, 0x209A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209A98u;
label_209a98:
    // 0x209a98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x209a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_209a9c:
    // 0x209a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x209A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209A9Cu;
        // 0x209aa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209AA4u;
    // 0x209aa4: 0x0  nop
    ctx->pc = 0x209aa4u;
    // NOP
    // 0x209aa8: 0x0  nop
    ctx->pc = 0x209aa8u;
    // NOP
    // 0x209aac: 0x0  nop
    ctx->pc = 0x209aacu;
    // NOP
    // 0x209ab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x209ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x209ab4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x209ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x209ab8: 0xc0897be  jal         func_225EF8
    ctx->pc = 0x209AB8u;
    SET_GPR_U32(ctx, 31, 0x209AC0u);
    ctx->pc = 0x209ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209AB8u;
    // 0x209abc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225EF8u, 0x209AB8u, 0x209AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209AC0u;
label_209ac0:
    // 0x209ac0: 0xc0691f0  jal         func_1A47C0
    ctx->pc = 0x209AC0u;
    SET_GPR_U32(ctx, 31, 0x209AC8u);
    ctx->pc = 0x209AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209AC0u;
    // 0x209ac4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A47C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A47C0u, 0x209AC0u, 0x209AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209AC8u;
label_209ac8:
    // 0x209ac8: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x209ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x209acc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x209accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209ad0: 0xc082678  jal         func_2099E0
    ctx->pc = 0x209AD0u;
    SET_GPR_U32(ctx, 31, 0x209AD8u);
    ctx->pc = 0x209AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209AD0u;
    // 0x209ad4: 0x24849830  addiu       $a0, $a0, -0x67D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    goto label_2099e0;
    ctx->pc = 0x209AD8u;
label_209ad8:
    // 0x209ad8: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x209ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x209adc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x209adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x209ae0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x209ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x209ae4: 0x24849b00  addiu       $a0, $a0, -0x6500
    ctx->pc = 0x209ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941440));
    // 0x209ae8: 0xc082674  jal         func_2099D0
    ctx->pc = 0x209AE8u;
    SET_GPR_U32(ctx, 31, 0x209AF0u);
    ctx->pc = 0x209AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209AE8u;
    // 0x209aec: 0xa443be90  sh          $v1, -0x4170($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950544), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x209AE8u, 0x209AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209AF0u;
label_209af0:
    // 0x209af0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x209af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209af4: 0x3e00008  jr          $ra
    ctx->pc = 0x209AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209AF4u;
        // 0x209af8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209AF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209AFCu;
    // 0x209afc: 0x0  nop
    ctx->pc = 0x209afcu;
    // NOP
    // 0x209b00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x209b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x209b04: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x209b04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x209b08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x209b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x209b0c: 0x2484be90  addiu       $a0, $a0, -0x4170
    ctx->pc = 0x209b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950544));
    // 0x209b10: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x209b10u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x209b14: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x209b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x209b18: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x209b18u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x209b1c: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x209b1cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x209b20: 0x5460000e  bnel        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x209B20u;
    {
        const bool branch_taken_0x209b20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x209b20) {
            ctx->pc = 0x209B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209B20u;
            // 0x209b24: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209B5Cu;
            goto label_209b5c;
        }
    }
    ctx->pc = 0x209B28u;
    // 0x209b28: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x209b28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x209b2c: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x209b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x209b30: 0x3c0601c1  lui         $a2, 0x1C1
    ctx->pc = 0x209b30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)449 << 16));
    // 0x209b34: 0x2484f830  addiu       $a0, $a0, -0x7D0
    ctx->pc = 0x209b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965296));
    // 0x209b38: 0x24a59c10  addiu       $a1, $a1, -0x63F0
    ctx->pc = 0x209b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941712));
    // 0x209b3c: 0xc087ed8  jal         func_21FB60
    ctx->pc = 0x209B3Cu;
    SET_GPR_U32(ctx, 31, 0x209B44u);
    ctx->pc = 0x209B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209B3Cu;
    // 0x209b40: 0x24c69c00  addiu       $a2, $a2, -0x6400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB60u, 0x209B3Cu, 0x209B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209B44u;
label_209b44:
    // 0x209b44: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x209b44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x209b48: 0xc082674  jal         func_2099D0
    ctx->pc = 0x209B48u;
    SET_GPR_U32(ctx, 31, 0x209B50u);
    ctx->pc = 0x209B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209B48u;
    // 0x209b4c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x209B48u, 0x209B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209B50u;
label_209b50:
    // 0x209b50: 0xc0826dc  jal         func_209B70
    ctx->pc = 0x209B50u;
    SET_GPR_U32(ctx, 31, 0x209B58u);
    ctx->pc = 0x209B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209B70u, 0x209B50u, 0x209B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209B58u;
label_209b58:
    // 0x209b58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x209b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_209b5c:
    // 0x209b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x209B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B5Cu;
        // 0x209b60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209B64u;
    // 0x209b64: 0x0  nop
    ctx->pc = 0x209b64u;
    // NOP
    // 0x209b68: 0x0  nop
    ctx->pc = 0x209b68u;
    // NOP
    // 0x209b6c: 0x0  nop
    ctx->pc = 0x209b6cu;
    // NOP
}
