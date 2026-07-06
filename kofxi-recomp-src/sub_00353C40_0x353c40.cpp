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

// Function: sub_00353C40
// Address: 0x353c40 - 0x353ec0
void sub_00353C40_0x353c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353C40_0x353c40");
#endif

    switch (ctx->pc) {
        case 0x353c64u: goto label_353c64;
        case 0x353c80u: goto label_353c80;
        case 0x353c9cu: goto label_353c9c;
        case 0x353ca4u: goto label_353ca4;
        case 0x353cacu: goto label_353cac;
        case 0x353cb4u: goto label_353cb4;
        case 0x353cbcu: goto label_353cbc;
        case 0x353cc4u: goto label_353cc4;
        case 0x353cccu: goto label_353ccc;
        case 0x353d48u: goto label_353d48;
        case 0x353d50u: goto label_353d50;
        case 0x353d60u: goto label_353d60;
        case 0x353d90u: goto label_353d90;
        case 0x353d98u: goto label_353d98;
        case 0x353da8u: goto label_353da8;
        case 0x353db0u: goto label_353db0;
        case 0x353dbcu: goto label_353dbc;
        case 0x353df0u: goto label_353df0;
        case 0x353dfcu: goto label_353dfc;
        case 0x353e60u: goto label_353e60;
        case 0x353ea8u: goto label_353ea8;
        default: break;
    }

    ctx->pc = 0x353c40u;

label_353c40:
    // 0x353c40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x353c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x353c44: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x353c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x353c48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x353c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x353c4c: 0x9463ec78  lhu         $v1, -0x1388($v1)
    ctx->pc = 0x353c4cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294962296)));
    // 0x353c50: 0x28630064  slti        $v1, $v1, 0x64
    ctx->pc = 0x353c50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x353c54: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x353C54u;
    {
        const bool branch_taken_0x353c54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x353c54) {
            ctx->pc = 0x353C64u;
            goto label_353c64;
        }
    }
    ctx->pc = 0x353C5Cu;
    // 0x353c5c: 0xc0d5fb0  jal         func_357EC0
    ctx->pc = 0x353C5Cu;
    SET_GPR_U32(ctx, 31, 0x353C64u);
    ctx->pc = 0x353C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353C5Cu;
    // 0x353c60: 0x24042000  addiu       $a0, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357EC0u, 0x353C5Cu, 0x353C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353C64u;
label_353c64:
    // 0x353c64: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x353c64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x353c68: 0x9463ec78  lhu         $v1, -0x1388($v1)
    ctx->pc = 0x353c68u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294962296)));
    // 0x353c6c: 0x28630096  slti        $v1, $v1, 0x96
    ctx->pc = 0x353c6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x353c70: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x353C70u;
    {
        const bool branch_taken_0x353c70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x353c70) {
            ctx->pc = 0x353C80u;
            goto label_353c80;
        }
    }
    ctx->pc = 0x353C78u;
    // 0x353c78: 0xc0d5fb0  jal         func_357EC0
    ctx->pc = 0x353C78u;
    SET_GPR_U32(ctx, 31, 0x353C80u);
    ctx->pc = 0x353C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353C78u;
    // 0x353c7c: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357EC0u, 0x353C78u, 0x353C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353C80u;
label_353c80:
    // 0x353c80: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x353c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x353c84: 0x9463ec78  lhu         $v1, -0x1388($v1)
    ctx->pc = 0x353c84u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294962296)));
    // 0x353c88: 0x286300c8  slti        $v1, $v1, 0xC8
    ctx->pc = 0x353c88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)200) ? 1 : 0);
    // 0x353c8c: 0x54600010  bnel        $v1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x353C8Cu;
    {
        const bool branch_taken_0x353c8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x353c8c) {
            ctx->pc = 0x353C90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x353C8Cu;
            // 0x353c90: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353CD0u;
            goto label_353cd0;
        }
    }
    ctx->pc = 0x353C94u;
    // 0x353c94: 0xc0d5fb0  jal         func_357EC0
    ctx->pc = 0x353C94u;
    SET_GPR_U32(ctx, 31, 0x353C9Cu);
    ctx->pc = 0x353C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353C94u;
    // 0x353c98: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357EC0u, 0x353C94u, 0x353C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353C9Cu;
label_353c9c:
    // 0x353c9c: 0xc0d5fb0  jal         func_357EC0
    ctx->pc = 0x353C9Cu;
    SET_GPR_U32(ctx, 31, 0x353CA4u);
    ctx->pc = 0x353CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353C9Cu;
    // 0x353ca0: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357EC0u, 0x353C9Cu, 0x353CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353CA4u;
label_353ca4:
    // 0x353ca4: 0xc0d5fb0  jal         func_357EC0
    ctx->pc = 0x353CA4u;
    SET_GPR_U32(ctx, 31, 0x353CACu);
    ctx->pc = 0x353CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353CA4u;
    // 0x353ca8: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357EC0u, 0x353CA4u, 0x353CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353CACu;
label_353cac:
    // 0x353cac: 0xc0d5fb0  jal         func_357EC0
    ctx->pc = 0x353CACu;
    SET_GPR_U32(ctx, 31, 0x353CB4u);
    ctx->pc = 0x353CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353CACu;
    // 0x353cb0: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357EC0u, 0x353CACu, 0x353CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353CB4u;
label_353cb4:
    // 0x353cb4: 0xc0d5fb0  jal         func_357EC0
    ctx->pc = 0x353CB4u;
    SET_GPR_U32(ctx, 31, 0x353CBCu);
    ctx->pc = 0x353CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353CB4u;
    // 0x353cb8: 0x24041000  addiu       $a0, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357EC0u, 0x353CB4u, 0x353CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353CBCu;
label_353cbc:
    // 0x353cbc: 0xc0d5fb0  jal         func_357EC0
    ctx->pc = 0x353CBCu;
    SET_GPR_U32(ctx, 31, 0x353CC4u);
    ctx->pc = 0x353CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353CBCu;
    // 0x353cc0: 0x24040200  addiu       $a0, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357EC0u, 0x353CBCu, 0x353CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353CC4u;
label_353cc4:
    // 0x353cc4: 0xc0d5fb0  jal         func_357EC0
    ctx->pc = 0x353CC4u;
    SET_GPR_U32(ctx, 31, 0x353CCCu);
    ctx->pc = 0x353CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353CC4u;
    // 0x353cc8: 0x24040400  addiu       $a0, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357EC0u, 0x353CC4u, 0x353CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353CCCu;
label_353ccc:
    // 0x353ccc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x353cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_353cd0:
    // 0x353cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x353CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353CD0u;
        // 0x353cd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353CD8u;
    // 0x353cd8: 0x0  nop
    ctx->pc = 0x353cd8u;
    // NOP
    // 0x353cdc: 0x0  nop
    ctx->pc = 0x353cdcu;
    // NOP
    // 0x353ce0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x353ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x353ce4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x353ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x353ce8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x353ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x353cec: 0x8c43e7e0  lw          $v1, -0x1820($v0)
    ctx->pc = 0x353cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961120)));
    // 0x353cf0: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x353cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x353cf4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x353cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x353cf8: 0x28610021  slti        $at, $v1, 0x21
    ctx->pc = 0x353cf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x353cfc: 0x1420003f  bnez        $at, . + 4 + (0x3F << 2)
    ctx->pc = 0x353CFCu;
    {
        const bool branch_taken_0x353cfc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x353D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353CFCu;
        // 0x353d00: 0xac43e7e0  sw          $v1, -0x1820($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961120), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353cfc) {
            ctx->pc = 0x353DFCu;
            goto label_353dfc;
        }
    }
    ctx->pc = 0x353D04u;
    // 0x353d04: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x353d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x353d08: 0x9043e810  lbu         $v1, -0x17F0($v0)
    ctx->pc = 0x353d08u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961168)));
    // 0x353d0c: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x353d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x353d10: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x353D10u;
    {
        const bool branch_taken_0x353d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x353d10) {
            ctx->pc = 0x353DFCu;
            goto label_353dfc;
        }
    }
    ctx->pc = 0x353D18u;
    // 0x353d18: 0x34640008  ori         $a0, $v1, 0x8
    ctx->pc = 0x353d18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x353d1c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x353d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x353d20: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x353d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x353d24: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x353d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x353d28: 0xac65e7e0  sw          $a1, -0x1820($v1)
    ctx->pc = 0x353d28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961120), GPR_U32(ctx, 5));
    // 0x353d2c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x353d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x353d30: 0xa044e810  sb          $a0, -0x17F0($v0)
    ctx->pc = 0x353d30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961168), (uint8_t)GPR_U32(ctx, 4));
    // 0x353d34: 0x9463ec78  lhu         $v1, -0x1388($v1)
    ctx->pc = 0x353d34u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294962296)));
    // 0x353d38: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x353d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x353d3c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x353d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x353d40: 0xc0d4f10  jal         func_353C40
    ctx->pc = 0x353D40u;
    SET_GPR_U32(ctx, 31, 0x353D48u);
    ctx->pc = 0x353D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353D40u;
    // 0x353d44: 0xa443ec78  sh          $v1, -0x1388($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294962296), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353C40u;
    goto label_353c40;
    ctx->pc = 0x353D48u;
label_353d48:
    // 0x353d48: 0xc05347c  jal         func_14D1F0
    ctx->pc = 0x353D48u;
    SET_GPR_U32(ctx, 31, 0x353D50u);
    ctx->pc = 0x14D1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D1F0u, 0x353D48u, 0x353D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353D50u;
label_353d50:
    // 0x353d50: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x353d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353d54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x353d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353d58: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x353D58u;
    SET_GPR_U32(ctx, 31, 0x353D60u);
    ctx->pc = 0x353D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353D58u;
    // 0x353d5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7F0u, 0x353D58u, 0x353D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353D60u;
label_353d60:
    // 0x353d60: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x353d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x353d64: 0x9042bedb  lbu         $v0, -0x4125($v0)
    ctx->pc = 0x353d64u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950619)));
    // 0x353d68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x353d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x353d6c: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x353D6Cu;
    {
        const bool branch_taken_0x353d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x353d6c) {
            ctx->pc = 0x353D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x353D6Cu;
            // 0x353d70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353DC4u;
            goto label_353dc4;
        }
    }
    ctx->pc = 0x353D74u;
    // 0x353d74: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x353d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x353d78: 0x8442bf02  lh          $v0, -0x40FE($v0)
    ctx->pc = 0x353d78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950658)));
    // 0x353d7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x353D7Cu;
    {
        const bool branch_taken_0x353d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x353d7c) {
            ctx->pc = 0x353D90u;
            goto label_353d90;
        }
    }
    ctx->pc = 0x353D84u;
    // 0x353d84: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x353d84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x353d88: 0xc0d5fb0  jal         func_357EC0
    ctx->pc = 0x353D88u;
    SET_GPR_U32(ctx, 31, 0x353D90u);
    ctx->pc = 0x353D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353D88u;
    // 0x353d8c: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357EC0u, 0x353D88u, 0x353D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353D90u;
label_353d90:
    // 0x353d90: 0xc0d4f00  jal         func_353C00
    ctx->pc = 0x353D90u;
    SET_GPR_U32(ctx, 31, 0x353D98u);
    ctx->pc = 0x353C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353C00u, 0x353D90u, 0x353D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353D98u;
label_353d98:
    // 0x353d98: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x353D98u;
    {
        const bool branch_taken_0x353d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x353d98) {
            ctx->pc = 0x353DB0u;
            goto label_353db0;
        }
    }
    ctx->pc = 0x353DA0u;
    // 0x353da0: 0xc0d5fc0  jal         func_357F00
    ctx->pc = 0x353DA0u;
    SET_GPR_U32(ctx, 31, 0x353DA8u);
    ctx->pc = 0x357F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357F00u, 0x353DA0u, 0x353DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353DA8u;
label_353da8:
    // 0x353da8: 0xc0d0a28  jal         func_3428A0
    ctx->pc = 0x353DA8u;
    SET_GPR_U32(ctx, 31, 0x353DB0u);
    ctx->pc = 0x3428A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3428A0u, 0x353DA8u, 0x353DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353DB0u;
label_353db0:
    // 0x353db0: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x353db0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x353db4: 0xc0558e0  jal         func_156380
    ctx->pc = 0x353DB4u;
    SET_GPR_U32(ctx, 31, 0x353DBCu);
    ctx->pc = 0x353DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353DB4u;
    // 0x353db8: 0x24843fc0  addiu       $a0, $a0, 0x3FC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x353DB4u, 0x353DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353DBCu;
label_353dbc:
    // 0x353dbc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x353DBCu;
    {
        const bool branch_taken_0x353dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353dbc) {
            ctx->pc = 0x353DFCu;
            goto label_353dfc;
        }
    }
    ctx->pc = 0x353DC4u;
label_353dc4:
    // 0x353dc4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x353dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x353dc8: 0xa0459738  sb          $a1, -0x68C8($v0)
    ctx->pc = 0x353dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940472), (uint8_t)GPR_U32(ctx, 5));
    // 0x353dcc: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x353dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x353dd0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x353dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x353dd4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x353dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353dd8: 0x90469720  lbu         $a2, -0x68E0($v0)
    ctx->pc = 0x353dd8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x353ddc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x353ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x353de0: 0xa0669730  sb          $a2, -0x68D0($v1)
    ctx->pc = 0x353de0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294940464), (uint8_t)GPR_U32(ctx, 6));
    // 0x353de4: 0xac45e8e8  sw          $a1, -0x1718($v0)
    ctx->pc = 0x353de4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961384), GPR_U32(ctx, 5));
    // 0x353de8: 0xc0c06b8  jal         func_301AE0
    ctx->pc = 0x353DE8u;
    SET_GPR_U32(ctx, 31, 0x353DF0u);
    ctx->pc = 0x353DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353DE8u;
    // 0x353dec: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AE0u, 0x353DE8u, 0x353DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353DF0u;
label_353df0:
    // 0x353df0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x353df0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x353df4: 0xc0c1678  jal         func_3059E0
    ctx->pc = 0x353DF4u;
    SET_GPR_U32(ctx, 31, 0x353DFCu);
    ctx->pc = 0x353DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353DF4u;
    // 0x353df8: 0x248466e0  addiu       $a0, $a0, 0x66E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3059E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3059E0u, 0x353DF4u, 0x353DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353DFCu;
label_353dfc:
    // 0x353dfc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x353dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x353e00: 0x8c42e7e0  lw          $v0, -0x1820($v0)
    ctx->pc = 0x353e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961120)));
    // 0x353e04: 0x28410021  slti        $at, $v0, 0x21
    ctx->pc = 0x353e04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x353e08: 0x54200005  bnel        $at, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x353E08u;
    {
        const bool branch_taken_0x353e08 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x353e08) {
            ctx->pc = 0x353E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x353E08u;
            // 0x353e0c: 0x240b0020  addiu       $t3, $zero, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353E20u;
            goto label_353e20;
        }
    }
    ctx->pc = 0x353E10u;
    // 0x353e10: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x353e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x353e14: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x353e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x353e18: 0xac43e7e0  sw          $v1, -0x1820($v0)
    ctx->pc = 0x353e18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961120), GPR_U32(ctx, 3));
    // 0x353e1c: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x353e1cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_353e20:
    // 0x353e20: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x353e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x353e24: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x353e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
    // 0x353e28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x353e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x353e2c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x353e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x353e30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x353e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353e34: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x353e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x353e38: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x353e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x353e3c: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x353e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x353e40: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x353e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x353e44: 0x8c42e7e0  lw          $v0, -0x1820($v0)
    ctx->pc = 0x353e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961120)));
    // 0x353e48: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x353e48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x353e4c: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x353e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x353e50: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x353e50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353e54: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x353e54u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353e58: 0xc0c0ba8  jal         func_302EA0
    ctx->pc = 0x353E58u;
    SET_GPR_U32(ctx, 31, 0x353E60u);
    ctx->pc = 0x353E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353E58u;
    // 0x353e5c: 0x240c0  sll         $t0, $v0, 3 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302EA0u, 0x353E58u, 0x353E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353E60u;
label_353e60:
    // 0x353e60: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x353e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x353e64: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x353e64u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x353e68: 0x8c47e7e0  lw          $a3, -0x1820($v0)
    ctx->pc = 0x353e68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961120)));
    // 0x353e6c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x353e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x353e70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x353e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x353e74: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x353e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353e78: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x353e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x353e7c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x353e7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353e80: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x353e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
    // 0x353e84: 0x740c0  sll         $t0, $a3, 3
    ctx->pc = 0x353e84u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x353e88: 0xffa50008  sd          $a1, 0x8($sp)
    ctx->pc = 0x353e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 5));
    // 0x353e8c: 0x240201d0  addiu       $v0, $zero, 0x1D0
    ctx->pc = 0x353e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    // 0x353e90: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x353e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x353e94: 0x482823  subu        $a1, $v0, $t0
    ctx->pc = 0x353e94u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x353e98: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x353e98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x353e9c: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x353e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x353ea0: 0xc0c0ba8  jal         func_302EA0
    ctx->pc = 0x353EA0u;
    SET_GPR_U32(ctx, 31, 0x353EA8u);
    ctx->pc = 0x353EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353EA0u;
    // 0x353ea4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302EA0u, 0x353EA0u, 0x353EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353EA8u;
label_353ea8:
    // 0x353ea8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x353ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x353eac: 0x3e00008  jr          $ra
    ctx->pc = 0x353EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353EACu;
        // 0x353eb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353EB4u;
    // 0x353eb4: 0x0  nop
    ctx->pc = 0x353eb4u;
    // NOP
    // 0x353eb8: 0x0  nop
    ctx->pc = 0x353eb8u;
    // NOP
    // 0x353ebc: 0x0  nop
    ctx->pc = 0x353ebcu;
    // NOP
    if (ctx->pc == 0x353ebcu) { ctx->pc = 0x353ec0u; }
}
