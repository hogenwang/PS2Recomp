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

// Function: sub_00118AE0
// Address: 0x118ae0 - 0x118b90
void sub_00118AE0_0x118ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118AE0_0x118ae0");
#endif

    switch (ctx->pc) {
        case 0x118ae0u: goto label_118ae0;
        case 0x118ae4u: goto label_118ae4;
        case 0x118ae8u: goto label_118ae8;
        case 0x118aecu: goto label_118aec;
        case 0x118af0u: goto label_118af0;
        case 0x118af4u: goto label_118af4;
        case 0x118af8u: goto label_118af8;
        case 0x118afcu: goto label_118afc;
        case 0x118b00u: goto label_118b00;
        case 0x118b04u: goto label_118b04;
        case 0x118b08u: goto label_118b08;
        case 0x118b0cu: goto label_118b0c;
        case 0x118b10u: goto label_118b10;
        case 0x118b14u: goto label_118b14;
        case 0x118b18u: goto label_118b18;
        case 0x118b1cu: goto label_118b1c;
        case 0x118b20u: goto label_118b20;
        case 0x118b24u: goto label_118b24;
        case 0x118b28u: goto label_118b28;
        case 0x118b2cu: goto label_118b2c;
        case 0x118b30u: goto label_118b30;
        case 0x118b34u: goto label_118b34;
        case 0x118b38u: goto label_118b38;
        case 0x118b3cu: goto label_118b3c;
        case 0x118b40u: goto label_118b40;
        case 0x118b44u: goto label_118b44;
        case 0x118b48u: goto label_118b48;
        case 0x118b4cu: goto label_118b4c;
        case 0x118b50u: goto label_118b50;
        case 0x118b54u: goto label_118b54;
        case 0x118b58u: goto label_118b58;
        case 0x118b5cu: goto label_118b5c;
        case 0x118b60u: goto label_118b60;
        case 0x118b64u: goto label_118b64;
        case 0x118b68u: goto label_118b68;
        case 0x118b6cu: goto label_118b6c;
        case 0x118b70u: goto label_118b70;
        case 0x118b74u: goto label_118b74;
        case 0x118b78u: goto label_118b78;
        case 0x118b7cu: goto label_118b7c;
        case 0x118b80u: goto label_118b80;
        case 0x118b84u: goto label_118b84;
        case 0x118b88u: goto label_118b88;
        case 0x118b8cu: goto label_118b8c;
        default: break;
    }

    ctx->pc = 0x118ae0u;

label_118ae0:
    // 0x118ae0: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x118ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
label_118ae4:
    // 0x118ae4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x118ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
label_118ae8:
    // 0x118ae8: 0x24a2d140  addiu       $v0, $a1, -0x2EC0
    ctx->pc = 0x118ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955328));
label_118aec:
    // 0x118aec: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x118aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_118af0:
    // 0x118af0: 0xac62d540  sw          $v0, -0x2AC0($v1)
    ctx->pc = 0x118af0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956352), GPR_U32(ctx, 2));
label_118af4:
    // 0x118af4: 0x24430400  addiu       $v1, $v0, 0x400
    ctx->pc = 0x118af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
label_118af8:
    // 0x118af8: 0x244203f0  addiu       $v0, $v0, 0x3F0
    ctx->pc = 0x118af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
label_118afc:
    // 0x118afc: 0x0  nop
    ctx->pc = 0x118afcu;
    // NOP
label_118b00:
    // 0x118b00: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x118b00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_118b04:
    // 0x118b04: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x118b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_118b08:
    // 0x118b08: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x118b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_118b0c:
    // 0x118b0c: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x118b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_118b10:
    // 0x118b10: 0x0  nop
    ctx->pc = 0x118b10u;
    // NOP
label_118b14:
    // 0x118b14: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
label_118b18:
    if (ctx->pc == 0x118B18u) {
        ctx->pc = 0x118B1Cu;
        goto label_118b1c;
    }
    ctx->pc = 0x118B14u;
    {
        const bool branch_taken_0x118b14 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x118b14) {
            ctx->pc = 0x118B00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_118b00;
        }
    }
    ctx->pc = 0x118B1Cu;
label_118b1c:
    // 0x118b1c: 0x24a3d140  addiu       $v1, $a1, -0x2EC0
    ctx->pc = 0x118b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955328));
label_118b20:
    // 0x118b20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x118b20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_118b24:
    // 0x118b24: 0x3e00008  jr          $ra
label_118b28:
    if (ctx->pc == 0x118B28u) {
        ctx->pc = 0x118B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118B24u;
        // 0x118b28: 0xac6003f0  sw          $zero, 0x3F0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1008), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x118B2Cu;
        goto label_118b2c;
    }
    ctx->pc = 0x118B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118B24u;
        // 0x118b28: 0xac6003f0  sw          $zero, 0x3F0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1008), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118B2Cu;
label_118b2c:
    // 0x118b2c: 0x0  nop
    ctx->pc = 0x118b2cu;
    // NOP
label_118b30:
    // 0x118b30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x118b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_118b34:
    // 0x118b34: 0x308400fe  andi        $a0, $a0, 0xFE
    ctx->pc = 0x118b34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)254);
label_118b38:
    // 0x118b38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_118b3c:
    // 0x118b3c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x118b3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_118b40:
    // 0x118b40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x118b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_118b44:
    // 0x118b44: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x118b44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_118b48:
    // 0x118b48: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x118b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_118b4c:
    // 0x118b4c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x118b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_118b50:
    // 0x118b50: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x118b50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_118b54:
    // 0x118b54: 0x40f809  jalr        $v0
label_118b58:
    if (ctx->pc == 0x118B58u) {
        ctx->pc = 0x118B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118B54u;
        // 0x118b58: 0x34640001  ori         $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x118B5Cu;
        goto label_118b5c;
    }
    ctx->pc = 0x118B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x118B5Cu);
        ctx->pc = 0x118B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118B54u;
        // 0x118b58: 0x34640001  ori         $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118B54u, 0x118B5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x118B5Cu;
label_118b5c:
    // 0x118b5c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_118b60:
    if (ctx->pc == 0x118B60u) {
        ctx->pc = 0x118B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118B5Cu;
        // 0x118b60: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x118B64u;
        goto label_118b64;
    }
    ctx->pc = 0x118B5Cu;
    {
        const bool branch_taken_0x118b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x118B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118B5Cu;
        // 0x118b60: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118b5c) {
            ctx->pc = 0x118B80u;
            goto label_118b80;
        }
    }
    ctx->pc = 0x118B64u;
label_118b64:
    // 0x118b64: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x118b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
label_118b68:
    // 0x118b68: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x118b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_118b6c:
    // 0x118b6c: 0x8c64d540  lw          $a0, -0x2AC0($v1)
    ctx->pc = 0x118b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956352)));
label_118b70:
    // 0x118b70: 0xac70d540  sw          $s0, -0x2AC0($v1)
    ctx->pc = 0x118b70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956352), GPR_U32(ctx, 16));
label_118b74:
    // 0x118b74: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x118b74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_118b78:
    // 0x118b78: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x118b78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_118b7c:
    // 0x118b7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x118b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_118b80:
    // 0x118b80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118b80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_118b84:
    // 0x118b84: 0x3e00008  jr          $ra
label_118b88:
    if (ctx->pc == 0x118B88u) {
        ctx->pc = 0x118B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118B84u;
        // 0x118b88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x118B8Cu;
        goto label_118b8c;
    }
    ctx->pc = 0x118B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118B84u;
        // 0x118b88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118B8Cu;
label_118b8c:
    // 0x118b8c: 0x0  nop
    ctx->pc = 0x118b8cu;
    // NOP
    if (ctx->pc == 0x118b8cu) { ctx->pc = 0x118b90u; }
}
