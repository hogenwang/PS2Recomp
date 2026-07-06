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

// Function: sub_00232B68
// Address: 0x232b68 - 0x232ce8
void sub_00232B68_0x232b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232B68_0x232b68");
#endif

    switch (ctx->pc) {
        case 0x232bb8u: goto label_232bb8;
        case 0x232bc0u: goto label_232bc0;
        case 0x232bc8u: goto label_232bc8;
        case 0x232bd0u: goto label_232bd0;
        case 0x232be0u: goto label_232be0;
        case 0x232bf8u: goto label_232bf8;
        case 0x232c0cu: goto label_232c0c;
        case 0x232c88u: goto label_232c88;
        case 0x232c98u: goto label_232c98;
        case 0x232ca0u: goto label_232ca0;
        case 0x232cbcu: goto label_232cbc;
        default: break;
    }

    ctx->pc = 0x232b68u;

    // 0x232b68: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x232b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x232b6c: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x232b6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x232b70: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x232b70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x232b74: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x232b74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x232b78: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x232b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x232b7c: 0x2463fa30  addiu       $v1, $v1, -0x5D0
    ctx->pc = 0x232b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965808));
    // 0x232b80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x232b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x232b84: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x232b84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232b88: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x232b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x232b8c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x232b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x232b90: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x232b90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x232b94: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x232b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x232b98: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x232b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x232b9c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x232b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x232ba0: 0x8ea50010  lw          $a1, 0x10($s5)
    ctx->pc = 0x232ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x232ba4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x232ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x232ba8: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x232BA8u;
    {
        const bool branch_taken_0x232ba8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x232BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232BA8u;
        // 0x232bac: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232ba8) {
            ctx->pc = 0x232BD8u;
            goto label_232bd8;
        }
    }
    ctx->pc = 0x232BB0u;
    // 0x232bb0: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x232BB0u;
    {
        const bool branch_taken_0x232bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232BB0u;
        // 0x232bb4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232bb0) {
            ctx->pc = 0x232CC4u;
            goto label_232cc4;
        }
    }
    ctx->pc = 0x232BB8u;
label_232bb8:
    // 0x232bb8: 0xc08c698  jal         func_231A60
    ctx->pc = 0x232BB8u;
    SET_GPR_U32(ctx, 31, 0x232BC0u);
    ctx->pc = 0x232BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232BB8u;
    // 0x232bbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x232BB8u, 0x232BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232BC0u;
label_232bc0:
    // 0x232bc0: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x232BC0u;
    {
        const bool branch_taken_0x232bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232BC0u;
        // 0x232bc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232bc0) {
            ctx->pc = 0x232CC0u;
            goto label_232cc0;
        }
    }
    ctx->pc = 0x232BC8u;
label_232bc8:
    // 0x232bc8: 0xc08c698  jal         func_231A60
    ctx->pc = 0x232BC8u;
    SET_GPR_U32(ctx, 31, 0x232BD0u);
    ctx->pc = 0x232BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232BC8u;
    // 0x232bcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x232BC8u, 0x232BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232BD0u;
label_232bd0:
    // 0x232bd0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x232BD0u;
    {
        const bool branch_taken_0x232bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232BD0u;
        // 0x232bd4: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232bd0) {
            ctx->pc = 0x232CC0u;
            goto label_232cc0;
        }
    }
    ctx->pc = 0x232BD8u;
label_232bd8:
    // 0x232bd8: 0xc08c682  jal         func_231A08
    ctx->pc = 0x232BD8u;
    SET_GPR_U32(ctx, 31, 0x232BE0u);
    ctx->pc = 0x232BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232BD8u;
    // 0x232bdc: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x232BD8u, 0x232BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232BE0u;
label_232be0:
    // 0x232be0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x232be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x232be4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x232be4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232be8: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x232BE8u;
    {
        const bool branch_taken_0x232be8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x232BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232BE8u;
        // 0x232bec: 0x2413000b  addiu       $s3, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232be8) {
            ctx->pc = 0x232C80u;
            goto label_232c80;
        }
    }
    ctx->pc = 0x232BF0u;
    // 0x232bf0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x232BF0u;
    {
        const bool branch_taken_0x232bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232BF0u;
        // 0x232bf4: 0x92020042  lbu         $v0, 0x42($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 66)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232bf0) {
            ctx->pc = 0x232C50u;
            goto label_232c50;
        }
    }
    ctx->pc = 0x232BF8u;
label_232bf8:
    // 0x232bf8: 0x10540005  beq         $v0, $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x232BF8u;
    {
        const bool branch_taken_0x232bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x232BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232BF8u;
        // 0x232bfc: 0x2411000b  addiu       $s1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232bf8) {
            ctx->pc = 0x232C10u;
            goto label_232c10;
        }
    }
    ctx->pc = 0x232C00u;
    // 0x232c00: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x232c00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x232c04: 0xc08b65c  jal         func_22D970
    ctx->pc = 0x232C04u;
    SET_GPR_U32(ctx, 31, 0x232C0Cu);
    ctx->pc = 0x232C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232C04u;
    // 0x232c08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D970u, 0x232C04u, 0x232C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232C0Cu;
label_232c0c:
    // 0x232c0c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x232c0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_232c10:
    // 0x232c10: 0x16330009  bne         $s1, $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x232C10u;
    {
        const bool branch_taken_0x232c10 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        if (branch_taken_0x232c10) {
            ctx->pc = 0x232C38u;
            goto label_232c38;
        }
    }
    ctx->pc = 0x232C18u;
    // 0x232c18: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x232c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x232c1c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x232C1Cu;
    {
        const bool branch_taken_0x232c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x232c1c) {
            ctx->pc = 0x232C80u;
            goto label_232c80;
        }
    }
    ctx->pc = 0x232C24u;
    // 0x232c24: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x232c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x232c28: 0x1080ffe3  beqz        $a0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x232C28u;
    {
        const bool branch_taken_0x232c28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x232c28) {
            ctx->pc = 0x232BB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_232bb8;
        }
    }
    ctx->pc = 0x232C30u;
    // 0x232c30: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x232C30u;
    {
        const bool branch_taken_0x232c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232C30u;
        // 0x232c34: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232c30) {
            ctx->pc = 0x232C68u;
            goto label_232c68;
        }
    }
    ctx->pc = 0x232C38u;
label_232c38:
    // 0x232c38: 0x1620001e  bnez        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x232C38u;
    {
        const bool branch_taken_0x232c38 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x232c38) {
            ctx->pc = 0x232CB4u;
            goto label_232cb4;
        }
    }
    ctx->pc = 0x232C40u;
    // 0x232c40: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x232c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x232c44: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x232C44u;
    {
        const bool branch_taken_0x232c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x232c44) {
            ctx->pc = 0x232C80u;
            goto label_232c80;
        }
    }
    ctx->pc = 0x232C4Cu;
    // 0x232c4c: 0x92020042  lbu         $v0, 0x42($s0)
    ctx->pc = 0x232c4cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 66)));
label_232c50:
    // 0x232c50: 0x5040ffe9  beql        $v0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x232C50u;
    {
        const bool branch_taken_0x232c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232c50) {
            ctx->pc = 0x232C54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232C50u;
            // 0x232c54: 0xde020020  ld          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232BF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_232bf8;
        }
    }
    ctx->pc = 0x232C58u;
    // 0x232c58: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x232c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x232c5c: 0x1080ffda  beqz        $a0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x232C5Cu;
    {
        const bool branch_taken_0x232c5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x232c5c) {
            ctx->pc = 0x232BC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_232bc8;
        }
    }
    ctx->pc = 0x232C64u;
    // 0x232c64: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x232c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_232c68:
    // 0x232c68: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x232c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x232c6c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x232c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x232c70: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x232c70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
    // 0x232c74: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x232c74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x232c78: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x232c78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x232c7c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x232c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_232c80:
    // 0x232c80: 0xc08c698  jal         func_231A60
    ctx->pc = 0x232C80u;
    SET_GPR_U32(ctx, 31, 0x232C88u);
    ctx->pc = 0x232C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232C80u;
    // 0x232c84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x232C80u, 0x232C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232C88u;
label_232c88:
    // 0x232c88: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x232c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x232c8c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x232c8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232c90: 0xc08c6b0  jal         func_231AC0
    ctx->pc = 0x232C90u;
    SET_GPR_U32(ctx, 31, 0x232C98u);
    ctx->pc = 0x232C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232C90u;
    // 0x232c94: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231AC0u, 0x232C90u, 0x232C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232C98u;
label_232c98:
    // 0x232c98: 0xc08c682  jal         func_231A08
    ctx->pc = 0x232C98u;
    SET_GPR_U32(ctx, 31, 0x232CA0u);
    ctx->pc = 0x232C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232C98u;
    // 0x232c9c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x232C98u, 0x232CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232CA0u;
label_232ca0:
    // 0x232ca0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x232ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x232ca4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x232ca4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232ca8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x232ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x232cac: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x232cacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x232cb0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x232cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_232cb4:
    // 0x232cb4: 0xc08c698  jal         func_231A60
    ctx->pc = 0x232CB4u;
    SET_GPR_U32(ctx, 31, 0x232CBCu);
    ctx->pc = 0x232CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232CB4u;
    // 0x232cb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x232CB4u, 0x232CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232CBCu;
label_232cbc:
    // 0x232cbc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x232cbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_232cc0:
    // 0x232cc0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x232cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_232cc4:
    // 0x232cc4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x232cc4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x232cc8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x232cc8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x232ccc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x232cccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x232cd0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x232cd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x232cd4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x232cd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232cd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x232cd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x232CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232CDCu;
        // 0x232ce0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232CE4u;
    // 0x232ce4: 0x0  nop
    ctx->pc = 0x232ce4u;
    // NOP
    if (ctx->pc == 0x232ce4u) { ctx->pc = 0x232ce8u; }
}
