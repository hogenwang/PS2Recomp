#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020DE20
// Address: 0x20de20 - 0x20dee0
void sub_0020DE20_0x20de20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020DE20_0x20de20");
#endif

    switch (ctx->pc) {
        case 0x20de50u: goto label_20de50;
        case 0x20de78u: goto label_20de78;
        case 0x20de9cu: goto label_20de9c;
        default: break;
    }

    ctx->pc = 0x20de20u;

    // 0x20de20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x20de20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20de24: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x20de24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x20de28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20de28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x20de2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20de2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20de30: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x20de30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20de34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20de34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20de38: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x20de38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20de3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20de3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20de40: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x20de40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20de44: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x20de44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20de48: 0xc0828d8  jal         func_20A360
    ctx->pc = 0x20DE48u;
    SET_GPR_U32(ctx, 31, 0x20DE50u);
    ctx->pc = 0x20DE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20DE48u;
            // 0x20de4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A360u;
    if (runtime->hasFunction(0x20A360u)) {
        auto targetFn = runtime->lookupFunction(0x20A360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DE50u; }
        if (ctx->pc != 0x20DE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020A360_0x20a360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DE50u; }
        if (ctx->pc != 0x20DE50u) { return; }
    }
    ctx->pc = 0x20DE50u;
label_20de50:
    // 0x20de50: 0x2629823  subu        $s3, $s3, $v0
    ctx->pc = 0x20de50u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x20de54: 0x6630003  bgezl       $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x20DE54u;
    {
        const bool branch_taken_0x20de54 = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x20de54) {
            ctx->pc = 0x20DE58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20DE54u;
            // 0x20de58: 0x131900  sll         $v1, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20DE64u;
            goto label_20de64;
        }
    }
    ctx->pc = 0x20DE5Cu;
    // 0x20de5c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x20de5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20de60: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x20de60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_20de64:
    // 0x20de64: 0x96090000  lhu         $t1, 0x0($s0)
    ctx->pc = 0x20de64u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20de68: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x20de68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x20de6c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20de6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20de70: 0x11230011  beq         $t1, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x20DE70u;
    {
        const bool branch_taken_0x20de70 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x20de70) {
            ctx->pc = 0x20DEB8u;
            goto label_20deb8;
        }
    }
    ctx->pc = 0x20DE78u;
label_20de78:
    // 0x20de78: 0x3403fffe  ori         $v1, $zero, 0xFFFE
    ctx->pc = 0x20de78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    // 0x20de7c: 0x11230008  beq         $t1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x20DE7Cu;
    {
        const bool branch_taken_0x20de7c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x20de7c) {
            ctx->pc = 0x20DEA0u;
            goto label_20dea0;
        }
    }
    ctx->pc = 0x20DE84u;
    // 0x20de84: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x20de84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x20de88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20de88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20de8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20de8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20de90: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x20de90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20de94: 0xc08373c  jal         func_20DCF0
    ctx->pc = 0x20DE94u;
    SET_GPR_U32(ctx, 31, 0x20DE9Cu);
    ctx->pc = 0x20DE98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20DE94u;
            // 0x20de98: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20DCF0u;
    if (runtime->hasFunction(0x20DCF0u)) {
        auto targetFn = runtime->lookupFunction(0x20DCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DE9Cu; }
        if (ctx->pc != 0x20DE9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020DCF0_0x20dcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DE9Cu; }
        if (ctx->pc != 0x20DE9Cu) { return; }
    }
    ctx->pc = 0x20DE9Cu;
label_20de9c:
    // 0x20de9c: 0x0  nop
    ctx->pc = 0x20de9cu;
    // NOP
label_20dea0:
    // 0x20dea0: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x20dea0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x20dea4: 0x96090000  lhu         $t1, 0x0($s0)
    ctx->pc = 0x20dea4u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20dea8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20dea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20deac: 0x1523fff2  bne         $t1, $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x20DEACu;
    {
        const bool branch_taken_0x20deac = (GPR_U64(ctx, 9) != GPR_U64(ctx, 3));
        ctx->pc = 0x20DEB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DEACu;
            // 0x20deb0: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20deac) {
            ctx->pc = 0x20DE78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20de78;
        }
    }
    ctx->pc = 0x20DEB4u;
    // 0x20deb4: 0x0  nop
    ctx->pc = 0x20deb4u;
    // NOP
label_20deb8:
    // 0x20deb8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x20deb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20debc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20debcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20dec0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20dec0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20dec4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20dec4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20dec8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20dec8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20decc: 0x3e00008  jr          $ra
    ctx->pc = 0x20DECCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DECCu;
            // 0x20ded0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20DED4u;
    // 0x20ded4: 0x0  nop
    ctx->pc = 0x20ded4u;
    // NOP
    // 0x20ded8: 0x0  nop
    ctx->pc = 0x20ded8u;
    // NOP
    // 0x20dedc: 0x0  nop
    ctx->pc = 0x20dedcu;
    // NOP
    ctx->pc = 0x20dee0u;
}
