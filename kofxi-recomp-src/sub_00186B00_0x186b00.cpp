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

// Function: sub_00186B00
// Address: 0x186b00 - 0x186e10
void sub_00186B00_0x186b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186B00_0x186b00");
#endif

    switch (ctx->pc) {
        case 0x186b5cu: goto label_186b5c;
        case 0x186b8cu: goto label_186b8c;
        case 0x186bc0u: goto label_186bc0;
        case 0x186bccu: goto label_186bcc;
        case 0x186be0u: goto label_186be0;
        case 0x186c4cu: goto label_186c4c;
        case 0x186c5cu: goto label_186c5c;
        case 0x186c84u: goto label_186c84;
        case 0x186c98u: goto label_186c98;
        case 0x186cb8u: goto label_186cb8;
        case 0x186cccu: goto label_186ccc;
        case 0x186cecu: goto label_186cec;
        case 0x186d14u: goto label_186d14;
        case 0x186d20u: goto label_186d20;
        case 0x186d58u: goto label_186d58;
        case 0x186d64u: goto label_186d64;
        case 0x186d78u: goto label_186d78;
        case 0x186decu: goto label_186dec;
        case 0x186df8u: goto label_186df8;
        default: break;
    }

    ctx->pc = 0x186b00u;

    // 0x186b00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x186b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x186b04: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x186b04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x186b08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x186b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x186b0c: 0x8466db30  lh          $a2, -0x24D0($v1)
    ctx->pc = 0x186b0cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957872)));
    // 0x186b10: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x186b10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x186b14: 0x24c6ff80  addiu       $a2, $a2, -0x80
    ctx->pc = 0x186b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967168));
    // 0x186b18: 0x8465db32  lh          $a1, -0x24CE($v1)
    ctx->pc = 0x186b18u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957874)));
    // 0x186b1c: 0x63c3c  dsll32      $a3, $a2, 16
    ctx->pc = 0x186b1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 16));
    // 0x186b20: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x186b20u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x186b24: 0x9083008c  lbu         $v1, 0x8C($a0)
    ctx->pc = 0x186b24u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x186b28: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x186b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x186b2c: 0x5343c  dsll32      $a2, $a1, 16
    ctx->pc = 0x186b2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 16));
    // 0x186b30: 0x34630030  ori         $v1, $v1, 0x30
    ctx->pc = 0x186b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48);
    // 0x186b34: 0xa083008c  sb          $v1, 0x8C($a0)
    ctx->pc = 0x186b34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 140), (uint8_t)GPR_U32(ctx, 3));
    // 0x186b38: 0x84850000  lh          $a1, 0x0($a0)
    ctx->pc = 0x186b38u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x186b3c: 0xa7082a  slt         $at, $a1, $a3
    ctx->pc = 0x186b3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x186b40: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x186B40u;
    {
        const bool branch_taken_0x186b40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x186B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B40u;
        // 0x186b44: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186b40) {
            ctx->pc = 0x186B64u;
            goto label_186b64;
        }
    }
    ctx->pc = 0x186B48u;
    // 0x186b48: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x186b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x186b4c: 0x24020057  addiu       $v0, $zero, 0x57
    ctx->pc = 0x186b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x186b50: 0xa08300f6  sb          $v1, 0xF6($a0)
    ctx->pc = 0x186b50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 246), (uint8_t)GPR_U32(ctx, 3));
    // 0x186b54: 0xc05aafc  jal         func_16ABF0
    ctx->pc = 0x186B54u;
    SET_GPR_U32(ctx, 31, 0x186B5Cu);
    ctx->pc = 0x186B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186B54u;
    // 0x186b58: 0xa48200f0  sh          $v0, 0xF0($a0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 4), 240), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16ABF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16ABF0u, 0x186B54u, 0x186B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186B5Cu;
label_186b5c:
    // 0x186b5c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x186B5Cu;
    {
        const bool branch_taken_0x186b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B5Cu;
        // 0x186b60: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186b5c) {
            ctx->pc = 0x186B90u;
            goto label_186b90;
        }
    }
    ctx->pc = 0x186B64u;
label_186b64:
    // 0x186b64: 0x61c3c  dsll32      $v1, $a2, 16
    ctx->pc = 0x186b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 16));
    // 0x186b68: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x186b68u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x186b6c: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x186b6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x186b70: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x186B70u;
    {
        const bool branch_taken_0x186b70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x186b70) {
            ctx->pc = 0x186B8Cu;
            goto label_186b8c;
        }
    }
    ctx->pc = 0x186B78u;
    // 0x186b78: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x186b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x186b7c: 0x24020057  addiu       $v0, $zero, 0x57
    ctx->pc = 0x186b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x186b80: 0xa08300f6  sb          $v1, 0xF6($a0)
    ctx->pc = 0x186b80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 246), (uint8_t)GPR_U32(ctx, 3));
    // 0x186b84: 0xc05aafc  jal         func_16ABF0
    ctx->pc = 0x186B84u;
    SET_GPR_U32(ctx, 31, 0x186B8Cu);
    ctx->pc = 0x186B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186B84u;
    // 0x186b88: 0xa48200f0  sh          $v0, 0xF0($a0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 4), 240), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16ABF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16ABF0u, 0x186B84u, 0x186B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186B8Cu;
label_186b8c:
    // 0x186b8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x186b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_186b90:
    // 0x186b90: 0x3e00008  jr          $ra
    ctx->pc = 0x186B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B90u;
        // 0x186b94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186B98u;
    // 0x186b98: 0x0  nop
    ctx->pc = 0x186b98u;
    // NOP
    // 0x186b9c: 0x0  nop
    ctx->pc = 0x186b9cu;
    // NOP
    // 0x186ba0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x186ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x186ba4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x186ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x186ba8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x186ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x186bac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x186bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x186bb0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x186bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x186bb4: 0x8c4400dc  lw          $a0, 0xDC($v0)
    ctx->pc = 0x186bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
    // 0x186bb8: 0xc0627f8  jal         func_189FE0
    ctx->pc = 0x186BB8u;
    SET_GPR_U32(ctx, 31, 0x186BC0u);
    ctx->pc = 0x186BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186BB8u;
    // 0x186bbc: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x189FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189FE0u, 0x186BB8u, 0x186BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186BC0u;
label_186bc0:
    // 0x186bc0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x186bc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186bc4: 0xc061b9c  jal         func_186E70
    ctx->pc = 0x186BC4u;
    SET_GPR_U32(ctx, 31, 0x186BCCu);
    ctx->pc = 0x186BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186BC4u;
    // 0x186bc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186E70u, 0x186BC4u, 0x186BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186BCCu;
label_186bcc:
    // 0x186bcc: 0x962203a4  lhu         $v0, 0x3A4($s1)
    ctx->pc = 0x186bccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 932)));
    // 0x186bd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x186bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186bd4: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x186bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x186bd8: 0xc05a078  jal         func_1681E0
    ctx->pc = 0x186BD8u;
    SET_GPR_U32(ctx, 31, 0x186BE0u);
    ctx->pc = 0x186BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186BD8u;
    // 0x186bdc: 0xa62203a4  sh          $v0, 0x3A4($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 932), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1681E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1681E0u, 0x186BD8u, 0x186BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186BE0u;
label_186be0:
    // 0x186be0: 0x8e230270  lw          $v1, 0x270($s1)
    ctx->pc = 0x186be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 624)));
    // 0x186be4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x186be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x186be8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x186be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x186bec: 0xae230270  sw          $v1, 0x270($s1)
    ctx->pc = 0x186becu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 624), GPR_U32(ctx, 3));
    // 0x186bf0: 0x8442db30  lh          $v0, -0x24D0($v0)
    ctx->pc = 0x186bf0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957872)));
    // 0x186bf4: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x186bf4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186bf8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x186bf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x186bfc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x186BFCu;
    {
        const bool branch_taken_0x186bfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x186bfc) {
            ctx->pc = 0x186C10u;
            goto label_186c10;
        }
    }
    ctx->pc = 0x186C04u;
    // 0x186c04: 0x2442fec0  addiu       $v0, $v0, -0x140
    ctx->pc = 0x186c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966976));
    // 0x186c08: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x186C08u;
    {
        const bool branch_taken_0x186c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186C08u;
        // 0x186c0c: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186c08) {
            ctx->pc = 0x186C2Cu;
            goto label_186c2c;
        }
    }
    ctx->pc = 0x186C10u;
label_186c10:
    // 0x186c10: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x186c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x186c14: 0x8442db32  lh          $v0, -0x24CE($v0)
    ctx->pc = 0x186c14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957874)));
    // 0x186c18: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x186c18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x186c1c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x186C1Cu;
    {
        const bool branch_taken_0x186c1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x186c1c) {
            ctx->pc = 0x186C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186C1Cu;
            // 0x186c20: 0x8e230498  lw          $v1, 0x498($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186C30u;
            goto label_186c30;
        }
    }
    ctx->pc = 0x186C24u;
    // 0x186c24: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x186c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x186c28: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x186c28u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_186c2c:
    // 0x186c2c: 0x8e230498  lw          $v1, 0x498($s1)
    ctx->pc = 0x186c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1176)));
label_186c30:
    // 0x186c30: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x186c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x186c34: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x186c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x186c38: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x186C38u;
    {
        const bool branch_taken_0x186c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186c38) {
            ctx->pc = 0x186C88u;
            goto label_186c88;
        }
    }
    ctx->pc = 0x186C40u;
    // 0x186c40: 0x8e2400e0  lw          $a0, 0xE0($s1)
    ctx->pc = 0x186c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x186c44: 0xc062d2c  jal         func_18B4B0
    ctx->pc = 0x186C44u;
    SET_GPR_U32(ctx, 31, 0x186C4Cu);
    ctx->pc = 0x186C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186C44u;
    // 0x186c48: 0xae2400e4  sw          $a0, 0xE4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B4B0u, 0x186C44u, 0x186C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186C4Cu;
label_186c4c:
    // 0x186c4c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x186c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x186c50: 0xa62200ea  sh          $v0, 0xEA($s1)
    ctx->pc = 0x186c50u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 234), (uint16_t)GPR_U32(ctx, 2));
    // 0x186c54: 0xc0636a4  jal         func_18DA90
    ctx->pc = 0x186C54u;
    SET_GPR_U32(ctx, 31, 0x186C5Cu);
    ctx->pc = 0x186C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186C54u;
    // 0x186c58: 0x962400ea  lhu         $a0, 0xEA($s1) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 234)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DA90u, 0x186C54u, 0x186C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186C5Cu;
label_186c5c:
    // 0x186c5c: 0xae22009c  sw          $v0, 0x9C($s1)
    ctx->pc = 0x186c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
    // 0x186c60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x186c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186c64: 0x8e230498  lw          $v1, 0x498($s1)
    ctx->pc = 0x186c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1176)));
    // 0x186c68: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x186c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x186c6c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x186c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x186c70: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x186c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x186c74: 0xae220498  sw          $v0, 0x498($s1)
    ctx->pc = 0x186c74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1176), GPR_U32(ctx, 2));
    // 0x186c78: 0x962200e8  lhu         $v0, 0xE8($s1)
    ctx->pc = 0x186c78u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x186c7c: 0xc05aafc  jal         func_16ABF0
    ctx->pc = 0x186C7Cu;
    SET_GPR_U32(ctx, 31, 0x186C84u);
    ctx->pc = 0x186C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186C7Cu;
    // 0x186c80: 0xa62200f0  sh          $v0, 0xF0($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 240), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16ABF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16ABF0u, 0x186C7Cu, 0x186C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186C84u;
label_186c84:
    // 0x186c84: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x186c84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_186c88:
    // 0x186c88: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x186C88u;
    {
        const bool branch_taken_0x186c88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x186c88) {
            ctx->pc = 0x186CBCu;
            goto label_186cbc;
        }
    }
    ctx->pc = 0x186C90u;
    // 0x186c90: 0xc0606b0  jal         func_181AC0
    ctx->pc = 0x186C90u;
    SET_GPR_U32(ctx, 31, 0x186C98u);
    ctx->pc = 0x186C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186C90u;
    // 0x186c94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181AC0u, 0x186C90u, 0x186C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186C98u;
label_186c98:
    // 0x186c98: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x186c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x186c9c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x186c9cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x186ca0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x186ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x186ca4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x186CA4u;
    {
        const bool branch_taken_0x186ca4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x186ca4) {
            ctx->pc = 0x186CBCu;
            goto label_186cbc;
        }
    }
    ctx->pc = 0x186CACu;
    // 0x186cac: 0xa62300f0  sh          $v1, 0xF0($s1)
    ctx->pc = 0x186cacu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 240), (uint16_t)GPR_U32(ctx, 3));
    // 0x186cb0: 0xc05aafc  jal         func_16ABF0
    ctx->pc = 0x186CB0u;
    SET_GPR_U32(ctx, 31, 0x186CB8u);
    ctx->pc = 0x186CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186CB0u;
    // 0x186cb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16ABF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16ABF0u, 0x186CB0u, 0x186CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186CB8u;
label_186cb8:
    // 0x186cb8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x186cb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_186cbc:
    // 0x186cbc: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x186CBCu;
    {
        const bool branch_taken_0x186cbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x186cbc) {
            ctx->pc = 0x186CF0u;
            goto label_186cf0;
        }
    }
    ctx->pc = 0x186CC4u;
    // 0x186cc4: 0xc05277c  jal         func_149DF0
    ctx->pc = 0x186CC4u;
    SET_GPR_U32(ctx, 31, 0x186CCCu);
    ctx->pc = 0x186CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186CC4u;
    // 0x186cc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149DF0u, 0x186CC4u, 0x186CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186CCCu;
label_186ccc:
    // 0x186ccc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x186cccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x186cd0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x186cd0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x186cd4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x186cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x186cd8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x186CD8u;
    {
        const bool branch_taken_0x186cd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x186cd8) {
            ctx->pc = 0x186CF0u;
            goto label_186cf0;
        }
    }
    ctx->pc = 0x186CE0u;
    // 0x186ce0: 0xa62300f0  sh          $v1, 0xF0($s1)
    ctx->pc = 0x186ce0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 240), (uint16_t)GPR_U32(ctx, 3));
    // 0x186ce4: 0xc05aafc  jal         func_16ABF0
    ctx->pc = 0x186CE4u;
    SET_GPR_U32(ctx, 31, 0x186CECu);
    ctx->pc = 0x186CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186CE4u;
    // 0x186ce8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16ABF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16ABF0u, 0x186CE4u, 0x186CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186CECu;
label_186cec:
    // 0x186cec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x186cecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_186cf0:
    // 0x186cf0: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x186CF0u;
    {
        const bool branch_taken_0x186cf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x186cf0) {
            ctx->pc = 0x186CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186CF0u;
            // 0x186cf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186D18u;
            goto label_186d18;
        }
    }
    ctx->pc = 0x186CF8u;
    // 0x186cf8: 0x962300f2  lhu         $v1, 0xF2($s1)
    ctx->pc = 0x186cf8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 242)));
    // 0x186cfc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x186cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x186d00: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x186D00u;
    {
        const bool branch_taken_0x186d00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x186d00) {
            ctx->pc = 0x186D14u;
            goto label_186d14;
        }
    }
    ctx->pc = 0x186D08u;
    // 0x186d08: 0xa62300f0  sh          $v1, 0xF0($s1)
    ctx->pc = 0x186d08u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 240), (uint16_t)GPR_U32(ctx, 3));
    // 0x186d0c: 0xc05aafc  jal         func_16ABF0
    ctx->pc = 0x186D0Cu;
    SET_GPR_U32(ctx, 31, 0x186D14u);
    ctx->pc = 0x186D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186D0Cu;
    // 0x186d10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16ABF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16ABF0u, 0x186D0Cu, 0x186D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186D14u;
label_186d14:
    // 0x186d14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x186d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_186d18:
    // 0x186d18: 0xc0617ec  jal         func_185FB0
    ctx->pc = 0x186D18u;
    SET_GPR_U32(ctx, 31, 0x186D20u);
    ctx->pc = 0x185FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185FB0u, 0x186D18u, 0x186D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186D20u;
label_186d20:
    // 0x186d20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x186d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186d24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x186d24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186d28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x186d28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x186D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D2Cu;
        // 0x186d30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186D34u;
    // 0x186d34: 0x0  nop
    ctx->pc = 0x186d34u;
    // NOP
    // 0x186d38: 0x0  nop
    ctx->pc = 0x186d38u;
    // NOP
    // 0x186d3c: 0x0  nop
    ctx->pc = 0x186d3cu;
    // NOP
    // 0x186d40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x186d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x186d44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x186d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x186d48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x186d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x186d4c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x186d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x186d50: 0xc0627f8  jal         func_189FE0
    ctx->pc = 0x186D50u;
    SET_GPR_U32(ctx, 31, 0x186D58u);
    ctx->pc = 0x186D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186D50u;
    // 0x186d54: 0x8c4400dc  lw          $a0, 0xDC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189FE0u, 0x186D50u, 0x186D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186D58u;
label_186d58:
    // 0x186d58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x186d58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186d5c: 0xc061b9c  jal         func_186E70
    ctx->pc = 0x186D5Cu;
    SET_GPR_U32(ctx, 31, 0x186D64u);
    ctx->pc = 0x186D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186D5Cu;
    // 0x186d60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186E70u, 0x186D5Cu, 0x186D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186D64u;
label_186d64:
    // 0x186d64: 0x960203a4  lhu         $v0, 0x3A4($s0)
    ctx->pc = 0x186d64u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 932)));
    // 0x186d68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x186d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186d6c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x186d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x186d70: 0xc05a078  jal         func_1681E0
    ctx->pc = 0x186D70u;
    SET_GPR_U32(ctx, 31, 0x186D78u);
    ctx->pc = 0x186D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186D70u;
    // 0x186d74: 0xa60203a4  sh          $v0, 0x3A4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 932), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1681E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1681E0u, 0x186D70u, 0x186D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186D78u;
label_186d78:
    // 0x186d78: 0x8e030270  lw          $v1, 0x270($s0)
    ctx->pc = 0x186d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
    // 0x186d7c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x186d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x186d80: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x186d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x186d84: 0xae030270  sw          $v1, 0x270($s0)
    ctx->pc = 0x186d84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 3));
    // 0x186d88: 0x9203008c  lbu         $v1, 0x8C($s0)
    ctx->pc = 0x186d88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x186d8c: 0x3463003c  ori         $v1, $v1, 0x3C
    ctx->pc = 0x186d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)60);
    // 0x186d90: 0xa203008c  sb          $v1, 0x8C($s0)
    ctx->pc = 0x186d90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 3));
    // 0x186d94: 0x8442db30  lh          $v0, -0x24D0($v0)
    ctx->pc = 0x186d94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957872)));
    // 0x186d98: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x186d98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x186d9c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x186d9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x186da0: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x186DA0u;
    {
        const bool branch_taken_0x186da0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x186da0) {
            ctx->pc = 0x186DB4u;
            goto label_186db4;
        }
    }
    ctx->pc = 0x186DA8u;
    // 0x186da8: 0x2442fec0  addiu       $v0, $v0, -0x140
    ctx->pc = 0x186da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966976));
    // 0x186dac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x186DACu;
    {
        const bool branch_taken_0x186dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186DACu;
        // 0x186db0: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186dac) {
            ctx->pc = 0x186DD0u;
            goto label_186dd0;
        }
    }
    ctx->pc = 0x186DB4u;
label_186db4:
    // 0x186db4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x186db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x186db8: 0x8442db32  lh          $v0, -0x24CE($v0)
    ctx->pc = 0x186db8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957874)));
    // 0x186dbc: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x186dbcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x186dc0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x186DC0u;
    {
        const bool branch_taken_0x186dc0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x186dc0) {
            ctx->pc = 0x186DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186DC0u;
            // 0x186dc4: 0x960300f2  lhu         $v1, 0xF2($s0) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 242)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186DD4u;
            goto label_186dd4;
        }
    }
    ctx->pc = 0x186DC8u;
    // 0x186dc8: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x186dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x186dcc: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x186dccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_186dd0:
    // 0x186dd0: 0x960300f2  lhu         $v1, 0xF2($s0)
    ctx->pc = 0x186dd0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 242)));
label_186dd4:
    // 0x186dd4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x186dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x186dd8: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x186DD8u;
    {
        const bool branch_taken_0x186dd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x186dd8) {
            ctx->pc = 0x186DDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186DD8u;
            // 0x186ddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186DF0u;
            goto label_186df0;
        }
    }
    ctx->pc = 0x186DE0u;
    // 0x186de0: 0xa60300f0  sh          $v1, 0xF0($s0)
    ctx->pc = 0x186de0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 240), (uint16_t)GPR_U32(ctx, 3));
    // 0x186de4: 0xc05aafc  jal         func_16ABF0
    ctx->pc = 0x186DE4u;
    SET_GPR_U32(ctx, 31, 0x186DECu);
    ctx->pc = 0x186DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186DE4u;
    // 0x186de8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16ABF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16ABF0u, 0x186DE4u, 0x186DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186DECu;
label_186dec:
    // 0x186dec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x186decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_186df0:
    // 0x186df0: 0xc0617ec  jal         func_185FB0
    ctx->pc = 0x186DF0u;
    SET_GPR_U32(ctx, 31, 0x186DF8u);
    ctx->pc = 0x185FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185FB0u, 0x186DF0u, 0x186DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186DF8u;
label_186df8:
    // 0x186df8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x186df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186dfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x186dfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186e00: 0x3e00008  jr          $ra
    ctx->pc = 0x186E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186E00u;
        // 0x186e04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186E08u;
    // 0x186e08: 0x0  nop
    ctx->pc = 0x186e08u;
    // NOP
    // 0x186e0c: 0x0  nop
    ctx->pc = 0x186e0cu;
    // NOP
    if (ctx->pc == 0x186e0cu) { ctx->pc = 0x186e10u; }
}
