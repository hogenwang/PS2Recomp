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

// Function: sub_00204890
// Address: 0x204890 - 0x2049c0
void sub_00204890_0x204890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204890_0x204890");
#endif

    switch (ctx->pc) {
        case 0x2048c0u: goto label_2048c0;
        case 0x204934u: goto label_204934;
        case 0x204978u: goto label_204978;
        case 0x20499cu: goto label_20499c;
        case 0x2049a4u: goto label_2049a4;
        default: break;
    }

    ctx->pc = 0x204890u;

    // 0x204890: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x204890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x204894: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x204894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x204898: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x204898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x20489c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20489cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2048a0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2048a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2048a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2048a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2048a8: 0x3c12003a  lui         $s2, 0x3A
    ctx->pc = 0x2048a8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
    // 0x2048ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2048acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2048b0: 0x2652a1cc  addiu       $s2, $s2, -0x5E34
    ctx->pc = 0x2048b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294943180));
    // 0x2048b4: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x2048b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x2048b8: 0x24110028  addiu       $s1, $zero, 0x28
    ctx->pc = 0x2048b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2048bc: 0x26109820  addiu       $s0, $s0, -0x67E0
    ctx->pc = 0x2048bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294940704));
label_2048c0:
    // 0x2048c0: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x2048c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x2048c4: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2048c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2048c8: 0x8c459bf8  lw          $a1, -0x6408($v0)
    ctx->pc = 0x2048c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x2048cc: 0x248498a0  addiu       $a0, $a0, -0x6760
    ctx->pc = 0x2048ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940832));
    // 0x2048d0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2048d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2048d4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x2048d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x2048d8: 0x8c43b7c8  lw          $v1, -0x4838($v0)
    ctx->pc = 0x2048d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948808)));
    // 0x2048dc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2048dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2048e0: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x2048e0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2048e4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2048e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2048e8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2048e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2048ec: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x2048ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x2048f0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2048f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2048f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2048f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2048f8: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2048f8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2048fc: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2048FCu;
    {
        const bool branch_taken_0x2048fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2048fc) {
            ctx->pc = 0x204938u;
            goto label_204938;
        }
    }
    ctx->pc = 0x204904u;
    // 0x204904: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x204904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204908: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x204908u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x20490c: 0xa7a20050  sh          $v0, 0x50($sp)
    ctx->pc = 0x20490cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 80), (uint16_t)GPR_U32(ctx, 2));
    // 0x204910: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x204910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x204914: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x204914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x204918: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x204918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20491c: 0xa7a20056  sh          $v0, 0x56($sp)
    ctx->pc = 0x20491cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 86), (uint16_t)GPR_U32(ctx, 2));
    // 0x204920: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x204920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x204924: 0xa7a00052  sh          $zero, 0x52($sp)
    ctx->pc = 0x204924u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 82), (uint16_t)GPR_U32(ctx, 0));
    // 0x204928: 0xa7a20058  sh          $v0, 0x58($sp)
    ctx->pc = 0x204928u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 88), (uint16_t)GPR_U32(ctx, 2));
    // 0x20492c: 0xc081120  jal         func_204480
    ctx->pc = 0x20492Cu;
    SET_GPR_U32(ctx, 31, 0x204934u);
    ctx->pc = 0x204930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20492Cu;
    // 0x204930: 0xa7b10054  sh          $s1, 0x54($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 84), (uint16_t)GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204480u, 0x20492Cu, 0x204934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204934u;
label_204934:
    // 0x204934: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x204934u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_204938:
    // 0x204938: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x204938u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x20493c: 0x2a620010  slti        $v0, $s3, 0x10
    ctx->pc = 0x20493cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x204940: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x204940u;
    {
        const bool branch_taken_0x204940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204940u;
        // 0x204944: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204940) {
            ctx->pc = 0x2048C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2048c0;
        }
    }
    ctx->pc = 0x204948u;
    // 0x204948: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x204948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x20494c: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x20494cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x204950: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x204950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x204954: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x204954u;
    {
        const bool branch_taken_0x204954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x204954) {
            ctx->pc = 0x20499Cu;
            goto label_20499c;
        }
    }
    ctx->pc = 0x20495Cu;
    // 0x20495c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x20495cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x204960: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x204960u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x204964: 0x2442a1d0  addiu       $v0, $v0, -0x5E30
    ctx->pc = 0x204964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943184));
    // 0x204968: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x204968u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20496c: 0x94450002  lhu         $a1, 0x2($v0)
    ctx->pc = 0x20496cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x204970: 0xc081120  jal         func_204480
    ctx->pc = 0x204970u;
    SET_GPR_U32(ctx, 31, 0x204978u);
    ctx->pc = 0x204974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204970u;
    // 0x204974: 0x24c6a058  addiu       $a2, $a2, -0x5FA8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204480u, 0x204970u, 0x204978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204978u;
label_204978:
    // 0x204978: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x204978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x20497c: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x20497cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x204980: 0x2442a1d0  addiu       $v0, $v0, -0x5E30
    ctx->pc = 0x204980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943184));
    // 0x204984: 0x24c6a100  addiu       $a2, $a2, -0x5F00
    ctx->pc = 0x204984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942976));
    // 0x204988: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x204988u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20498c: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x20498cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x204990: 0x2464ffe0  addiu       $a0, $v1, -0x20
    ctx->pc = 0x204990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x204994: 0xc081120  jal         func_204480
    ctx->pc = 0x204994u;
    SET_GPR_U32(ctx, 31, 0x20499Cu);
    ctx->pc = 0x204998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204994u;
    // 0x204998: 0x2445fff0  addiu       $a1, $v0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204480u, 0x204994u, 0x20499Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20499Cu;
label_20499c:
    // 0x20499c: 0xc081144  jal         func_204510
    ctx->pc = 0x20499Cu;
    SET_GPR_U32(ctx, 31, 0x2049A4u);
    ctx->pc = 0x204510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204510u, 0x20499Cu, 0x2049A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2049A4u;
label_2049a4:
    // 0x2049a4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2049a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2049a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2049a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2049ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2049acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2049b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2049b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2049b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2049b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2049b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2049B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2049BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2049B8u;
        // 0x2049bc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2049B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2049C0u;
}
