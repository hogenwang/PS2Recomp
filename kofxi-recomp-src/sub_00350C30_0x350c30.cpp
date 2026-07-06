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

// Function: sub_00350C30
// Address: 0x350c30 - 0x350d10
void sub_00350C30_0x350c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350C30_0x350c30");
#endif

    switch (ctx->pc) {
        case 0x350c50u: goto label_350c50;
        case 0x350c6cu: goto label_350c6c;
        case 0x350c80u: goto label_350c80;
        case 0x350ca8u: goto label_350ca8;
        case 0x350cccu: goto label_350ccc;
        case 0x350cf8u: goto label_350cf8;
        default: break;
    }

    ctx->pc = 0x350c30u;

    // 0x350c30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x350c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x350c34: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x350c34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x350c38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x350c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x350c3c: 0x2484bec0  addiu       $a0, $a0, -0x4140
    ctx->pc = 0x350c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950592));
    // 0x350c40: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x350c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x350c44: 0x27a60018  addiu       $a2, $sp, 0x18
    ctx->pc = 0x350c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x350c48: 0xc0bb4bc  jal         func_2ED2F0
    ctx->pc = 0x350C48u;
    SET_GPR_U32(ctx, 31, 0x350C50u);
    ctx->pc = 0x350C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350C48u;
    // 0x350c4c: 0x27a7001f  addiu       $a3, $sp, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED2F0u, 0x350C48u, 0x350C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350C50u;
label_350c50:
    // 0x350c50: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x350C50u;
    {
        const bool branch_taken_0x350c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x350c50) {
            ctx->pc = 0x350CCCu;
            goto label_350ccc;
        }
    }
    ctx->pc = 0x350C58u;
    // 0x350c58: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x350c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x350c5c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x350c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x350c60: 0x8c45bec0  lw          $a1, -0x4140($v0)
    ctx->pc = 0x350c60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950592)));
    // 0x350c64: 0xc043e52  jal         func_10F948
    ctx->pc = 0x350C64u;
    SET_GPR_U32(ctx, 31, 0x350C6Cu);
    ctx->pc = 0x350C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350C64u;
    // 0x350c68: 0x248453b0  addiu       $a0, $a0, 0x53B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x350C64u, 0x350C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350C6Cu;
label_350c6c:
    // 0x350c6c: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x350c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x350c70: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x350c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x350c74: 0x24844318  addiu       $a0, $a0, 0x4318
    ctx->pc = 0x350c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17176));
    // 0x350c78: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x350C78u;
    SET_GPR_U32(ctx, 31, 0x350C80u);
    ctx->pc = 0x350C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350C78u;
    // 0x350c7c: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x350C78u, 0x350C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350C80u;
label_350c80:
    // 0x350c80: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x350c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x350c84: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x350c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x350c88: 0xa0404330  sb          $zero, 0x4330($v0)
    ctx->pc = 0x350c88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 17200), (uint8_t)GPR_U32(ctx, 0));
    // 0x350c8c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x350c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x350c90: 0xa0604328  sb          $zero, 0x4328($v1)
    ctx->pc = 0x350c90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 17192), (uint8_t)GPR_U32(ctx, 0));
    // 0x350c94: 0xa0404329  sb          $zero, 0x4329($v0)
    ctx->pc = 0x350c94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 17193), (uint8_t)GPR_U32(ctx, 0));
    // 0x350c98: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x350c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x350c9c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x350c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x350ca0: 0xc067c60  jal         func_19F180
    ctx->pc = 0x350CA0u;
    SET_GPR_U32(ctx, 31, 0x350CA8u);
    ctx->pc = 0x350CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350CA0u;
    // 0x350ca4: 0xa0439780  sb          $v1, -0x6880($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940544), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F180u, 0x350CA0u, 0x350CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350CA8u;
label_350ca8:
    // 0x350ca8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x350ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x350cac: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x350cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x350cb0: 0xa043db10  sb          $v1, -0x24F0($v0)
    ctx->pc = 0x350cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957840), (uint8_t)GPR_U32(ctx, 3));
    // 0x350cb4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x350cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x350cb8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x350cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x350cbc: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x350cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x350cc0: 0xa064daf8  sb          $a0, -0x2508($v1)
    ctx->pc = 0x350cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957816), (uint8_t)GPR_U32(ctx, 4));
    // 0x350cc4: 0xc0d40d8  jal         func_350360
    ctx->pc = 0x350CC4u;
    SET_GPR_U32(ctx, 31, 0x350CCCu);
    ctx->pc = 0x350CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350CC4u;
    // 0x350cc8: 0x90449490  lbu         $a0, -0x6B70($v0) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939792)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350360u, 0x350CC4u, 0x350CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350CCCu;
label_350ccc:
    // 0x350ccc: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x350cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x350cd0: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x350cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x350cd4: 0x9465be96  lhu         $a1, -0x416A($v1)
    ctx->pc = 0x350cd4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294950550)));
    // 0x350cd8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x350cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x350cdc: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x350cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x350ce0: 0xa485be96  sh          $a1, -0x416A($a0)
    ctx->pc = 0x350ce0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294950550), (uint16_t)GPR_U32(ctx, 5));
    // 0x350ce4: 0x9463be96  lhu         $v1, -0x416A($v1)
    ctx->pc = 0x350ce4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294950550)));
    // 0x350ce8: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x350CE8u;
    {
        const bool branch_taken_0x350ce8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x350ce8) {
            ctx->pc = 0x350CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350CE8u;
            // 0x350cec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350CFCu;
            goto label_350cfc;
        }
    }
    ctx->pc = 0x350CF0u;
    // 0x350cf0: 0xc0d1b18  jal         func_346C60
    ctx->pc = 0x350CF0u;
    SET_GPR_U32(ctx, 31, 0x350CF8u);
    ctx->pc = 0x350CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350CF0u;
    // 0x350cf4: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346C60u, 0x350CF0u, 0x350CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350CF8u;
label_350cf8:
    // 0x350cf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x350cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_350cfc:
    // 0x350cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x350CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350CFCu;
        // 0x350d00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350D04u;
    // 0x350d04: 0x0  nop
    ctx->pc = 0x350d04u;
    // NOP
    // 0x350d08: 0x0  nop
    ctx->pc = 0x350d08u;
    // NOP
    // 0x350d0c: 0x0  nop
    ctx->pc = 0x350d0cu;
    // NOP
    if (ctx->pc == 0x350d0cu) { ctx->pc = 0x350d10u; }
}
