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

// Function: sub_00240AB0
// Address: 0x240ab0 - 0x240ba0
void sub_00240AB0_0x240ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240AB0_0x240ab0");
#endif

    switch (ctx->pc) {
        case 0x240b88u: goto label_240b88;
        default: break;
    }

    ctx->pc = 0x240ab0u;

    // 0x240ab0: 0x308700ff  andi        $a3, $a0, 0xFF
    ctx->pc = 0x240ab0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x240ab4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x240ab4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x240ab8: 0x24e3ffff  addiu       $v1, $a3, -0x1
    ctx->pc = 0x240ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x240abc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x240abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x240ac0: 0x2c62000b  sltiu       $v0, $v1, 0xB
    ctx->pc = 0x240ac0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x240ac4: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x240AC4u;
    {
        const bool branch_taken_0x240ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240AC4u;
        // 0x240ac8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240ac4) {
            ctx->pc = 0x240B6Cu;
            goto label_240b6c;
        }
    }
    ctx->pc = 0x240ACCu;
    // 0x240acc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x240accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x240ad0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x240ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x240ad4: 0x24426240  addiu       $v0, $v0, 0x6240
    ctx->pc = 0x240ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25152));
    // 0x240ad8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x240ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x240adc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x240adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x240ae0: 0x800008  jr          $a0
    ctx->pc = 0x240AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240AE8u: goto label_240ae8;
            case 0x240AF4u: goto label_240af4;
            case 0x240B00u: goto label_240b00;
            case 0x240B0Cu: goto label_240b0c;
            case 0x240B18u: goto label_240b18;
            case 0x240B24u: goto label_240b24;
            case 0x240B30u: goto label_240b30;
            case 0x240B3Cu: goto label_240b3c;
            case 0x240B48u: goto label_240b48;
            case 0x240B54u: goto label_240b54;
            case 0x240B60u: goto label_240b60;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240AE0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x240AE8u;
label_240ae8:
    // 0x240ae8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x240ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x240aec: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x240AECu;
    {
        const bool branch_taken_0x240aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240AECu;
        // 0x240af0: 0x24426180  addiu       $v0, $v0, 0x6180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24960));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240aec) {
            ctx->pc = 0x240B8Cu;
            goto label_240b8c;
        }
    }
    ctx->pc = 0x240AF4u;
label_240af4:
    // 0x240af4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x240af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x240af8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x240AF8u;
    {
        const bool branch_taken_0x240af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240AF8u;
        // 0x240afc: 0x24426190  addiu       $v0, $v0, 0x6190 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240af8) {
            ctx->pc = 0x240B8Cu;
            goto label_240b8c;
        }
    }
    ctx->pc = 0x240B00u;
label_240b00:
    // 0x240b00: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x240b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x240b04: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x240B04u;
    {
        const bool branch_taken_0x240b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240B04u;
        // 0x240b08: 0x244261a0  addiu       $v0, $v0, 0x61A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240b04) {
            ctx->pc = 0x240B8Cu;
            goto label_240b8c;
        }
    }
    ctx->pc = 0x240B0Cu;
label_240b0c:
    // 0x240b0c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x240b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x240b10: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x240B10u;
    {
        const bool branch_taken_0x240b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240B10u;
        // 0x240b14: 0x244261b0  addiu       $v0, $v0, 0x61B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240b10) {
            ctx->pc = 0x240B8Cu;
            goto label_240b8c;
        }
    }
    ctx->pc = 0x240B18u;
label_240b18:
    // 0x240b18: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x240b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x240b1c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x240B1Cu;
    {
        const bool branch_taken_0x240b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240B1Cu;
        // 0x240b20: 0x244261c0  addiu       $v0, $v0, 0x61C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240b1c) {
            ctx->pc = 0x240B8Cu;
            goto label_240b8c;
        }
    }
    ctx->pc = 0x240B24u;
label_240b24:
    // 0x240b24: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x240b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x240b28: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x240B28u;
    {
        const bool branch_taken_0x240b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240B28u;
        // 0x240b2c: 0x244261d0  addiu       $v0, $v0, 0x61D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240b28) {
            ctx->pc = 0x240B8Cu;
            goto label_240b8c;
        }
    }
    ctx->pc = 0x240B30u;
label_240b30:
    // 0x240b30: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x240b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x240b34: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x240B34u;
    {
        const bool branch_taken_0x240b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240B34u;
        // 0x240b38: 0x244261e0  addiu       $v0, $v0, 0x61E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240b34) {
            ctx->pc = 0x240B8Cu;
            goto label_240b8c;
        }
    }
    ctx->pc = 0x240B3Cu;
label_240b3c:
    // 0x240b3c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x240b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x240b40: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x240B40u;
    {
        const bool branch_taken_0x240b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240B40u;
        // 0x240b44: 0x244261f0  addiu       $v0, $v0, 0x61F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240b40) {
            ctx->pc = 0x240B8Cu;
            goto label_240b8c;
        }
    }
    ctx->pc = 0x240B48u;
label_240b48:
    // 0x240b48: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x240b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x240b4c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x240B4Cu;
    {
        const bool branch_taken_0x240b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240B4Cu;
        // 0x240b50: 0x24426200  addiu       $v0, $v0, 0x6200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240b4c) {
            ctx->pc = 0x240B8Cu;
            goto label_240b8c;
        }
    }
    ctx->pc = 0x240B54u;
label_240b54:
    // 0x240b54: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x240b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x240b58: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x240B58u;
    {
        const bool branch_taken_0x240b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240B58u;
        // 0x240b5c: 0x24426210  addiu       $v0, $v0, 0x6210 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240b58) {
            ctx->pc = 0x240B8Cu;
            goto label_240b8c;
        }
    }
    ctx->pc = 0x240B60u;
label_240b60:
    // 0x240b60: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x240b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x240b64: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x240B64u;
    {
        const bool branch_taken_0x240b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240B64u;
        // 0x240b68: 0x24426220  addiu       $v0, $v0, 0x6220 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240b64) {
            ctx->pc = 0x240B8Cu;
            goto label_240b8c;
        }
    }
    ctx->pc = 0x240B6Cu;
label_240b6c:
    // 0x240b6c: 0x3c1001c1  lui         $s0, 0x1C1
    ctx->pc = 0x240b6cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)449 << 16));
    // 0x240b70: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x240b70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x240b74: 0x2610ad60  addiu       $s0, $s0, -0x52A0
    ctx->pc = 0x240b74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946144));
    // 0x240b78: 0x24c66230  addiu       $a2, $a2, 0x6230
    ctx->pc = 0x240b78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25136));
    // 0x240b7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x240b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240b80: 0xc043e24  jal         func_10F890
    ctx->pc = 0x240B80u;
    SET_GPR_U32(ctx, 31, 0x240B88u);
    ctx->pc = 0x240B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240B80u;
    // 0x240b84: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F890u, 0x240B80u, 0x240B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240B88u;
label_240b88:
    // 0x240b88: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x240b88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_240b8c:
    // 0x240b8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x240b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240b90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x240b90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240b94: 0x3e00008  jr          $ra
    ctx->pc = 0x240B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240B94u;
        // 0x240b98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240B9Cu;
    // 0x240b9c: 0x0  nop
    ctx->pc = 0x240b9cu;
    // NOP
}
