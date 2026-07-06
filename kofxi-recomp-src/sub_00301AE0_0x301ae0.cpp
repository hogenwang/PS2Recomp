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

// Function: sub_00301AE0
// Address: 0x301ae0 - 0x301fd0
void sub_00301AE0_0x301ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00301AE0_0x301ae0");
#endif

    switch (ctx->pc) {
        case 0x301b3cu: goto label_301b3c;
        case 0x301b6cu: goto label_301b6c;
        case 0x301b80u: goto label_301b80;
        case 0x301bc0u: goto label_301bc0;
        case 0x301bd8u: goto label_301bd8;
        case 0x301c44u: goto label_301c44;
        case 0x301c5cu: goto label_301c5c;
        case 0x301ca4u: goto label_301ca4;
        case 0x301cbcu: goto label_301cbc;
        case 0x301d04u: goto label_301d04;
        case 0x301d1cu: goto label_301d1c;
        case 0x301d64u: goto label_301d64;
        case 0x301d7cu: goto label_301d7c;
        case 0x301dc4u: goto label_301dc4;
        case 0x301ddcu: goto label_301ddc;
        case 0x301e08u: goto label_301e08;
        case 0x301e44u: goto label_301e44;
        case 0x301e5cu: goto label_301e5c;
        case 0x301e74u: goto label_301e74;
        case 0x301e9cu: goto label_301e9c;
        case 0x301ec0u: goto label_301ec0;
        case 0x301edcu: goto label_301edc;
        case 0x301ef4u: goto label_301ef4;
        case 0x301f20u: goto label_301f20;
        case 0x301f3cu: goto label_301f3c;
        case 0x301f48u: goto label_301f48;
        case 0x301f5cu: goto label_301f5c;
        case 0x301f7cu: goto label_301f7c;
        case 0x301f98u: goto label_301f98;
        case 0x301fb0u: goto label_301fb0;
        default: break;
    }

    ctx->pc = 0x301ae0u;

    // 0x301ae0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x301ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x301ae4: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x301ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x301ae8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x301ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x301aec: 0x2c61000d  sltiu       $at, $v1, 0xD
    ctx->pc = 0x301aecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x301af0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x301af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x301af4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x301af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x301af8: 0x1020012f  beqz        $at, . + 4 + (0x12F << 2)
    ctx->pc = 0x301AF8u;
    {
        const bool branch_taken_0x301af8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x301AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301AF8u;
        // 0x301afc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301af8) {
            ctx->pc = 0x301FB8u;
            goto label_301fb8;
        }
    }
    ctx->pc = 0x301B00u;
    // 0x301b00: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x301b00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x301b04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x301b04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x301b08: 0x24843260  addiu       $a0, $a0, 0x3260
    ctx->pc = 0x301b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12896));
    // 0x301b0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x301b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x301b10: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x301b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x301b14: 0x600008  jr          $v1
    ctx->pc = 0x301B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x301B1Cu: goto label_301b1c;
            case 0x301B9Cu: goto label_301b9c;
            case 0x301C1Cu: goto label_301c1c;
            case 0x301C7Cu: goto label_301c7c;
            case 0x301CDCu: goto label_301cdc;
            case 0x301D3Cu: goto label_301d3c;
            case 0x301D9Cu: goto label_301d9c;
            case 0x301DFCu: goto label_301dfc;
            case 0x301E10u: goto label_301e10;
            case 0x301E80u: goto label_301e80;
            case 0x301EFCu: goto label_301efc;
            case 0x301FB8u: goto label_301fb8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301B14u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x301B1Cu;
label_301b1c:
    // 0x301b1c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x301b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x301b20: 0x24043fff  addiu       $a0, $zero, 0x3FFF
    ctx->pc = 0x301b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x301b24: 0x9463ec80  lhu         $v1, -0x1380($v1)
    ctx->pc = 0x301b24u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294962304)));
    // 0x301b28: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x301b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x301b2c: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x301B2Cu;
    {
        const bool branch_taken_0x301b2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x301b2c) {
            ctx->pc = 0x301B48u;
            goto label_301b48;
        }
    }
    ctx->pc = 0x301B34u;
    // 0x301b34: 0xc0d0a50  jal         func_342940
    ctx->pc = 0x301B34u;
    SET_GPR_U32(ctx, 31, 0x301B3Cu);
    ctx->pc = 0x342940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342940u, 0x301B34u, 0x301B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301B3Cu;
label_301b3c:
    // 0x301b3c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x301B3Cu;
    {
        const bool branch_taken_0x301b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x301b3c) {
            ctx->pc = 0x301B48u;
            goto label_301b48;
        }
    }
    ctx->pc = 0x301B44u;
    // 0x301b44: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x301b44u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_301b48:
    // 0x301b48: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x301b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x301b4c: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x301b4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x301b50: 0x90630c70  lbu         $v1, 0xC70($v1)
    ctx->pc = 0x301b50u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3184)));
    // 0x301b54: 0x50660119  beql        $v1, $a2, . + 4 + (0x119 << 2)
    ctx->pc = 0x301B54u;
    {
        const bool branch_taken_0x301b54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x301b54) {
            ctx->pc = 0x301B58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301B54u;
            // 0x301b58: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x301FBCu;
            goto label_301fbc;
        }
    }
    ctx->pc = 0x301B5Cu;
    // 0x301b5c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x301b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x301b60: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x301b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x301b64: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x301B64u;
    SET_GPR_U32(ctx, 31, 0x301B6Cu);
    ctx->pc = 0x301B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301B64u;
    // 0x301b68: 0x24a531d0  addiu       $a1, $a1, 0x31D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x301B64u, 0x301B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301B6Cu;
label_301b6c:
    // 0x301b6c: 0x3c0500d7  lui         $a1, 0xD7
    ctx->pc = 0x301b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)215 << 16));
    // 0x301b70: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x301b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x301b74: 0x24a5d880  addiu       $a1, $a1, -0x2780
    ctx->pc = 0x301b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957184));
    // 0x301b78: 0xc068fcc  jal         func_1A3F30
    ctx->pc = 0x301B78u;
    SET_GPR_U32(ctx, 31, 0x301B80u);
    ctx->pc = 0x301B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301B78u;
    // 0x301b7c: 0x3c060006  lui         $a2, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)6 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3F30u, 0x301B78u, 0x301B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301B80u;
label_301b80:
    // 0x301b80: 0x3c0400d7  lui         $a0, 0xD7
    ctx->pc = 0x301b80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)215 << 16));
    // 0x301b84: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x301b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x301b88: 0x2484d880  addiu       $a0, $a0, -0x2780
    ctx->pc = 0x301b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957184));
    // 0x301b8c: 0xac640c90  sw          $a0, 0xC90($v1)
    ctx->pc = 0x301b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3216), GPR_U32(ctx, 4));
    // 0x301b90: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x301b90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x301b94: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x301B94u;
    {
        const bool branch_taken_0x301b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301B94u;
        // 0x301b98: 0xa0700c70  sb          $s0, 0xC70($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 3184), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301b94) {
            ctx->pc = 0x301FB8u;
            goto label_301fb8;
        }
    }
    ctx->pc = 0x301B9Cu;
label_301b9c:
    // 0x301b9c: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x301b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x301ba0: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x301ba0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x301ba4: 0x90630c71  lbu         $v1, 0xC71($v1)
    ctx->pc = 0x301ba4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3185)));
    // 0x301ba8: 0x1066000d  beq         $v1, $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x301BA8u;
    {
        const bool branch_taken_0x301ba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x301ba8) {
            ctx->pc = 0x301BE0u;
            goto label_301be0;
        }
    }
    ctx->pc = 0x301BB0u;
    // 0x301bb0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x301bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x301bb4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x301bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x301bb8: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x301BB8u;
    SET_GPR_U32(ctx, 31, 0x301BC0u);
    ctx->pc = 0x301BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301BB8u;
    // 0x301bbc: 0x24a531e0  addiu       $a1, $a1, 0x31E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x301BB8u, 0x301BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301BC0u;
label_301bc0:
    // 0x301bc0: 0x3c0500e3  lui         $a1, 0xE3
    ctx->pc = 0x301bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)227 << 16));
    // 0x301bc4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x301bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x301bc8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x301bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x301bcc: 0x24a5d880  addiu       $a1, $a1, -0x2780
    ctx->pc = 0x301bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957184));
    // 0x301bd0: 0xc068fcc  jal         func_1A3F30
    ctx->pc = 0x301BD0u;
    SET_GPR_U32(ctx, 31, 0x301BD8u);
    ctx->pc = 0x301BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301BD0u;
    // 0x301bd4: 0x34461000  ori         $a2, $v0, 0x1000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3F30u, 0x301BD0u, 0x301BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301BD8u;
label_301bd8:
    // 0x301bd8: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x301bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x301bdc: 0xa0700c71  sb          $s0, 0xC71($v1)
    ctx->pc = 0x301bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3185), (uint8_t)GPR_U32(ctx, 16));
label_301be0:
    // 0x301be0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x301be0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x301be4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x301be4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x301be8: 0x9065e820  lbu         $a1, -0x17E0($v1)
    ctx->pc = 0x301be8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961184)));
    // 0x301bec: 0x24841870  addiu       $a0, $a0, 0x1870
    ctx->pc = 0x301becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6256));
    // 0x301bf0: 0x3c0600e3  lui         $a2, 0xE3
    ctx->pc = 0x301bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)227 << 16));
    // 0x301bf4: 0x24c6d880  addiu       $a2, $a2, -0x2780
    ctx->pc = 0x301bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957184));
    // 0x301bf8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x301bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x301bfc: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x301bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x301c00: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x301c00u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x301c04: 0x521c0  sll         $a0, $a1, 7
    ctx->pc = 0x301c04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x301c08: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x301c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x301c0c: 0x42280  sll         $a0, $a0, 10
    ctx->pc = 0x301c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 10));
    // 0x301c10: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x301c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x301c14: 0x100000e8  b           . + 4 + (0xE8 << 2)
    ctx->pc = 0x301C14u;
    {
        const bool branch_taken_0x301c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301C14u;
        // 0x301c18: 0xac640c80  sw          $a0, 0xC80($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 3200), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301c14) {
            ctx->pc = 0x301FB8u;
            goto label_301fb8;
        }
    }
    ctx->pc = 0x301C1Cu;
label_301c1c:
    // 0x301c1c: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x301c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x301c20: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x301c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x301c24: 0x90630c73  lbu         $v1, 0xC73($v1)
    ctx->pc = 0x301c24u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3187)));
    // 0x301c28: 0x106400e3  beq         $v1, $a0, . + 4 + (0xE3 << 2)
    ctx->pc = 0x301C28u;
    {
        const bool branch_taken_0x301c28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x301c28) {
            ctx->pc = 0x301FB8u;
            goto label_301fb8;
        }
    }
    ctx->pc = 0x301C30u;
    // 0x301c30: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x301c30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x301c34: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x301c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x301c38: 0x24a531e0  addiu       $a1, $a1, 0x31E0
    ctx->pc = 0x301c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12768));
    // 0x301c3c: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x301C3Cu;
    SET_GPR_U32(ctx, 31, 0x301C44u);
    ctx->pc = 0x301C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301C3Cu;
    // 0x301c40: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x301C3Cu, 0x301C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301C44u;
label_301c44:
    // 0x301c44: 0x3c0501cd  lui         $a1, 0x1CD
    ctx->pc = 0x301c44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)461 << 16));
    // 0x301c48: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x301c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x301c4c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x301c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x301c50: 0x24a5f500  addiu       $a1, $a1, -0xB00
    ctx->pc = 0x301c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964480));
    // 0x301c54: 0xc068fcc  jal         func_1A3F30
    ctx->pc = 0x301C54u;
    SET_GPR_U32(ctx, 31, 0x301C5Cu);
    ctx->pc = 0x301C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301C54u;
    // 0x301c58: 0x34462000  ori         $a2, $v0, 0x2000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3F30u, 0x301C54u, 0x301C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301C5Cu;
label_301c5c:
    // 0x301c5c: 0x3c0401cd  lui         $a0, 0x1CD
    ctx->pc = 0x301c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)461 << 16));
    // 0x301c60: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x301c60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x301c64: 0x2484f500  addiu       $a0, $a0, -0xB00
    ctx->pc = 0x301c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964480));
    // 0x301c68: 0xac640c80  sw          $a0, 0xC80($v1)
    ctx->pc = 0x301c68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3200), GPR_U32(ctx, 4));
    // 0x301c6c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x301c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x301c70: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x301c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x301c74: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x301C74u;
    {
        const bool branch_taken_0x301c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301C74u;
        // 0x301c78: 0xa0640c73  sb          $a0, 0xC73($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 3187), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301c74) {
            ctx->pc = 0x301FB8u;
            goto label_301fb8;
        }
    }
    ctx->pc = 0x301C7Cu;
label_301c7c:
    // 0x301c7c: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x301c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x301c80: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x301c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x301c84: 0x90630c73  lbu         $v1, 0xC73($v1)
    ctx->pc = 0x301c84u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3187)));
    // 0x301c88: 0x106400cb  beq         $v1, $a0, . + 4 + (0xCB << 2)
    ctx->pc = 0x301C88u;
    {
        const bool branch_taken_0x301c88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x301c88) {
            ctx->pc = 0x301FB8u;
            goto label_301fb8;
        }
    }
    ctx->pc = 0x301C90u;
    // 0x301c90: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x301c90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x301c94: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x301c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x301c98: 0x24a531e0  addiu       $a1, $a1, 0x31E0
    ctx->pc = 0x301c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12768));
    // 0x301c9c: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x301C9Cu;
    SET_GPR_U32(ctx, 31, 0x301CA4u);
    ctx->pc = 0x301CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301C9Cu;
    // 0x301ca0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x301C9Cu, 0x301CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301CA4u;
label_301ca4:
    // 0x301ca4: 0x3c0501cd  lui         $a1, 0x1CD
    ctx->pc = 0x301ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)461 << 16));
    // 0x301ca8: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x301ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x301cac: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x301cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x301cb0: 0x24a5f500  addiu       $a1, $a1, -0xB00
    ctx->pc = 0x301cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964480));
    // 0x301cb4: 0xc068fcc  jal         func_1A3F30
    ctx->pc = 0x301CB4u;
    SET_GPR_U32(ctx, 31, 0x301CBCu);
    ctx->pc = 0x301CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301CB4u;
    // 0x301cb8: 0x34462000  ori         $a2, $v0, 0x2000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3F30u, 0x301CB4u, 0x301CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301CBCu;
label_301cbc:
    // 0x301cbc: 0x3c0401cd  lui         $a0, 0x1CD
    ctx->pc = 0x301cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)461 << 16));
    // 0x301cc0: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x301cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x301cc4: 0x2484f500  addiu       $a0, $a0, -0xB00
    ctx->pc = 0x301cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964480));
    // 0x301cc8: 0xac640c80  sw          $a0, 0xC80($v1)
    ctx->pc = 0x301cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3200), GPR_U32(ctx, 4));
    // 0x301ccc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x301cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x301cd0: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x301cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x301cd4: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x301CD4u;
    {
        const bool branch_taken_0x301cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301CD4u;
        // 0x301cd8: 0xa0640c73  sb          $a0, 0xC73($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 3187), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301cd4) {
            ctx->pc = 0x301FB8u;
            goto label_301fb8;
        }
    }
    ctx->pc = 0x301CDCu;
label_301cdc:
    // 0x301cdc: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x301cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x301ce0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x301ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x301ce4: 0x90630c73  lbu         $v1, 0xC73($v1)
    ctx->pc = 0x301ce4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3187)));
    // 0x301ce8: 0x106400b3  beq         $v1, $a0, . + 4 + (0xB3 << 2)
    ctx->pc = 0x301CE8u;
    {
        const bool branch_taken_0x301ce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x301ce8) {
            ctx->pc = 0x301FB8u;
            goto label_301fb8;
        }
    }
    ctx->pc = 0x301CF0u;
    // 0x301cf0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x301cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x301cf4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x301cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x301cf8: 0x24a531e0  addiu       $a1, $a1, 0x31E0
    ctx->pc = 0x301cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12768));
    // 0x301cfc: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x301CFCu;
    SET_GPR_U32(ctx, 31, 0x301D04u);
    ctx->pc = 0x301D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301CFCu;
    // 0x301d00: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x301CFCu, 0x301D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301D04u;
label_301d04:
    // 0x301d04: 0x3c0501cd  lui         $a1, 0x1CD
    ctx->pc = 0x301d04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)461 << 16));
    // 0x301d08: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x301d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x301d0c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x301d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x301d10: 0x24a5f500  addiu       $a1, $a1, -0xB00
    ctx->pc = 0x301d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964480));
    // 0x301d14: 0xc068fcc  jal         func_1A3F30
    ctx->pc = 0x301D14u;
    SET_GPR_U32(ctx, 31, 0x301D1Cu);
    ctx->pc = 0x301D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301D14u;
    // 0x301d18: 0x34462000  ori         $a2, $v0, 0x2000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3F30u, 0x301D14u, 0x301D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301D1Cu;
label_301d1c:
    // 0x301d1c: 0x3c0401cd  lui         $a0, 0x1CD
    ctx->pc = 0x301d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)461 << 16));
    // 0x301d20: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x301d20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x301d24: 0x2484f500  addiu       $a0, $a0, -0xB00
    ctx->pc = 0x301d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964480));
    // 0x301d28: 0xac640c80  sw          $a0, 0xC80($v1)
    ctx->pc = 0x301d28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3200), GPR_U32(ctx, 4));
    // 0x301d2c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x301d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x301d30: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x301d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x301d34: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x301D34u;
    {
        const bool branch_taken_0x301d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301D34u;
        // 0x301d38: 0xa0640c73  sb          $a0, 0xC73($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 3187), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301d34) {
            ctx->pc = 0x301FB8u;
            goto label_301fb8;
        }
    }
    ctx->pc = 0x301D3Cu;
label_301d3c:
    // 0x301d3c: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x301d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x301d40: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x301d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x301d44: 0x90630c79  lbu         $v1, 0xC79($v1)
    ctx->pc = 0x301d44u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3193)));
    // 0x301d48: 0x1064009b  beq         $v1, $a0, . + 4 + (0x9B << 2)
    ctx->pc = 0x301D48u;
    {
        const bool branch_taken_0x301d48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x301d48) {
            ctx->pc = 0x301FB8u;
            goto label_301fb8;
        }
    }
    ctx->pc = 0x301D50u;
    // 0x301d50: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x301d50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x301d54: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x301d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x301d58: 0x24a531e0  addiu       $a1, $a1, 0x31E0
    ctx->pc = 0x301d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12768));
    // 0x301d5c: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x301D5Cu;
    SET_GPR_U32(ctx, 31, 0x301D64u);
    ctx->pc = 0x301D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301D5Cu;
    // 0x301d60: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x301D5Cu, 0x301D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301D64u;
label_301d64:
    // 0x301d64: 0x3c0501cd  lui         $a1, 0x1CD
    ctx->pc = 0x301d64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)461 << 16));
    // 0x301d68: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x301d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x301d6c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x301d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x301d70: 0x24a5f500  addiu       $a1, $a1, -0xB00
    ctx->pc = 0x301d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964480));
    // 0x301d74: 0xc068fcc  jal         func_1A3F30
    ctx->pc = 0x301D74u;
    SET_GPR_U32(ctx, 31, 0x301D7Cu);
    ctx->pc = 0x301D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301D74u;
    // 0x301d78: 0x34462000  ori         $a2, $v0, 0x2000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3F30u, 0x301D74u, 0x301D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301D7Cu;
label_301d7c:
    // 0x301d7c: 0x3c0401cd  lui         $a0, 0x1CD
    ctx->pc = 0x301d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)461 << 16));
    // 0x301d80: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x301d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x301d84: 0x2484f500  addiu       $a0, $a0, -0xB00
    ctx->pc = 0x301d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964480));
    // 0x301d88: 0xac640c80  sw          $a0, 0xC80($v1)
    ctx->pc = 0x301d88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3200), GPR_U32(ctx, 4));
    // 0x301d8c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x301d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x301d90: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x301d90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x301d94: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x301D94u;
    {
        const bool branch_taken_0x301d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301D94u;
        // 0x301d98: 0xa0640c79  sb          $a0, 0xC79($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 3193), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301d94) {
            ctx->pc = 0x301FB8u;
            goto label_301fb8;
        }
    }
    ctx->pc = 0x301D9Cu;
label_301d9c:
    // 0x301d9c: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x301d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x301da0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x301da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x301da4: 0x90630c79  lbu         $v1, 0xC79($v1)
    ctx->pc = 0x301da4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3193)));
    // 0x301da8: 0x10640083  beq         $v1, $a0, . + 4 + (0x83 << 2)
    ctx->pc = 0x301DA8u;
    {
        const bool branch_taken_0x301da8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x301da8) {
            ctx->pc = 0x301FB8u;
            goto label_301fb8;
        }
    }
    ctx->pc = 0x301DB0u;
    // 0x301db0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x301db0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x301db4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x301db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x301db8: 0x24a531e0  addiu       $a1, $a1, 0x31E0
    ctx->pc = 0x301db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12768));
    // 0x301dbc: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x301DBCu;
    SET_GPR_U32(ctx, 31, 0x301DC4u);
    ctx->pc = 0x301DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301DBCu;
    // 0x301dc0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x301DBCu, 0x301DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301DC4u;
label_301dc4:
    // 0x301dc4: 0x3c0501cd  lui         $a1, 0x1CD
    ctx->pc = 0x301dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)461 << 16));
    // 0x301dc8: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x301dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x301dcc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x301dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x301dd0: 0x24a5f500  addiu       $a1, $a1, -0xB00
    ctx->pc = 0x301dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964480));
    // 0x301dd4: 0xc068fcc  jal         func_1A3F30
    ctx->pc = 0x301DD4u;
    SET_GPR_U32(ctx, 31, 0x301DDCu);
    ctx->pc = 0x301DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301DD4u;
    // 0x301dd8: 0x34462000  ori         $a2, $v0, 0x2000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3F30u, 0x301DD4u, 0x301DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301DDCu;
label_301ddc:
    // 0x301ddc: 0x3c0401cd  lui         $a0, 0x1CD
    ctx->pc = 0x301ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)461 << 16));
    // 0x301de0: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x301de0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x301de4: 0x2484f500  addiu       $a0, $a0, -0xB00
    ctx->pc = 0x301de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964480));
    // 0x301de8: 0xac640c80  sw          $a0, 0xC80($v1)
    ctx->pc = 0x301de8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3200), GPR_U32(ctx, 4));
    // 0x301dec: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x301decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x301df0: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x301df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x301df4: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x301DF4u;
    {
        const bool branch_taken_0x301df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301DF4u;
        // 0x301df8: 0xa0640c79  sb          $a0, 0xC79($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 3193), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301df4) {
            ctx->pc = 0x301FB8u;
            goto label_301fb8;
        }
    }
    ctx->pc = 0x301DFCu;
label_301dfc:
    // 0x301dfc: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x301dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x301e00: 0xc0550c4  jal         func_154310
    ctx->pc = 0x301E00u;
    SET_GPR_U32(ctx, 31, 0x301E08u);
    ctx->pc = 0x301E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301E00u;
    // 0x301e04: 0x248431f8  addiu       $a0, $a0, 0x31F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154310u, 0x301E00u, 0x301E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301E08u;
label_301e08:
    // 0x301e08: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x301E08u;
    {
        const bool branch_taken_0x301e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x301e08) {
            ctx->pc = 0x301FB8u;
            goto label_301fb8;
        }
    }
    ctx->pc = 0x301E10u;
label_301e10:
    // 0x301e10: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x301e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x301e14: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x301e14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x301e18: 0x90630c7a  lbu         $v1, 0xC7A($v1)
    ctx->pc = 0x301e18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3194)));
    // 0x301e1c: 0x10640066  beq         $v1, $a0, . + 4 + (0x66 << 2)
    ctx->pc = 0x301E1Cu;
    {
        const bool branch_taken_0x301e1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x301e1c) {
            ctx->pc = 0x301FB8u;
            goto label_301fb8;
        }
    }
    ctx->pc = 0x301E24u;
    // 0x301e24: 0x28810014  slti        $at, $a0, 0x14
    ctx->pc = 0x301e24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x301e28: 0x50200008  beql        $at, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x301E28u;
    {
        const bool branch_taken_0x301e28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x301e28) {
            ctx->pc = 0x301E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301E28u;
            // 0x301e2c: 0x24860001  addiu       $a2, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x301E4Cu;
            goto label_301e4c;
        }
    }
    ctx->pc = 0x301E30u;
    // 0x301e30: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x301e30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x301e34: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x301e34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x301e38: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x301e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x301e3c: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x301E3Cu;
    SET_GPR_U32(ctx, 31, 0x301E44u);
    ctx->pc = 0x301E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301E3Cu;
    // 0x301e40: 0x24a53210  addiu       $a1, $a1, 0x3210 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x301E3Cu, 0x301E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301E44u;
label_301e44:
    // 0x301e44: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x301E44u;
    {
        const bool branch_taken_0x301e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x301e44) {
            ctx->pc = 0x301E5Cu;
            goto label_301e5c;
        }
    }
    ctx->pc = 0x301E4Cu;
label_301e4c:
    // 0x301e4c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x301e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x301e50: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x301e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x301e54: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x301E54u;
    SET_GPR_U32(ctx, 31, 0x301E5Cu);
    ctx->pc = 0x301E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301E54u;
    // 0x301e58: 0x24a53230  addiu       $a1, $a1, 0x3230 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x301E54u, 0x301E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301E5Cu;
label_301e5c:
    // 0x301e5c: 0x3c050101  lui         $a1, 0x101
    ctx->pc = 0x301e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)257 << 16));
    // 0x301e60: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x301e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x301e64: 0x24a51480  addiu       $a1, $a1, 0x1480
    ctx->pc = 0x301e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5248));
    // 0x301e68: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x301e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x301e6c: 0xc068fcc  jal         func_1A3F30
    ctx->pc = 0x301E6Cu;
    SET_GPR_U32(ctx, 31, 0x301E74u);
    ctx->pc = 0x301E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301E6Cu;
    // 0x301e70: 0x34461000  ori         $a2, $v0, 0x1000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3F30u, 0x301E6Cu, 0x301E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301E74u;
label_301e74:
    // 0x301e74: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x301e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x301e78: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x301E78u;
    {
        const bool branch_taken_0x301e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301E78u;
        // 0x301e7c: 0xa0700c7a  sb          $s0, 0xC7A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 3194), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301e78) {
            ctx->pc = 0x301FB8u;
            goto label_301fb8;
        }
    }
    ctx->pc = 0x301E80u;
label_301e80:
    // 0x301e80: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x301e80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x301e84: 0x3c0501cd  lui         $a1, 0x1CD
    ctx->pc = 0x301e84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)461 << 16));
    // 0x301e88: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x301e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x301e8c: 0x24843250  addiu       $a0, $a0, 0x3250
    ctx->pc = 0x301e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12880));
    // 0x301e90: 0x24a5f500  addiu       $a1, $a1, -0xB00
    ctx->pc = 0x301e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964480));
    // 0x301e94: 0xc068fcc  jal         func_1A3F30
    ctx->pc = 0x301E94u;
    SET_GPR_U32(ctx, 31, 0x301E9Cu);
    ctx->pc = 0x301E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301E94u;
    // 0x301e98: 0x34461000  ori         $a2, $v0, 0x1000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3F30u, 0x301E94u, 0x301E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301E9Cu;
label_301e9c:
    // 0x301e9c: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x301e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x301ea0: 0x28410014  slti        $at, $v0, 0x14
    ctx->pc = 0x301ea0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x301ea4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x301EA4u;
    {
        const bool branch_taken_0x301ea4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x301ea4) {
            ctx->pc = 0x301EC8u;
            goto label_301ec8;
        }
    }
    ctx->pc = 0x301EACu;
    // 0x301eac: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x301eacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x301eb0: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x301eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x301eb4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x301eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x301eb8: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x301EB8u;
    SET_GPR_U32(ctx, 31, 0x301EC0u);
    ctx->pc = 0x301EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301EB8u;
    // 0x301ebc: 0x24a53210  addiu       $a1, $a1, 0x3210 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x301EB8u, 0x301EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301EC0u;
label_301ec0:
    // 0x301ec0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x301EC0u;
    {
        const bool branch_taken_0x301ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x301ec0) {
            ctx->pc = 0x301EDCu;
            goto label_301edc;
        }
    }
    ctx->pc = 0x301EC8u;
label_301ec8:
    // 0x301ec8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x301ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x301ecc: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x301eccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x301ed0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x301ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x301ed4: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x301ED4u;
    SET_GPR_U32(ctx, 31, 0x301EDCu);
    ctx->pc = 0x301ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301ED4u;
    // 0x301ed8: 0x24a53230  addiu       $a1, $a1, 0x3230 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x301ED4u, 0x301EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301EDCu;
label_301edc:
    // 0x301edc: 0x3c0501cf  lui         $a1, 0x1CF
    ctx->pc = 0x301edcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)463 << 16));
    // 0x301ee0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x301ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x301ee4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x301ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x301ee8: 0x24a5f900  addiu       $a1, $a1, -0x700
    ctx->pc = 0x301ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965504));
    // 0x301eec: 0xc068fcc  jal         func_1A3F30
    ctx->pc = 0x301EECu;
    SET_GPR_U32(ctx, 31, 0x301EF4u);
    ctx->pc = 0x301EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301EECu;
    // 0x301ef0: 0x34461000  ori         $a2, $v0, 0x1000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3F30u, 0x301EECu, 0x301EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301EF4u;
label_301ef4:
    // 0x301ef4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x301EF4u;
    {
        const bool branch_taken_0x301ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x301ef4) {
            ctx->pc = 0x301FB8u;
            goto label_301fb8;
        }
    }
    ctx->pc = 0x301EFCu;
label_301efc:
    // 0x301efc: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x301efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x301f00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x301f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x301f04: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x301F04u;
    {
        const bool branch_taken_0x301f04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x301f04) {
            ctx->pc = 0x301F68u;
            goto label_301f68;
        }
    }
    ctx->pc = 0x301F0Cu;
    // 0x301f0c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x301f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x301f10: 0x24660004  addiu       $a2, $v1, 0x4
    ctx->pc = 0x301f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x301f14: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x301f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x301f18: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x301F18u;
    SET_GPR_U32(ctx, 31, 0x301F20u);
    ctx->pc = 0x301F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301F18u;
    // 0x301f1c: 0x24a531e0  addiu       $a1, $a1, 0x31E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x301F18u, 0x301F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301F20u;
label_301f20:
    // 0x301f20: 0x3c110106  lui         $s1, 0x106
    ctx->pc = 0x301f20u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)262 << 16));
    // 0x301f24: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x301f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
    // 0x301f28: 0x2631e880  addiu       $s1, $s1, -0x1780
    ctx->pc = 0x301f28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
    // 0x301f2c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x301f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x301f30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x301f30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301f34: 0xc068fcc  jal         func_1A3F30
    ctx->pc = 0x301F34u;
    SET_GPR_U32(ctx, 31, 0x301F3Cu);
    ctx->pc = 0x301F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301F34u;
    // 0x301f38: 0x34465000  ori         $a2, $v0, 0x5000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3F30u, 0x301F34u, 0x301F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301F3Cu;
label_301f3c:
    // 0x301f3c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x301f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x301f40: 0xc0c0674  jal         func_3019D0
    ctx->pc = 0x301F40u;
    SET_GPR_U32(ctx, 31, 0x301F48u);
    ctx->pc = 0x301F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301F40u;
    // 0x301f44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019D0u, 0x301F40u, 0x301F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301F48u;
label_301f48:
    // 0x301f48: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x301f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x301f4c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x301f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x301f50: 0x34210400  ori         $at, $at, 0x400
    ctx->pc = 0x301f50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1024);
    // 0x301f54: 0xc0c0674  jal         func_3019D0
    ctx->pc = 0x301F54u;
    SET_GPR_U32(ctx, 31, 0x301F5Cu);
    ctx->pc = 0x301F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301F54u;
    // 0x301f58: 0x2212821  addu        $a1, $s1, $at (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019D0u, 0x301F54u, 0x301F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301F5Cu;
label_301f5c:
    // 0x301f5c: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x301f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x301f60: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x301F60u;
    {
        const bool branch_taken_0x301f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301F60u;
        // 0x301f64: 0xa0700c7c  sb          $s0, 0xC7C($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 3196), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301f60) {
            ctx->pc = 0x301FB8u;
            goto label_301fb8;
        }
    }
    ctx->pc = 0x301F68u;
label_301f68:
    // 0x301f68: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x301f68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x301f6c: 0x24660004  addiu       $a2, $v1, 0x4
    ctx->pc = 0x301f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x301f70: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x301f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x301f74: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x301F74u;
    SET_GPR_U32(ctx, 31, 0x301F7Cu);
    ctx->pc = 0x301F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301F74u;
    // 0x301f78: 0x24a531e0  addiu       $a1, $a1, 0x31E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x301F74u, 0x301F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301F7Cu;
label_301f7c:
    // 0x301f7c: 0x3c110106  lui         $s1, 0x106
    ctx->pc = 0x301f7cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)262 << 16));
    // 0x301f80: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x301f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x301f84: 0x2631e880  addiu       $s1, $s1, -0x1780
    ctx->pc = 0x301f84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
    // 0x301f88: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x301f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x301f8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x301f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301f90: 0xc068fcc  jal         func_1A3F30
    ctx->pc = 0x301F90u;
    SET_GPR_U32(ctx, 31, 0x301F98u);
    ctx->pc = 0x301F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301F90u;
    // 0x301f94: 0x34462000  ori         $a2, $v0, 0x2000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3F30u, 0x301F90u, 0x301F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301F98u;
label_301f98:
    // 0x301f98: 0x3c0400f9  lui         $a0, 0xF9
    ctx->pc = 0x301f98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)249 << 16));
    // 0x301f9c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x301f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x301fa0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x301fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301fa4: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x301fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x301fa8: 0xc049c48  jal         func_127120
    ctx->pc = 0x301FA8u;
    SET_GPR_U32(ctx, 31, 0x301FB0u);
    ctx->pc = 0x301FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301FA8u;
    // 0x301fac: 0x34460800  ori         $a2, $v0, 0x800 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x301FA8u, 0x301FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301FB0u;
label_301fb0:
    // 0x301fb0: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x301fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x301fb4: 0xa0700c7c  sb          $s0, 0xC7C($v1)
    ctx->pc = 0x301fb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3196), (uint8_t)GPR_U32(ctx, 16));
label_301fb8:
    // 0x301fb8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x301fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_301fbc:
    // 0x301fbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x301fbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x301fc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x301fc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x301fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x301FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x301FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301FC4u;
        // 0x301fc8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x301FCCu;
    // 0x301fcc: 0x0  nop
    ctx->pc = 0x301fccu;
    // NOP
    if (ctx->pc == 0x301fccu) { ctx->pc = 0x301fd0u; }
}
