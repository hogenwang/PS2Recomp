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

// Function: sub_00176AE0
// Address: 0x176ae0 - 0x176bf0
void sub_00176AE0_0x176ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176AE0_0x176ae0");
#endif

    switch (ctx->pc) {
        case 0x176b24u: goto label_176b24;
        case 0x176bb4u: goto label_176bb4;
        case 0x176bccu: goto label_176bcc;
        default: break;
    }

    ctx->pc = 0x176ae0u;

    // 0x176ae0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x176ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x176ae4: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x176ae4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176ae8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x176ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x176aec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x176aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x176af0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x176af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x176af4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x176af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x176af8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x176af8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176afc: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x176afcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x176b00: 0x905821  addu        $t3, $a0, $s0
    ctx->pc = 0x176b00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x176b04: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x176b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x176b08: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x176b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x176b0c: 0x24080015  addiu       $t0, $zero, 0x15
    ctx->pc = 0x176b0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x176b10: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x176b10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x176b14: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x176b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x176b18: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x176b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x176b1c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x176b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x176b20: 0x816a0000  lb          $t2, 0x0($t3)
    ctx->pc = 0x176b20u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
label_176b24:
    // 0x176b24: 0x2549fff7  addiu       $t1, $t2, -0x9
    ctx->pc = 0x176b24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967287));
    // 0x176b28: 0x2d210002  sltiu       $at, $t1, 0x2
    ctx->pc = 0x176b28u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x176b2c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x176B2Cu;
    {
        const bool branch_taken_0x176b2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x176b2c) {
            ctx->pc = 0x176B48u;
            goto label_176b48;
        }
    }
    ctx->pc = 0x176B34u;
    // 0x176b34: 0x8c69a7a0  lw          $t1, -0x5860($v1)
    ctx->pc = 0x176b34u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944672)));
    // 0x176b38: 0x15200003  bnez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x176B38u;
    {
        const bool branch_taken_0x176b38 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x176b38) {
            ctx->pc = 0x176B48u;
            goto label_176b48;
        }
    }
    ctx->pc = 0x176B40u;
    // 0x176b40: 0xac4ba7a0  sw          $t3, -0x5860($v0)
    ctx->pc = 0x176b40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294944672), GPR_U32(ctx, 11));
    // 0x176b44: 0x0  nop
    ctx->pc = 0x176b44u;
    // NOP
label_176b48:
    // 0x176b48: 0x15480003  bne         $t2, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x176B48u;
    {
        const bool branch_taken_0x176b48 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 8));
        if (branch_taken_0x176b48) {
            ctx->pc = 0x176B58u;
            goto label_176b58;
        }
    }
    ctx->pc = 0x176B50u;
    // 0x176b50: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x176B50u;
    {
        const bool branch_taken_0x176b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176B50u;
        // 0x176b54: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176b50) {
            ctx->pc = 0x176B68u;
            goto label_176b68;
        }
    }
    ctx->pc = 0x176B58u;
label_176b58:
    // 0x176b58: 0x15470003  bne         $t2, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x176B58u;
    {
        const bool branch_taken_0x176b58 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 7));
        if (branch_taken_0x176b58) {
            ctx->pc = 0x176B68u;
            goto label_176b68;
        }
    }
    ctx->pc = 0x176B60u;
    // 0x176b60: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x176b60u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x176b64: 0x0  nop
    ctx->pc = 0x176b64u;
    // NOP
label_176b68:
    // 0x176b68: 0x11460003  beq         $t2, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x176B68u;
    {
        const bool branch_taken_0x176b68 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 6));
        if (branch_taken_0x176b68) {
            ctx->pc = 0x176B78u;
            goto label_176b78;
        }
    }
    ctx->pc = 0x176B70u;
    // 0x176b70: 0x15450003  bne         $t2, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x176B70u;
    {
        const bool branch_taken_0x176b70 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 5));
        if (branch_taken_0x176b70) {
            ctx->pc = 0x176B80u;
            goto label_176b80;
        }
    }
    ctx->pc = 0x176B78u;
label_176b78:
    // 0x176b78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x176B78u;
    {
        const bool branch_taken_0x176b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176B78u;
        // 0x176b7c: 0x256b0002  addiu       $t3, $t3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176b78) {
            ctx->pc = 0x176B88u;
            goto label_176b88;
        }
    }
    ctx->pc = 0x176B80u;
label_176b80:
    // 0x176b80: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x176b80u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x176b84: 0x0  nop
    ctx->pc = 0x176b84u;
    // NOP
label_176b88:
    // 0x176b88: 0x5544ffe6  bnel        $t2, $a0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x176B88u;
    {
        const bool branch_taken_0x176b88 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 4));
        if (branch_taken_0x176b88) {
            ctx->pc = 0x176B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x176B88u;
            // 0x176b8c: 0x816a0000  lb          $t2, 0x0($t3) (Delay Slot)
            SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x176B24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_176b24;
        }
    }
    ctx->pc = 0x176B90u;
    // 0x176b90: 0x191082a  slt         $at, $t4, $s1
    ctx->pc = 0x176b90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x176b94: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x176B94u;
    {
        const bool branch_taken_0x176b94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x176b94) {
            ctx->pc = 0x176B98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x176B94u;
            // 0x176b98: 0x180882d  daddu       $s1, $t4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x176B9Cu;
            goto label_176b9c;
        }
    }
    ctx->pc = 0x176B9Cu;
label_176b9c:
    // 0x176b9c: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x176b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x176ba0: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x176ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x176ba4: 0x29080  sll         $s2, $v0, 2
    ctx->pc = 0x176ba4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x176ba8: 0x2484ad78  addiu       $a0, $a0, -0x5288
    ctx->pc = 0x176ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946168));
    // 0x176bac: 0xc06949c  jal         func_1A5270
    ctx->pc = 0x176BACu;
    SET_GPR_U32(ctx, 31, 0x176BB4u);
    ctx->pc = 0x176BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176BACu;
    // 0x176bb0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5270u, 0x176BACu, 0x176BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176BB4u;
label_176bb4:
    // 0x176bb4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x176bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x176bb8: 0x123042  srl         $a2, $s2, 1
    ctx->pc = 0x176bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x176bbc: 0xac62a7b0  sw          $v0, -0x5850($v1)
    ctx->pc = 0x176bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294944688), GPR_U32(ctx, 2));
    // 0x176bc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x176bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176bc4: 0xc067d68  jal         func_19F5A0
    ctx->pc = 0x176BC4u;
    SET_GPR_U32(ctx, 31, 0x176BCCu);
    ctx->pc = 0x176BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176BC4u;
    // 0x176bc8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F5A0u, 0x176BC4u, 0x176BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176BCCu;
label_176bcc:
    // 0x176bcc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x176bccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x176bd0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x176bd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176bd4: 0xa471a7d0  sh          $s1, -0x5830($v1)
    ctx->pc = 0x176bd4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294944720), (uint16_t)GPR_U32(ctx, 17));
    // 0x176bd8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x176bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x176bdc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x176bdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x176be0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x176be0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176be4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x176be4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176be8: 0x3e00008  jr          $ra
    ctx->pc = 0x176BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176BE8u;
        // 0x176bec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176BF0u;
}
