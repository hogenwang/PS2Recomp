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

// Function: sub_001ABA68
// Address: 0x1aba68 - 0x1abbe0
void sub_001ABA68_0x1aba68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ABA68_0x1aba68");
#endif

    switch (ctx->pc) {
        case 0x1aba78u: goto label_1aba78;
        case 0x1aba80u: goto label_1aba80;
        case 0x1abaa0u: goto label_1abaa0;
        case 0x1abac0u: goto label_1abac0;
        case 0x1abae0u: goto label_1abae0;
        case 0x1abb00u: goto label_1abb00;
        case 0x1abb20u: goto label_1abb20;
        case 0x1abb38u: goto label_1abb38;
        case 0x1abb68u: goto label_1abb68;
        case 0x1abb7cu: goto label_1abb7c;
        case 0x1abbb0u: goto label_1abbb0;
        case 0x1abbd0u: goto label_1abbd0;
        default: break;
    }

    ctx->pc = 0x1aba68u;

    // 0x1aba68: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1aba68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1aba6c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1aba6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1aba70: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABA70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABA70u;
        // 0x1aba74: 0x84a200e2  lh          $v0, 0xE2($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 226)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABA70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABA78u;
label_1aba78:
    // 0x1aba78: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABA78u;
        // 0x1aba7c: 0x248200d0  addiu       $v0, $a0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABA78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABA80u;
label_1aba80:
    // 0x1aba80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aba80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aba84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aba84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1aba88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aba88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aba8c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1aba8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1aba90: 0x260500ac  addiu       $a1, $s0, 0xAC
    ctx->pc = 0x1aba90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 172));
    // 0x1aba94: 0x260600b0  addiu       $a2, $s0, 0xB0
    ctx->pc = 0x1aba94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1aba98: 0xc06f6da  jal         func_1BDB68
    ctx->pc = 0x1ABA98u;
    SET_GPR_U32(ctx, 31, 0x1ABAA0u);
    ctx->pc = 0x1ABA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABA98u;
    // 0x1aba9c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDB68u, 0x1ABA98u, 0x1ABAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABAA0u;
label_1abaa0:
    // 0x1abaa0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1abaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1abaa4: 0x260700aa  addiu       $a3, $s0, 0xAA
    ctx->pc = 0x1abaa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 170));
    // 0x1abaa8: 0x260500a6  addiu       $a1, $s0, 0xA6
    ctx->pc = 0x1abaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 166));
    // 0x1abaac: 0x260600a8  addiu       $a2, $s0, 0xA8
    ctx->pc = 0x1abaacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 168));
    // 0x1abab0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1abab0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1abab4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1abab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1abab8: 0x806f6e8  j           func_1BDBA0
    ctx->pc = 0x1ABAB8u;
    ctx->pc = 0x1ABABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABAB8u;
    // 0x1ababc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDBA0u, 0x1ABAB8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1ABAC0u;
label_1abac0:
    // 0x1abac0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1abac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1abac4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1abac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1abac8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1abac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abacc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1abaccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1abad0: 0x260500ac  addiu       $a1, $s0, 0xAC
    ctx->pc = 0x1abad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 172));
    // 0x1abad4: 0x260600b0  addiu       $a2, $s0, 0xB0
    ctx->pc = 0x1abad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1abad8: 0xc06f6d0  jal         func_1BDB40
    ctx->pc = 0x1ABAD8u;
    SET_GPR_U32(ctx, 31, 0x1ABAE0u);
    ctx->pc = 0x1ABADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABAD8u;
    // 0x1abadc: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDB40u, 0x1ABAD8u, 0x1ABAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABAE0u;
label_1abae0:
    // 0x1abae0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1abae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1abae4: 0x860700aa  lh          $a3, 0xAA($s0)
    ctx->pc = 0x1abae4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 170)));
    // 0x1abae8: 0x860500a6  lh          $a1, 0xA6($s0)
    ctx->pc = 0x1abae8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 166)));
    // 0x1abaec: 0x860600a8  lh          $a2, 0xA8($s0)
    ctx->pc = 0x1abaecu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x1abaf0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1abaf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1abaf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1abaf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1abaf8: 0x806f6e4  j           func_1BDB90
    ctx->pc = 0x1ABAF8u;
    ctx->pc = 0x1ABAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABAF8u;
    // 0x1abafc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDB90u;
    sub_001BDB90_0x1bdb90(rdram, ctx, runtime); return;
    ctx->pc = 0x1ABB00u;
label_1abb00:
    // 0x1abb00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1abb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1abb04: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1abb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1abb08: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1abb08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abb0c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1abb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1abb10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1abb10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abb14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1abb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1abb18: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x1ABB18u;
    SET_GPR_U32(ctx, 31, 0x1ABB20u);
    ctx->pc = 0x1ABB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABB18u;
    // 0x1abb1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x1ABB18u, 0x1ABB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABB20u;
label_1abb20:
    // 0x1abb20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1abb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abb24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1abb24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abb28: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1abb28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abb2c: 0x27a70002  addiu       $a3, $sp, 0x2
    ctx->pc = 0x1abb2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2));
    // 0x1abb30: 0xc06abca  jal         func_1AAF28
    ctx->pc = 0x1ABB30u;
    SET_GPR_U32(ctx, 31, 0x1ABB38u);
    ctx->pc = 0x1ABB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABB30u;
    // 0x1abb34: 0x27a80004  addiu       $t0, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAF28u, 0x1ABB30u, 0x1ABB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABB38u;
label_1abb38:
    // 0x1abb38: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x1abb38u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1abb3c: 0x97a40002  lhu         $a0, 0x2($sp)
    ctx->pc = 0x1abb3cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x1abb40: 0x97a20004  lhu         $v0, 0x4($sp)
    ctx->pc = 0x1abb40u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1abb44: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1abb44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1abb48: 0xa62300a0  sh          $v1, 0xA0($s1)
    ctx->pc = 0x1abb48u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 160), (uint16_t)GPR_U32(ctx, 3));
    // 0x1abb4c: 0xa62200a4  sh          $v0, 0xA4($s1)
    ctx->pc = 0x1abb4cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 164), (uint16_t)GPR_U32(ctx, 2));
    // 0x1abb50: 0xa62400a2  sh          $a0, 0xA2($s1)
    ctx->pc = 0x1abb50u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 162), (uint16_t)GPR_U32(ctx, 4));
    // 0x1abb54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1abb54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1abb58: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1abb58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1abb5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABB5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABB5Cu;
        // 0x1abb60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABB5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABB64u;
    // 0x1abb64: 0x0  nop
    ctx->pc = 0x1abb64u;
    // NOP
label_1abb68:
    // 0x1abb68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1abb68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1abb6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1abb6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1abb70: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1abb70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1abb74: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x1ABB74u;
    SET_GPR_U32(ctx, 31, 0x1ABB7Cu);
    ctx->pc = 0x1ABB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABB74u;
    // 0x1abb78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x1ABB74u, 0x1ABB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABB7Cu;
label_1abb7c:
    // 0x1abb7c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1abb7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1abb80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1abb80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abb84: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1abb84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x1abb88: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x1abb88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
    // 0x1abb8c: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x1abb8cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
    // 0x1abb90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1abb90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1abb94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1abb94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abb98: 0x24c6e69c  addiu       $a2, $a2, -0x1964
    ctx->pc = 0x1abb98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960796));
    // 0x1abb9c: 0x24e7e69e  addiu       $a3, $a3, -0x1962
    ctx->pc = 0x1abb9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960798));
    // 0x1abba0: 0x2508e6a0  addiu       $t0, $t0, -0x1960
    ctx->pc = 0x1abba0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294960800));
    // 0x1abba4: 0x806abca  j           func_1AAF28
    ctx->pc = 0x1ABBA4u;
    ctx->pc = 0x1ABBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABBA4u;
    // 0x1abba8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAF28u;
    sub_001AAF28_0x1aaf28(rdram, ctx, runtime); return;
    ctx->pc = 0x1ABBACu;
    // 0x1abbac: 0x0  nop
    ctx->pc = 0x1abbacu;
    // NOP
label_1abbb0:
    // 0x1abbb0: 0x948200a0  lhu         $v0, 0xA0($a0)
    ctx->pc = 0x1abbb0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x1abbb4: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x1abbb4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1abbb8: 0x948300a2  lhu         $v1, 0xA2($a0)
    ctx->pc = 0x1abbb8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 162)));
    // 0x1abbbc: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x1abbbcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1abbc0: 0x948200a4  lhu         $v0, 0xA4($a0)
    ctx->pc = 0x1abbc0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x1abbc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABBC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABBC4u;
        // 0x1abbc8: 0xa4e20000  sh          $v0, 0x0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABBC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABBCCu;
    // 0x1abbcc: 0x0  nop
    ctx->pc = 0x1abbccu;
    // NOP
label_1abbd0:
    // 0x1abbd0: 0xa48700a4  sh          $a3, 0xA4($a0)
    ctx->pc = 0x1abbd0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 164), (uint16_t)GPR_U32(ctx, 7));
    // 0x1abbd4: 0xa48500a0  sh          $a1, 0xA0($a0)
    ctx->pc = 0x1abbd4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 160), (uint16_t)GPR_U32(ctx, 5));
    // 0x1abbd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABBD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABBD8u;
        // 0x1abbdc: 0xa48600a2  sh          $a2, 0xA2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 162), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABBD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABBE0u;
}
