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

// Function: sub_00281AC8
// Address: 0x281ac8 - 0x281ba8
void sub_00281AC8_0x281ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281AC8_0x281ac8");
#endif

    switch (ctx->pc) {
        case 0x281b00u: goto label_281b00;
        case 0x281b38u: goto label_281b38;
        case 0x281b48u: goto label_281b48;
        case 0x281b74u: goto label_281b74;
        default: break;
    }

    ctx->pc = 0x281ac8u;

    // 0x281ac8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x281ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x281acc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x281accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x281ad0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x281ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x281ad4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x281ad4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281ad8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x281ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x281adc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x281adcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281ae0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x281ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x281ae4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x281ae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281ae8: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x281AE8u;
    {
        const bool branch_taken_0x281ae8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x281AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281AE8u;
        // 0x281aec: 0xffb30030  sd          $s3, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281ae8) {
            ctx->pc = 0x281B04u;
            goto label_281b04;
        }
    }
    ctx->pc = 0x281AF0u;
    // 0x281af0: 0x12400025  beqz        $s2, . + 4 + (0x25 << 2)
    ctx->pc = 0x281AF0u;
    {
        const bool branch_taken_0x281af0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x281AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281AF0u;
        // 0x281af4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281af0) {
            ctx->pc = 0x281B88u;
            goto label_281b88;
        }
    }
    ctx->pc = 0x281AF8u;
    // 0x281af8: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x281AF8u;
    SET_GPR_U32(ctx, 31, 0x281B00u);
    ctx->pc = 0x281AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281AF8u;
    // 0x281afc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x281AF8u, 0x281B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281B00u;
label_281b00:
    // 0x281b00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x281b00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_281b04:
    // 0x281b04: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x281b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x281b08: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x281b08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x281b0c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x281B0Cu;
    {
        const bool branch_taken_0x281b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x281B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281B0Cu;
        // 0x281b10: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281b0c) {
            ctx->pc = 0x281B24u;
            goto label_281b24;
        }
    }
    ctx->pc = 0x281B14u;
    // 0x281b14: 0x14800012  bnez        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x281B14u;
    {
        const bool branch_taken_0x281b14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x281B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281B14u;
        // 0x281b18: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281b14) {
            ctx->pc = 0x281B60u;
            goto label_281b60;
        }
    }
    ctx->pc = 0x281B1Cu;
    // 0x281b1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x281B1Cu;
    {
        const bool branch_taken_0x281b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x281b1c) {
            ctx->pc = 0x281B28u;
            goto label_281b28;
        }
    }
    ctx->pc = 0x281B24u;
label_281b24:
    // 0x281b24: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x281b24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_281b28:
    // 0x281b28: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x281B28u;
    {
        const bool branch_taken_0x281b28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x281B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281B28u;
        // 0x281b2c: 0x26050001  addiu       $a1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281b28) {
            ctx->pc = 0x281B40u;
            goto label_281b40;
        }
    }
    ctx->pc = 0x281B30u;
    // 0x281b30: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x281B30u;
    SET_GPR_U32(ctx, 31, 0x281B38u);
    ctx->pc = 0x281B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281B30u;
    // 0x281b34: 0x26040001  addiu       $a0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x281B30u, 0x281B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281B38u;
label_281b38:
    // 0x281b38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x281B38u;
    {
        const bool branch_taken_0x281b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281B38u;
        // 0x281b3c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281b38) {
            ctx->pc = 0x281B4Cu;
            goto label_281b4c;
        }
    }
    ctx->pc = 0x281B40u;
label_281b40:
    // 0x281b40: 0xc0a8c00  jal         func_2A3000
    ctx->pc = 0x281B40u;
    SET_GPR_U32(ctx, 31, 0x281B48u);
    ctx->pc = 0x281B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281B40u;
    // 0x281b44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3000u, 0x281B40u, 0x281B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281B48u;
label_281b48:
    // 0x281b48: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x281b48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_281b4c:
    // 0x281b4c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x281b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x281b50: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x281B50u;
    {
        const bool branch_taken_0x281b50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x281B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281B50u;
        // 0x281b54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281b50) {
            ctx->pc = 0x281B60u;
            goto label_281b60;
        }
    }
    ctx->pc = 0x281B58u;
    // 0x281b58: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x281B58u;
    {
        const bool branch_taken_0x281b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281B58u;
        // 0x281b5c: 0xae330008  sw          $s3, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281b58) {
            ctx->pc = 0x281B88u;
            goto label_281b88;
        }
    }
    ctx->pc = 0x281B60u;
label_281b60:
    // 0x281b60: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x281B60u;
    {
        const bool branch_taken_0x281b60 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x281B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281B60u;
        // 0x281b64: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281b60) {
            ctx->pc = 0x281B80u;
            goto label_281b80;
        }
    }
    ctx->pc = 0x281B68u;
    // 0x281b68: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x281b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281b6c: 0xc049c48  jal         func_127120
    ctx->pc = 0x281B6Cu;
    SET_GPR_U32(ctx, 31, 0x281B74u);
    ctx->pc = 0x281B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281B6Cu;
    // 0x281b70: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x281B6Cu, 0x281B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281B74u;
label_281b74:
    // 0x281b74: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x281b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x281b78: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x281b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x281b7c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x281b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_281b80:
    // 0x281b80: 0xfe200010  sd          $zero, 0x10($s1)
    ctx->pc = 0x281b80u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 0));
    // 0x281b84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x281b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_281b88:
    // 0x281b88: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x281b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x281b8c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x281b8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x281b90: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x281b90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281b94: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x281b94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281b98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x281b98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x281B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281B9Cu;
        // 0x281ba0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281BA4u;
    // 0x281ba4: 0x0  nop
    ctx->pc = 0x281ba4u;
    // NOP
    if (ctx->pc == 0x281ba4u) { ctx->pc = 0x281ba8u; }
}
