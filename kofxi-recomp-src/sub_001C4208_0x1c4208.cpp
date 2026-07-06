#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C4208
// Address: 0x1c4208 - 0x1c42c0
void sub_001C4208_0x1c4208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4208_0x1c4208");
#endif

    switch (ctx->pc) {
        case 0x1c4220u: goto label_1c4220;
        case 0x1c4258u: goto label_1c4258;
        case 0x1c4274u: goto label_1c4274;
        case 0x1c4288u: goto label_1c4288;
        case 0x1c4294u: goto label_1c4294;
        default: break;
    }

    ctx->pc = 0x1c4208u;

    // 0x1c4208: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c4208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c420c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c420cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4210: 0x2444ebb0  addiu       $a0, $v0, -0x1450
    ctx->pc = 0x1c4210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962096));
    // 0x1c4214: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c4214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4218: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c4218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c421c: 0x0  nop
    ctx->pc = 0x1c421cu;
    // NOP
label_1c4220:
    // 0x1c4220: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1c4220u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c4224: 0x54470005  bnel        $v0, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C4224u;
    {
        const bool branch_taken_0x1c4224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x1c4224) {
            ctx->pc = 0x1C4228u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4224u;
            // 0x1c4228: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C423Cu;
            goto label_1c423c;
        }
    }
    ctx->pc = 0x1C422Cu;
    // 0x1c422c: 0x80830002  lb          $v1, 0x2($a0)
    ctx->pc = 0x1c422cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1c4230: 0x10660007  beq         $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C4230u;
    {
        const bool branch_taken_0x1c4230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x1C4234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4230u;
            // 0x1c4234: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4230) {
            ctx->pc = 0x1C4250u;
            goto label_1c4250;
        }
    }
    ctx->pc = 0x1C4238u;
    // 0x1c4238: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c4238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1c423c:
    // 0x1c423c: 0x28a2000d  slti        $v0, $a1, 0xD
    ctx->pc = 0x1c423cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x1c4240: 0x0  nop
    ctx->pc = 0x1c4240u;
    // NOP
    // 0x1c4244: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1C4244u;
    {
        const bool branch_taken_0x1c4244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4244u;
            // 0x1c4248: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4244) {
            ctx->pc = 0x1C4220u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c4220;
        }
    }
    ctx->pc = 0x1C424Cu;
    // 0x1c424c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c424cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4250:
    // 0x1c4250: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C4258u;
label_1c4258:
    // 0x1c4258: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c4258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c425c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c425cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c4260: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c4260u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4264: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c4264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c4268: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c4268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c426c: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C426Cu;
    SET_GPR_U32(ctx, 31, 0x1C4274u);
    ctx->pc = 0x1C4270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C426Cu;
            // 0x1c4270: 0x24044000  addiu       $a0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (runtime->hasFunction(0x1C1330u)) {
        auto targetFn = runtime->lookupFunction(0x1C1330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4274u; }
        if (ctx->pc != 0x1C4274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1330_0x1c1330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4274u; }
        if (ctx->pc != 0x1C4274u) { return; }
    }
    ctx->pc = 0x1C4274u;
label_1c4274:
    // 0x1c4274: 0x26110014  addiu       $s1, $s0, 0x14
    ctx->pc = 0x1c4274u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1c4278: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1c4278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1c427c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c427cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4280: 0xc070572  jal         func_1C15C8
    ctx->pc = 0x1C4280u;
    SET_GPR_U32(ctx, 31, 0x1C4288u);
    ctx->pc = 0x1C4284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4280u;
            // 0x1c4284: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C15C8u;
    if (runtime->hasFunction(0x1C15C8u)) {
        auto targetFn = runtime->lookupFunction(0x1C15C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4288u; }
        if (ctx->pc != 0x1C4288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C15C8_0x1c15c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4288u; }
        if (ctx->pc != 0x1C4288u) { return; }
    }
    ctx->pc = 0x1C4288u;
label_1c4288:
    // 0x1c4288: 0x24044001  addiu       $a0, $zero, 0x4001
    ctx->pc = 0x1c4288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16385));
    // 0x1c428c: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C428Cu;
    SET_GPR_U32(ctx, 31, 0x1C4294u);
    ctx->pc = 0x1C4290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C428Cu;
            // 0x1c4290: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (runtime->hasFunction(0x1C1330u)) {
        auto targetFn = runtime->lookupFunction(0x1C1330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4294u; }
        if (ctx->pc != 0x1C4294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1330_0x1c1330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4294u; }
        if (ctx->pc != 0x1C4294u) { return; }
    }
    ctx->pc = 0x1C4294u;
label_1c4294:
    // 0x1c4294: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4294u;
    {
        const bool branch_taken_0x1c4294 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1C4298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4294u;
            // 0x1c4298: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4294) {
            ctx->pc = 0x1C42A8u;
            goto label_1c42a8;
        }
    }
    ctx->pc = 0x1C429Cu;
    // 0x1c429c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1c429cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c42a0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1c42a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1c42a4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1c42a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1c42a8:
    // 0x1c42a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c42a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c42ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c42acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c42b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c42b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c42b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C42B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C42B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C42B4u;
            // 0x1c42b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C42BCu;
    // 0x1c42bc: 0x0  nop
    ctx->pc = 0x1c42bcu;
    // NOP
    ctx->pc = 0x1c42c0u;
}
