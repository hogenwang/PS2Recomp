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

// Function: sub_00263B90
// Address: 0x263b90 - 0x264028
void sub_00263B90_0x263b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00263B90_0x263b90");
#endif

    switch (ctx->pc) {
        case 0x263bccu: goto label_263bcc;
        case 0x263becu: goto label_263bec;
        case 0x263c04u: goto label_263c04;
        case 0x263c2cu: goto label_263c2c;
        case 0x263c44u: goto label_263c44;
        case 0x263c58u: goto label_263c58;
        case 0x263c60u: goto label_263c60;
        case 0x263c64u: goto label_263c64;
        case 0x263c84u: goto label_263c84;
        case 0x263c90u: goto label_263c90;
        case 0x263ca8u: goto label_263ca8;
        case 0x263ce4u: goto label_263ce4;
        case 0x263cfcu: goto label_263cfc;
        case 0x263d0cu: goto label_263d0c;
        case 0x263d1cu: goto label_263d1c;
        case 0x263d88u: goto label_263d88;
        case 0x263d9cu: goto label_263d9c;
        case 0x263dc0u: goto label_263dc0;
        case 0x263dd0u: goto label_263dd0;
        case 0x263de8u: goto label_263de8;
        case 0x263df4u: goto label_263df4;
        case 0x263e04u: goto label_263e04;
        case 0x263e8cu: goto label_263e8c;
        case 0x263e90u: goto label_263e90;
        case 0x263e94u: goto label_263e94;
        case 0x263eb4u: goto label_263eb4;
        case 0x263ec8u: goto label_263ec8;
        case 0x263f04u: goto label_263f04;
        case 0x263f0cu: goto label_263f0c;
        case 0x263f20u: goto label_263f20;
        case 0x263f40u: goto label_263f40;
        case 0x263f54u: goto label_263f54;
        case 0x263f6cu: goto label_263f6c;
        case 0x263f78u: goto label_263f78;
        case 0x263f80u: goto label_263f80;
        case 0x263f90u: goto label_263f90;
        case 0x263fc8u: goto label_263fc8;
        case 0x263fe4u: goto label_263fe4;
        case 0x263ff8u: goto label_263ff8;
        default: break;
    }

    ctx->pc = 0x263b90u;

    // 0x263b90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x263b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x263b94: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x263b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x263b98: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x263b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x263b9c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x263b9cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263ba0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x263ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x263ba4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x263ba4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263ba8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x263ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x263bac: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x263bacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263bb0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x263bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x263bb4: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x263bb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263bb8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x263bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x263bbc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x263bbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263bc0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x263bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x263bc4: 0xc09728e  jal         func_25CA38
    ctx->pc = 0x263BC4u;
    SET_GPR_U32(ctx, 31, 0x263BCCu);
    ctx->pc = 0x263BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263BC4u;
    // 0x263bc8: 0xffb10020  sd          $s1, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CA38u, 0x263BC4u, 0x263BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263BCCu;
label_263bcc:
    // 0x263bcc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x263bccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263bd0: 0x12000053  beqz        $s0, . + 4 + (0x53 << 2)
    ctx->pc = 0x263BD0u;
    {
        const bool branch_taken_0x263bd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x263BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263BD0u;
        // 0x263bd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263bd0) {
            ctx->pc = 0x263D20u;
            goto label_263d20;
        }
    }
    ctx->pc = 0x263BD8u;
    // 0x263bd8: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x263bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x263bdc: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x263BDCu;
    {
        const bool branch_taken_0x263bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263bdc) {
            ctx->pc = 0x263BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263BDCu;
            // 0x263be0: 0xac520000  sw          $s2, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263C10u;
            goto label_263c10;
        }
    }
    ctx->pc = 0x263BE4u;
    // 0x263be4: 0xc099642  jal         func_265908
    ctx->pc = 0x263BE4u;
    SET_GPR_U32(ctx, 31, 0x263BECu);
    ctx->pc = 0x263BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263BE4u;
    // 0x263be8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265908u, 0x263BE4u, 0x263BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263BECu;
label_263bec:
    // 0x263bec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x263becu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263bf0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x263bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x263bf4: 0x56220005  bnel        $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x263BF4u;
    {
        const bool branch_taken_0x263bf4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x263bf4) {
            ctx->pc = 0x263BF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263BF4u;
            // 0x263bf8: 0x8e020050  lw          $v0, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263C0Cu;
            goto label_263c0c;
        }
    }
    ctx->pc = 0x263BFCu;
    // 0x263bfc: 0xc097308  jal         func_25CC20
    ctx->pc = 0x263BFCu;
    SET_GPR_U32(ctx, 31, 0x263C04u);
    ctx->pc = 0x25CC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CC20u, 0x263BFCu, 0x263C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263C04u;
label_263c04:
    // 0x263c04: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x263C04u;
    {
        const bool branch_taken_0x263c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263C04u;
        // 0x263c08: 0xac510000  sw          $s1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263c04) {
            ctx->pc = 0x263CF0u;
            goto label_263cf0;
        }
    }
    ctx->pc = 0x263C0Cu;
label_263c0c:
    // 0x263c0c: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x263c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
label_263c10:
    // 0x263c10: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x263c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x263c14: 0xac530004  sw          $s3, 0x4($v0)
    ctx->pc = 0x263c14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
    // 0x263c18: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x263c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x263c1c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x263C1Cu;
    {
        const bool branch_taken_0x263c1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x263C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263C1Cu;
        // 0x263c20: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263c1c) {
            ctx->pc = 0x263C48u;
            goto label_263c48;
        }
    }
    ctx->pc = 0x263C24u;
    // 0x263c24: 0xc098552  jal         func_261548
    ctx->pc = 0x263C24u;
    SET_GPR_U32(ctx, 31, 0x263C2Cu);
    ctx->pc = 0x263C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263C24u;
    // 0x263c28: 0x24042140  addiu       $a0, $zero, 0x2140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x263C24u, 0x263C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263C2Cu;
label_263c2c:
    // 0x263c2c: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x263C2Cu;
    {
        const bool branch_taken_0x263c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263C2Cu;
        // 0x263c30: 0xae02004c  sw          $v0, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263c2c) {
            ctx->pc = 0x263CF0u;
            goto label_263cf0;
        }
    }
    ctx->pc = 0x263C34u;
    // 0x263c34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x263c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263c38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x263c38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263c3c: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x263C3Cu;
    SET_GPR_U32(ctx, 31, 0x263C44u);
    ctx->pc = 0x263C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263C3Cu;
    // 0x263c40: 0x24062140  addiu       $a2, $zero, 0x2140 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x263C3Cu, 0x263C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263C44u;
label_263c44:
    // 0x263c44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x263c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_263c48:
    // 0x263c48: 0x1282000a  beq         $s4, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x263C48u;
    {
        const bool branch_taken_0x263c48 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x263C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263C48u;
        // 0x263c4c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263c48) {
            ctx->pc = 0x263C74u;
            goto label_263c74;
        }
    }
    ctx->pc = 0x263C50u;
    // 0x263c50: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x263C50u;
    SET_GPR_U32(ctx, 31, 0x263C58u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x263C50u, 0x263C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263C58u;
label_263c58:
    // 0x263c58: 0x2403006a  addiu       $v1, $zero, 0x6A
    ctx->pc = 0x263c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    // 0x263c5c: 0xc097308  jal         func_25CC20
label_263c60:
    if (ctx->pc == 0x263C60u) {
        ctx->pc = 0x263C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263C5Cu;
        // 0x263c60: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263C64u;
        goto label_263c64;
    }
    ctx->pc = 0x263C5Cu;
    SET_GPR_U32(ctx, 31, 0x263C64u);
    ctx->pc = 0x263C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263C5Cu;
    // 0x263c60: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CC20u, 0x263C5Cu, 0x263C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263C64u;
label_263c64:
    // 0x263c64: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x263c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x263c68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x263c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263c6c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x263C6Cu;
    {
        const bool branch_taken_0x263c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263C6Cu;
        // 0x263c70: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263c6c) {
            ctx->pc = 0x263CF4u;
            goto label_263cf4;
        }
    }
    ctx->pc = 0x263C74u;
label_263c74:
    // 0x263c74: 0x12a2000a  beq         $s5, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x263C74u;
    {
        const bool branch_taken_0x263c74 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x263c74) {
            ctx->pc = 0x263CA0u;
            goto label_263ca0;
        }
    }
    ctx->pc = 0x263C7Cu;
    // 0x263c7c: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x263C7Cu;
    SET_GPR_U32(ctx, 31, 0x263C84u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x263C7Cu, 0x263C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263C84u;
label_263c84:
    // 0x263c84: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x263c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x263c88: 0xc097308  jal         func_25CC20
    ctx->pc = 0x263C88u;
    SET_GPR_U32(ctx, 31, 0x263C90u);
    ctx->pc = 0x263C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263C88u;
    // 0x263c8c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CC20u, 0x263C88u, 0x263C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263C90u;
label_263c90:
    // 0x263c90: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x263c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x263c94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x263c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263c98: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x263C98u;
    {
        const bool branch_taken_0x263c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263C98u;
        // 0x263c9c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263c98) {
            ctx->pc = 0x263CF4u;
            goto label_263cf4;
        }
    }
    ctx->pc = 0x263CA0u;
label_263ca0:
    // 0x263ca0: 0xc097308  jal         func_25CC20
    ctx->pc = 0x263CA0u;
    SET_GPR_U32(ctx, 31, 0x263CA8u);
    ctx->pc = 0x263CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263CA0u;
    // 0x263ca4: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CC20u, 0x263CA0u, 0x263CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263CA8u;
label_263ca8:
    // 0x263ca8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x263ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x263cac: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x263cacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x263cb0: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x263cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x263cb4: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x263cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x263cb8: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x263cb8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x263cbc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x263cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x263cc0: 0x24a57668  addiu       $a1, $a1, 0x7668
    ctx->pc = 0x263cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30312));
    // 0x263cc4: 0x24c67650  addiu       $a2, $a2, 0x7650
    ctx->pc = 0x263cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30288));
    // 0x263cc8: 0x24e77680  addiu       $a3, $a3, 0x7680
    ctx->pc = 0x263cc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 30336));
    // 0x263ccc: 0x25087610  addiu       $t0, $t0, 0x7610
    ctx->pc = 0x263cccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 30224));
    // 0x263cd0: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x263cd0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263cd4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x263cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263cd8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x263cd8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x263cdc: 0xc09922e  jal         func_2648B8
    ctx->pc = 0x263CDCu;
    SET_GPR_U32(ctx, 31, 0x263CE4u);
    ctx->pc = 0x263CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263CDCu;
    // 0x263ce0: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2648B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2648B8u, 0x263CDCu, 0x263CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263CE4u;
label_263ce4:
    // 0x263ce4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x263ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x263ce8: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x263CE8u;
    {
        const bool branch_taken_0x263ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x263ce8) {
            ctx->pc = 0x263D04u;
            goto label_263d04;
        }
    }
    ctx->pc = 0x263CF0u;
label_263cf0:
    // 0x263cf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x263cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_263cf4:
    // 0x263cf4: 0xc0972da  jal         func_25CB68
    ctx->pc = 0x263CF4u;
    SET_GPR_U32(ctx, 31, 0x263CFCu);
    ctx->pc = 0x263CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263CF4u;
    // 0x263cf8: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB68u, 0x263CF4u, 0x263CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263CFCu;
label_263cfc:
    // 0x263cfc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x263CFCu;
    {
        const bool branch_taken_0x263cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263CFCu;
        // 0x263d00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263cfc) {
            ctx->pc = 0x263D20u;
            goto label_263d20;
        }
    }
    ctx->pc = 0x263D04u;
label_263d04:
    // 0x263d04: 0xc097308  jal         func_25CC20
    ctx->pc = 0x263D04u;
    SET_GPR_U32(ctx, 31, 0x263D0Cu);
    ctx->pc = 0x25CC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CC20u, 0x263D04u, 0x263D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263D0Cu;
label_263d0c:
    // 0x263d0c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x263d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x263d10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x263d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263d14: 0xc0972da  jal         func_25CB68
    ctx->pc = 0x263D14u;
    SET_GPR_U32(ctx, 31, 0x263D1Cu);
    ctx->pc = 0x263D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263D14u;
    // 0x263d18: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB68u, 0x263D14u, 0x263D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263D1Cu;
label_263d1c:
    // 0x263d1c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x263d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_263d20:
    // 0x263d20: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x263d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x263d24: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x263d24u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x263d28: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x263d28u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x263d2c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x263d2cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x263d30: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x263d30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x263d34: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x263d34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x263d38: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x263d38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x263d3c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x263d3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x263d40: 0x3e00008  jr          $ra
    ctx->pc = 0x263D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263D40u;
        // 0x263d44: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x263D48u;
    // 0x263d48: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x263d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x263d4c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x263d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x263d50: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x263d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x263d54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x263d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x263d58: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x263d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x263d5c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x263d5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263d60: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x263d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x263d64: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x263d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x263d68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x263d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x263d6c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x263d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x263d70: 0x8cd20008  lw          $s2, 0x8($a2)
    ctx->pc = 0x263d70u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x263d74: 0x1642002b  bne         $s2, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x263D74u;
    {
        const bool branch_taken_0x263d74 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x263D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263D74u;
        // 0x263d78: 0x8cd1fff8  lw          $s1, -0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263d74) {
            ctx->pc = 0x263E24u;
            goto label_263e24;
        }
    }
    ctx->pc = 0x263D7Cu;
    // 0x263d7c: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x263d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x263d80: 0xc098552  jal         func_261548
    ctx->pc = 0x263D80u;
    SET_GPR_U32(ctx, 31, 0x263D88u);
    ctx->pc = 0x263D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263D80u;
    // 0x263d84: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x263D80u, 0x263D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263D88u;
label_263d88:
    // 0x263d88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x263d88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263d8c: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x263D8Cu;
    {
        const bool branch_taken_0x263d8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x263D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263D8Cu;
        // 0x263d90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263d8c) {
            ctx->pc = 0x263DACu;
            goto label_263dac;
        }
    }
    ctx->pc = 0x263D94u;
    // 0x263d94: 0xc097308  jal         func_25CC20
    ctx->pc = 0x263D94u;
    SET_GPR_U32(ctx, 31, 0x263D9Cu);
    ctx->pc = 0x25CC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CC20u, 0x263D94u, 0x263D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263D9Cu;
label_263d9c:
    // 0x263d9c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x263d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x263da0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x263da0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x263da4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x263DA4u;
    {
        const bool branch_taken_0x263da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263DA4u;
        // 0x263da8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263da4) {
            ctx->pc = 0x263E24u;
            goto label_263e24;
        }
    }
    ctx->pc = 0x263DACu;
label_263dac:
    // 0x263dac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x263dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x263db0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x263db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x263db4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x263db4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263db8: 0xc09980e  jal         func_266038
    ctx->pc = 0x263DB8u;
    SET_GPR_U32(ctx, 31, 0x263DC0u);
    ctx->pc = 0x263DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263DB8u;
    // 0x263dbc: 0x24080400  addiu       $t0, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266038u, 0x263DB8u, 0x263DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263DC0u;
label_263dc0:
    // 0x263dc0: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x263DC0u;
    {
        const bool branch_taken_0x263dc0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x263DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263DC0u;
        // 0x263dc4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263dc0) {
            ctx->pc = 0x263DD8u;
            goto label_263dd8;
        }
    }
    ctx->pc = 0x263DC8u;
    // 0x263dc8: 0xc098560  jal         func_261580
    ctx->pc = 0x263DC8u;
    SET_GPR_U32(ctx, 31, 0x263DD0u);
    ctx->pc = 0x263DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263DC8u;
    // 0x263dcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x263DC8u, 0x263DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263DD0u;
label_263dd0:
    // 0x263dd0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x263DD0u;
    {
        const bool branch_taken_0x263dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263DD0u;
        // 0x263dd4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263dd0) {
            ctx->pc = 0x263E24u;
            goto label_263e24;
        }
    }
    ctx->pc = 0x263DD8u;
label_263dd8:
    // 0x263dd8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x263dd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263ddc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x263ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263de0: 0xc098bb8  jal         func_262EE0
    ctx->pc = 0x263DE0u;
    SET_GPR_U32(ctx, 31, 0x263DE8u);
    ctx->pc = 0x263DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263DE0u;
    // 0x263de4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262EE0u, 0x263DE0u, 0x263DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263DE8u;
label_263de8:
    // 0x263de8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x263de8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263dec: 0xc098560  jal         func_261580
    ctx->pc = 0x263DECu;
    SET_GPR_U32(ctx, 31, 0x263DF4u);
    ctx->pc = 0x263DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263DECu;
    // 0x263df0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x263DECu, 0x263DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263DF4u;
label_263df4:
    // 0x263df4: 0x5620000a  bnel        $s1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x263DF4u;
    {
        const bool branch_taken_0x263df4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x263df4) {
            ctx->pc = 0x263DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263DF4u;
            // 0x263df8: 0xae710000  sw          $s1, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263E20u;
            goto label_263e20;
        }
    }
    ctx->pc = 0x263DFCu;
    // 0x263dfc: 0xc097308  jal         func_25CC20
    ctx->pc = 0x263DFCu;
    SET_GPR_U32(ctx, 31, 0x263E04u);
    ctx->pc = 0x25CC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CC20u, 0x263DFCu, 0x263E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263E04u;
label_263e04:
    // 0x263e04: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x263e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x263e08: 0x50540006  beql        $v0, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x263E08u;
    {
        const bool branch_taken_0x263e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x263e08) {
            ctx->pc = 0x263E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263E08u;
            // 0x263e0c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263E24u;
            goto label_263e24;
        }
    }
    ctx->pc = 0x263E10u;
    // 0x263e10: 0x14520004  bne         $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x263E10u;
    {
        const bool branch_taken_0x263e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x263E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263E10u;
        // 0x263e14: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263e10) {
            ctx->pc = 0x263E24u;
            goto label_263e24;
        }
    }
    ctx->pc = 0x263E18u;
    // 0x263e18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x263E18u;
    {
        const bool branch_taken_0x263e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263E18u;
        // 0x263e1c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263e18) {
            ctx->pc = 0x263E24u;
            goto label_263e24;
        }
    }
    ctx->pc = 0x263E20u;
label_263e20:
    // 0x263e20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x263e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_263e24:
    // 0x263e24: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x263e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x263e28: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x263e28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x263e2c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x263e2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x263e30: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x263e30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x263e34: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x263e34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x263e38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x263e38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x263e3c: 0x3e00008  jr          $ra
    ctx->pc = 0x263E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263E3Cu;
        // 0x263e40: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x263E44u;
    // 0x263e44: 0x0  nop
    ctx->pc = 0x263e44u;
    // NOP
    // 0x263e48: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x263e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x263e4c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x263e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x263e50: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x263e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x263e54: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x263e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x263e58: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x263e58u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263e5c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x263e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x263e60: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x263e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x263e64: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x263e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x263e68: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x263e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x263e6c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x263e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x263e70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x263e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x263e74: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x263e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x263e78: 0x8cd3fff8  lw          $s3, -0x8($a2)
    ctx->pc = 0x263e78u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967288)));
    // 0x263e7c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x263e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x263e80: 0x8cd50000  lw          $s5, 0x0($a2)
    ctx->pc = 0x263e80u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x263e84: 0xc0432d4  jal         func_10CB50
    ctx->pc = 0x263E84u;
    SET_GPR_U32(ctx, 31, 0x263E8Cu);
    ctx->pc = 0x263E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263E84u;
    // 0x263e88: 0x8cd6fff8  lw          $s6, -0x8($a2) (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967288)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB50u, 0x263E84u, 0x263E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263E8Cu;
label_263e8c:
    // 0x263e8c: 0xc097242  jal         func_25C908
label_263e90:
    if (ctx->pc == 0x263E90u) {
        ctx->pc = 0x263E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263E8Cu;
        // 0x263e90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263E94u;
        goto label_263e94;
    }
    ctx->pc = 0x263E8Cu;
    SET_GPR_U32(ctx, 31, 0x263E94u);
    ctx->pc = 0x263E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263E8Cu;
    // 0x263e90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C908u, 0x263E8Cu, 0x263E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263E94u;
label_263e94:
    // 0x263e94: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x263e94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263e98: 0x12800058  beqz        $s4, . + 4 + (0x58 << 2)
    ctx->pc = 0x263E98u;
    {
        const bool branch_taken_0x263e98 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x263E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263E98u;
        // 0x263e9c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263e98) {
            ctx->pc = 0x263FFCu;
            goto label_263ffc;
        }
    }
    ctx->pc = 0x263EA0u;
    // 0x263ea0: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x263ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x263ea4: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x263EA4u;
    {
        const bool branch_taken_0x263ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263EA4u;
        // 0x263ea8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263ea4) {
            ctx->pc = 0x263FFCu;
            goto label_263ffc;
        }
    }
    ctx->pc = 0x263EACu;
    // 0x263eac: 0xc098552  jal         func_261548
    ctx->pc = 0x263EACu;
    SET_GPR_U32(ctx, 31, 0x263EB4u);
    ctx->pc = 0x263EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263EACu;
    // 0x263eb0: 0x24040402  addiu       $a0, $zero, 0x402 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1026));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x263EACu, 0x263EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263EB4u;
label_263eb4:
    // 0x263eb4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x263eb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263eb8: 0x56400007  bnel        $s2, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x263EB8u;
    {
        const bool branch_taken_0x263eb8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x263eb8) {
            ctx->pc = 0x263EBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263EB8u;
            // 0x263ebc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263ED8u;
            goto label_263ed8;
        }
    }
    ctx->pc = 0x263EC0u;
    // 0x263ec0: 0xc097308  jal         func_25CC20
    ctx->pc = 0x263EC0u;
    SET_GPR_U32(ctx, 31, 0x263EC8u);
    ctx->pc = 0x25CC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CC20u, 0x263EC0u, 0x263EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263EC8u;
label_263ec8:
    // 0x263ec8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x263ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x263ecc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x263eccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x263ed0: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x263ED0u;
    {
        const bool branch_taken_0x263ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263ED0u;
        // 0x263ed4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263ed0) {
            ctx->pc = 0x263FFCu;
            goto label_263ffc;
        }
    }
    ctx->pc = 0x263ED8u;
label_263ed8:
    // 0x263ed8: 0x16a20045  bne         $s5, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x263ED8u;
    {
        const bool branch_taken_0x263ed8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x263EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263ED8u;
        // 0x263edc: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263ed8) {
            ctx->pc = 0x263FF0u;
            goto label_263ff0;
        }
    }
    ctx->pc = 0x263EE0u;
    // 0x263ee0: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x263ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x263ee4: 0x92670003  lbu         $a3, 0x3($s3)
    ctx->pc = 0x263ee4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x263ee8: 0x92680002  lbu         $t0, 0x2($s3)
    ctx->pc = 0x263ee8u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x263eec: 0x24c67690  addiu       $a2, $a2, 0x7690
    ctx->pc = 0x263eecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30352));
    // 0x263ef0: 0x92690001  lbu         $t1, 0x1($s3)
    ctx->pc = 0x263ef0u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x263ef4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x263ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263ef8: 0x926a0000  lbu         $t2, 0x0($s3)
    ctx->pc = 0x263ef8u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x263efc: 0xc043e24  jal         func_10F890
    ctx->pc = 0x263EFCu;
    SET_GPR_U32(ctx, 31, 0x263F04u);
    ctx->pc = 0x263F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263EFCu;
    // 0x263f00: 0x24050402  addiu       $a1, $zero, 0x402 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1026));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F890u, 0x263EFCu, 0x263F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263F04u;
label_263f04:
    // 0x263f04: 0xc098552  jal         func_261548
    ctx->pc = 0x263F04u;
    SET_GPR_U32(ctx, 31, 0x263F0Cu);
    ctx->pc = 0x263F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263F04u;
    // 0x263f08: 0x24040400  addiu       $a0, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x263F04u, 0x263F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263F0Cu;
label_263f0c:
    // 0x263f0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x263f0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263f10: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x263F10u;
    {
        const bool branch_taken_0x263f10 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x263F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263F10u;
        // 0x263f14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263f10) {
            ctx->pc = 0x263F2Cu;
            goto label_263f2c;
        }
    }
    ctx->pc = 0x263F18u;
    // 0x263f18: 0xc097308  jal         func_25CC20
    ctx->pc = 0x263F18u;
    SET_GPR_U32(ctx, 31, 0x263F20u);
    ctx->pc = 0x263F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263F18u;
    // 0x263f1c: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CC20u, 0x263F18u, 0x263F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263F20u;
label_263f20:
    // 0x263f20: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x263f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x263f24: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x263F24u;
    {
        const bool branch_taken_0x263f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263F24u;
        // 0x263f28: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263f24) {
            ctx->pc = 0x263FF0u;
            goto label_263ff0;
        }
    }
    ctx->pc = 0x263F2Cu;
label_263f2c:
    // 0x263f2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x263f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x263f30: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x263f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x263f34: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x263f34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263f38: 0xc099780  jal         func_265E00
    ctx->pc = 0x263F38u;
    SET_GPR_U32(ctx, 31, 0x263F40u);
    ctx->pc = 0x263F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263F38u;
    // 0x263f3c: 0x24080400  addiu       $t0, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265E00u, 0x263F38u, 0x263F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263F40u;
label_263f40:
    // 0x263f40: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x263F40u;
    {
        const bool branch_taken_0x263f40 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x263F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263F40u;
        // 0x263f44: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263f40) {
            ctx->pc = 0x263F5Cu;
            goto label_263f5c;
        }
    }
    ctx->pc = 0x263F48u;
    // 0x263f48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x263f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263f4c: 0xc098560  jal         func_261580
    ctx->pc = 0x263F4Cu;
    SET_GPR_U32(ctx, 31, 0x263F54u);
    ctx->pc = 0x263F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263F4Cu;
    // 0x263f50: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x263F4Cu, 0x263F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263F54u;
label_263f54:
    // 0x263f54: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x263F54u;
    {
        const bool branch_taken_0x263f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263f54) {
            ctx->pc = 0x263FF0u;
            goto label_263ff0;
        }
    }
    ctx->pc = 0x263F5Cu;
label_263f5c:
    // 0x263f5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x263f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263f60: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x263f60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263f64: 0xc098bb8  jal         func_262EE0
    ctx->pc = 0x263F64u;
    SET_GPR_U32(ctx, 31, 0x263F6Cu);
    ctx->pc = 0x263F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263F64u;
    // 0x263f68: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262EE0u, 0x263F64u, 0x263F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263F6Cu;
label_263f6c:
    // 0x263f6c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x263f6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263f70: 0xc098560  jal         func_261580
    ctx->pc = 0x263F70u;
    SET_GPR_U32(ctx, 31, 0x263F78u);
    ctx->pc = 0x263F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263F70u;
    // 0x263f74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x263F70u, 0x263F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263F78u;
label_263f78:
    // 0x263f78: 0xc098560  jal         func_261580
    ctx->pc = 0x263F78u;
    SET_GPR_U32(ctx, 31, 0x263F80u);
    ctx->pc = 0x263F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263F78u;
    // 0x263f7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x263F78u, 0x263F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263F80u;
label_263f80:
    // 0x263f80: 0x5620000b  bnel        $s1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x263F80u;
    {
        const bool branch_taken_0x263f80 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x263f80) {
            ctx->pc = 0x263F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263F80u;
            // 0x263f84: 0xae350008  sw          $s5, 0x8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263FB0u;
            goto label_263fb0;
        }
    }
    ctx->pc = 0x263F88u;
    // 0x263f88: 0xc097308  jal         func_25CC20
    ctx->pc = 0x263F88u;
    SET_GPR_U32(ctx, 31, 0x263F90u);
    ctx->pc = 0x25CC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CC20u, 0x263F88u, 0x263F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263F90u;
label_263f90:
    // 0x263f90: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x263f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x263f94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x263f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x263f98: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x263F98u;
    {
        const bool branch_taken_0x263f98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x263F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263F98u;
        // 0x263f9c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263f98) {
            ctx->pc = 0x263FFCu;
            goto label_263ffc;
        }
    }
    ctx->pc = 0x263FA0u;
    // 0x263fa0: 0x14750016  bne         $v1, $s5, . + 4 + (0x16 << 2)
    ctx->pc = 0x263FA0u;
    {
        const bool branch_taken_0x263fa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        ctx->pc = 0x263FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263FA0u;
        // 0x263fa4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263fa0) {
            ctx->pc = 0x263FFCu;
            goto label_263ffc;
        }
    }
    ctx->pc = 0x263FA8u;
    // 0x263fa8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x263FA8u;
    {
        const bool branch_taken_0x263fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263FA8u;
        // 0x263fac: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263fa8) {
            ctx->pc = 0x263FFCu;
            goto label_263ffc;
        }
    }
    ctx->pc = 0x263FB0u;
label_263fb0:
    // 0x263fb0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x263fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263fb4: 0xae36000c  sw          $s6, 0xC($s1)
    ctx->pc = 0x263fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 22));
    // 0x263fb8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x263fb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263fbc: 0x8e84004c  lw          $a0, 0x4C($s4)
    ctx->pc = 0x263fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x263fc0: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x263FC0u;
    SET_GPR_U32(ctx, 31, 0x263FC8u);
    ctx->pc = 0x263FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263FC0u;
    // 0x263fc4: 0x24842130  addiu       $a0, $a0, 0x2130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x263FC0u, 0x263FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263FC8u;
label_263fc8:
    // 0x263fc8: 0x8e84004c  lw          $a0, 0x4C($s4)
    ctx->pc = 0x263fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x263fcc: 0x24822130  addiu       $v0, $a0, 0x2130
    ctx->pc = 0x263fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8496));
    // 0x263fd0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x263fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x263fd4: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x263fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x263fd8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x263fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x263fdc: 0xc097308  jal         func_25CC20
    ctx->pc = 0x263FDCu;
    SET_GPR_U32(ctx, 31, 0x263FE4u);
    ctx->pc = 0x263FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263FDCu;
    // 0x263fe0: 0xaef10000  sw          $s1, 0x0($s7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CC20u, 0x263FDCu, 0x263FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263FE4u;
label_263fe4:
    // 0x263fe4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x263fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x263fe8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x263FE8u;
    {
        const bool branch_taken_0x263fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263FE8u;
        // 0x263fec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263fe8) {
            ctx->pc = 0x263FFCu;
            goto label_263ffc;
        }
    }
    ctx->pc = 0x263FF0u;
label_263ff0:
    // 0x263ff0: 0xc098560  jal         func_261580
    ctx->pc = 0x263FF0u;
    SET_GPR_U32(ctx, 31, 0x263FF8u);
    ctx->pc = 0x263FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263FF0u;
    // 0x263ff4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x263FF0u, 0x263FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263FF8u;
label_263ff8:
    // 0x263ff8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x263ff8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_263ffc:
    // 0x263ffc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x263ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x264000: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x264000u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x264004: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x264004u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x264008: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x264008u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26400c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x26400cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x264010: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x264010u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x264014: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x264014u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x264018: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x264018u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26401c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26401cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264020: 0x3e00008  jr          $ra
    ctx->pc = 0x264020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264020u;
        // 0x264024: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264028u;
}
