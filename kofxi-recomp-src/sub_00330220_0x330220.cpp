#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00330220
// Address: 0x330220 - 0x3302f0
void sub_00330220_0x330220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00330220_0x330220");
#endif

    switch (ctx->pc) {
        case 0x330268u: goto label_330268;
        case 0x3302ccu: goto label_3302cc;
        case 0x3302dcu: goto label_3302dc;
        default: break;
    }

    ctx->pc = 0x330220u;

    // 0x330220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x330220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x330224: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x330224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x330228: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x330228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33022c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33022cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x330230: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x330230u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330234: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x330234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x330238: 0x80860001  lb          $a2, 0x1($a0)
    ctx->pc = 0x330238u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x33023c: 0x10c30021  beq         $a2, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x33023Cu;
    {
        const bool branch_taken_0x33023c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x33023c) {
            ctx->pc = 0x3302C4u;
            goto label_3302c4;
        }
    }
    ctx->pc = 0x330244u;
    // 0x330244: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x330244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x330248: 0x10c30009  beq         $a2, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x330248u;
    {
        const bool branch_taken_0x330248 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x330248) {
            ctx->pc = 0x330270u;
            goto label_330270;
        }
    }
    ctx->pc = 0x330250u;
    // 0x330250: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x330250u;
    {
        const bool branch_taken_0x330250 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x330250) {
            ctx->pc = 0x330260u;
            goto label_330260;
        }
    }
    ctx->pc = 0x330258u;
    // 0x330258: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x330258u;
    {
        const bool branch_taken_0x330258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33025Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x330258u;
            // 0x33025c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330258) {
            ctx->pc = 0x3302E0u;
            goto label_3302e0;
        }
    }
    ctx->pc = 0x330260u;
label_330260:
    // 0x330260: 0xc0cc02c  jal         func_3300B0
    ctx->pc = 0x330260u;
    SET_GPR_U32(ctx, 31, 0x330268u);
    ctx->pc = 0x3300B0u;
    if (runtime->hasFunction(0x3300B0u)) {
        auto targetFn = runtime->lookupFunction(0x3300B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x330268u; }
        if (ctx->pc != 0x330268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003300B0_0x3300b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x330268u; }
        if (ctx->pc != 0x330268u) { return; }
    }
    ctx->pc = 0x330268u;
label_330268:
    // 0x330268: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x330268u;
    {
        const bool branch_taken_0x330268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330268) {
            ctx->pc = 0x3302DCu;
            goto label_3302dc;
        }
    }
    ctx->pc = 0x330270u;
label_330270:
    // 0x330270: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x330270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x330274: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x330274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x330278: 0x90639780  lbu         $v1, -0x6880($v1)
    ctx->pc = 0x330278u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x33027c: 0x14650009  bne         $v1, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x33027Cu;
    {
        const bool branch_taken_0x33027c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x33027c) {
            ctx->pc = 0x3302A4u;
            goto label_3302a4;
        }
    }
    ctx->pc = 0x330284u;
    // 0x330284: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x330284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x330288: 0x9063e818  lbu         $v1, -0x17E8($v1)
    ctx->pc = 0x330288u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961176)));
    // 0x33028c: 0x28630009  slti        $v1, $v1, 0x9
    ctx->pc = 0x33028cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x330290: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x330290u;
    {
        const bool branch_taken_0x330290 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x330290) {
            ctx->pc = 0x3302DCu;
            goto label_3302dc;
        }
    }
    ctx->pc = 0x330298u;
    // 0x330298: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x330298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x33029c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x33029Cu;
    {
        const bool branch_taken_0x33029c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3302A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33029Cu;
            // 0x3302a0: 0xa0830001  sb          $v1, 0x1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33029c) {
            ctx->pc = 0x3302DCu;
            goto label_3302dc;
        }
    }
    ctx->pc = 0x3302A4u;
label_3302a4:
    // 0x3302a4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3302a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3302a8: 0x9063e818  lbu         $v1, -0x17E8($v1)
    ctx->pc = 0x3302a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961176)));
    // 0x3302ac: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x3302acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3302b0: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3302B0u;
    {
        const bool branch_taken_0x3302b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3302b0) {
            ctx->pc = 0x3302DCu;
            goto label_3302dc;
        }
    }
    ctx->pc = 0x3302B8u;
    // 0x3302b8: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x3302b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3302bc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3302BCu;
    {
        const bool branch_taken_0x3302bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3302C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3302BCu;
            // 0x3302c0: 0xa0830001  sb          $v1, 0x1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3302bc) {
            ctx->pc = 0x3302DCu;
            goto label_3302dc;
        }
    }
    ctx->pc = 0x3302C4u;
label_3302c4:
    // 0x3302c4: 0xc0cc060  jal         func_330180
    ctx->pc = 0x3302C4u;
    SET_GPR_U32(ctx, 31, 0x3302CCu);
    ctx->pc = 0x330180u;
    if (runtime->hasFunction(0x330180u)) {
        auto targetFn = runtime->lookupFunction(0x330180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3302CCu; }
        if (ctx->pc != 0x3302CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00330180_0x330180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3302CCu; }
        if (ctx->pc != 0x3302CCu) { return; }
    }
    ctx->pc = 0x3302CCu;
label_3302cc:
    // 0x3302cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3302CCu;
    {
        const bool branch_taken_0x3302cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3302cc) {
            ctx->pc = 0x3302DCu;
            goto label_3302dc;
        }
    }
    ctx->pc = 0x3302D4u;
    // 0x3302d4: 0xc055728  jal         func_155CA0
    ctx->pc = 0x3302D4u;
    SET_GPR_U32(ctx, 31, 0x3302DCu);
    ctx->pc = 0x3302D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3302D4u;
            // 0x3302d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (runtime->hasFunction(0x155CA0u)) {
        auto targetFn = runtime->lookupFunction(0x155CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3302DCu; }
        if (ctx->pc != 0x3302DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155CA0_0x155ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3302DCu; }
        if (ctx->pc != 0x3302DCu) { return; }
    }
    ctx->pc = 0x3302DCu;
label_3302dc:
    // 0x3302dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3302dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3302e0:
    // 0x3302e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3302e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3302e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3302E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3302E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3302E4u;
            // 0x3302e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3302ECu;
    // 0x3302ec: 0x0  nop
    ctx->pc = 0x3302ecu;
    // NOP
    ctx->pc = 0x3302f0u;
}
