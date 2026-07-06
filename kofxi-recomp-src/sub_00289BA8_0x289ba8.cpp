#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00289BA8
// Address: 0x289ba8 - 0x28a120
void sub_00289BA8_0x289ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289BA8_0x289ba8");
#endif

    switch (ctx->pc) {
        case 0x289c3cu: goto label_289c3c;
        case 0x289c48u: goto label_289c48;
        case 0x289c64u: goto label_289c64;
        case 0x289c94u: goto label_289c94;
        case 0x289cacu: goto label_289cac;
        case 0x289cc4u: goto label_289cc4;
        case 0x289cd0u: goto label_289cd0;
        case 0x289ce4u: goto label_289ce4;
        case 0x289cf4u: goto label_289cf4;
        case 0x289d00u: goto label_289d00;
        case 0x289d18u: goto label_289d18;
        case 0x289d28u: goto label_289d28;
        case 0x289d40u: goto label_289d40;
        case 0x289d6cu: goto label_289d6c;
        case 0x289d88u: goto label_289d88;
        case 0x289da4u: goto label_289da4;
        case 0x289dd0u: goto label_289dd0;
        case 0x289de8u: goto label_289de8;
        case 0x289df0u: goto label_289df0;
        case 0x289e08u: goto label_289e08;
        case 0x289e24u: goto label_289e24;
        case 0x289e40u: goto label_289e40;
        case 0x289e48u: goto label_289e48;
        case 0x289e60u: goto label_289e60;
        case 0x289ec0u: goto label_289ec0;
        case 0x289ee8u: goto label_289ee8;
        case 0x289ef8u: goto label_289ef8;
        case 0x289efcu: goto label_289efc;
        case 0x289f08u: goto label_289f08;
        case 0x289f1cu: goto label_289f1c;
        case 0x289f30u: goto label_289f30;
        case 0x289f60u: goto label_289f60;
        case 0x289f74u: goto label_289f74;
        case 0x289fc4u: goto label_289fc4;
        case 0x289fdcu: goto label_289fdc;
        case 0x289fe4u: goto label_289fe4;
        case 0x289ff4u: goto label_289ff4;
        case 0x28a024u: goto label_28a024;
        case 0x28a04cu: goto label_28a04c;
        case 0x28a070u: goto label_28a070;
        case 0x28a098u: goto label_28a098;
        case 0x28a0a8u: goto label_28a0a8;
        case 0x28a0bcu: goto label_28a0bc;
        default: break;
    }

    ctx->pc = 0x289ba8u;

    // 0x289ba8: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x289ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
    // 0x289bac: 0xffb601e0  sd          $s6, 0x1E0($sp)
    ctx->pc = 0x289bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 22));
    // 0x289bb0: 0xffb301b0  sd          $s3, 0x1B0($sp)
    ctx->pc = 0x289bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 19));
    // 0x289bb4: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x289bb4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289bb8: 0xffb201a0  sd          $s2, 0x1A0($sp)
    ctx->pc = 0x289bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 18));
    // 0x289bbc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x289bbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289bc0: 0xffb10190  sd          $s1, 0x190($sp)
    ctx->pc = 0x289bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 17));
    // 0x289bc4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x289bc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289bc8: 0xffbf0210  sd          $ra, 0x210($sp)
    ctx->pc = 0x289bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 31));
    // 0x289bcc: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x289bccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289bd0: 0xffbe0200  sd          $fp, 0x200($sp)
    ctx->pc = 0x289bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 30));
    // 0x289bd4: 0xffb701f0  sd          $s7, 0x1F0($sp)
    ctx->pc = 0x289bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 23));
    // 0x289bd8: 0xffb501d0  sd          $s5, 0x1D0($sp)
    ctx->pc = 0x289bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 21));
    // 0x289bdc: 0xffb401c0  sd          $s4, 0x1C0($sp)
    ctx->pc = 0x289bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 20));
    // 0x289be0: 0xffb00180  sd          $s0, 0x180($sp)
    ctx->pc = 0x289be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 16));
    // 0x289be4: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x289be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
    // 0x289be8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x289be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x289bec: 0xafa60144  sw          $a2, 0x144($sp)
    ctx->pc = 0x289becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 6));
    // 0x289bf0: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x289bf0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x289bf4: 0xafa80148  sw          $t0, 0x148($sp)
    ctx->pc = 0x289bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 8));
    // 0x289bf8: 0xafab014c  sw          $t3, 0x14C($sp)
    ctx->pc = 0x289bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 11));
    // 0x289bfc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x289bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x289c00: 0xafa00154  sw          $zero, 0x154($sp)
    ctx->pc = 0x289c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 0));
    // 0x289c04: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x289C04u;
    {
        const bool branch_taken_0x289c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289C04u;
            // 0x289c08: 0xafa00158  sw          $zero, 0x158($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289c04) {
            ctx->pc = 0x289C14u;
            goto label_289c14;
        }
    }
    ctx->pc = 0x289C0Cu;
    // 0x289c0c: 0x10000138  b           . + 4 + (0x138 << 2)
    ctx->pc = 0x289C0Cu;
    {
        const bool branch_taken_0x289c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289C0Cu;
            // 0x289c10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289c0c) {
            ctx->pc = 0x28A0F0u;
            goto label_28a0f0;
        }
    }
    ctx->pc = 0x289C14u;
label_289c14:
    // 0x289c14: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x289c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x289c18: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x289c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x289c1c: 0x8fa40144  lw          $a0, 0x144($sp)
    ctx->pc = 0x289c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x289c20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x289c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x289c24: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x289c24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x289c28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x289c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x289c2c: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x289c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x289c30: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x289c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x289c34: 0xc0a1a02  jal         func_286808
    ctx->pc = 0x289C34u;
    SET_GPR_U32(ctx, 31, 0x289C3Cu);
    ctx->pc = 0x289C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289C34u;
            // 0x289c38: 0x2c3b821  addu        $s7, $s6, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286808u;
    if (runtime->hasFunction(0x286808u)) {
        auto targetFn = runtime->lookupFunction(0x286808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289C3Cu; }
        if (ctx->pc != 0x289C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286808_0x286808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289C3Cu; }
        if (ctx->pc != 0x289C3Cu) { return; }
    }
    ctx->pc = 0x289C3Cu;
label_289c3c:
    // 0x289c3c: 0x8fa40148  lw          $a0, 0x148($sp)
    ctx->pc = 0x289c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x289c40: 0xc0a1a02  jal         func_286808
    ctx->pc = 0x289C40u;
    SET_GPR_U32(ctx, 31, 0x289C48u);
    ctx->pc = 0x289C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289C40u;
            // 0x289c44: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286808u;
    if (runtime->hasFunction(0x286808u)) {
        auto targetFn = runtime->lookupFunction(0x286808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289C48u; }
        if (ctx->pc != 0x289C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286808_0x286808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289C48u; }
        if (ctx->pc != 0x289C48u) { return; }
    }
    ctx->pc = 0x289C48u;
label_289c48:
    // 0x289c48: 0x56000008  bnel        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x289C48u;
    {
        const bool branch_taken_0x289c48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x289c48) {
            ctx->pc = 0x289C4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x289C48u;
            // 0x289c4c: 0xafa20150  sw          $v0, 0x150($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x289C6Cu;
            goto label_289c6c;
        }
    }
    ctx->pc = 0x289C50u;
    // 0x289c50: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x289C50u;
    {
        const bool branch_taken_0x289c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x289c50) {
            ctx->pc = 0x289C54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x289C50u;
            // 0x289c54: 0xafa20150  sw          $v0, 0x150($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x289C6Cu;
            goto label_289c6c;
        }
    }
    ctx->pc = 0x289C58u;
    // 0x289c58: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x289c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289c5c: 0xc0a1b6a  jal         func_286DA8
    ctx->pc = 0x289C5Cu;
    SET_GPR_U32(ctx, 31, 0x289C64u);
    ctx->pc = 0x289C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289C5Cu;
            // 0x289c60: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286DA8u;
    if (runtime->hasFunction(0x286DA8u)) {
        auto targetFn = runtime->lookupFunction(0x286DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289C64u; }
        if (ctx->pc != 0x289C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286DA8_0x286da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289C64u; }
        if (ctx->pc != 0x289C64u) { return; }
    }
    ctx->pc = 0x289C64u;
label_289c64:
    // 0x289c64: 0x10000122  b           . + 4 + (0x122 << 2)
    ctx->pc = 0x289C64u;
    {
        const bool branch_taken_0x289c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289C64u;
            // 0x289c68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289c64) {
            ctx->pc = 0x28A0F0u;
            goto label_28a0f0;
        }
    }
    ctx->pc = 0x289C6Cu;
label_289c6c:
    // 0x289c6c: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x289c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x289c70: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x289c70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x289c74: 0x202180b  movn        $v1, $s0, $v0
    ctx->pc = 0x289c74u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
    // 0x289c78: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x289c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x289c7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x289C7Cu;
    {
        const bool branch_taken_0x289c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289C7Cu;
            // 0x289c80: 0xafa30150  sw          $v1, 0x150($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289c7c) {
            ctx->pc = 0x289C8Cu;
            goto label_289c8c;
        }
    }
    ctx->pc = 0x289C84u;
    // 0x289c84: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x289C84u;
    {
        const bool branch_taken_0x289c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289C84u;
            // 0x289c88: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289c84) {
            ctx->pc = 0x289CB4u;
            goto label_289cb4;
        }
    }
    ctx->pc = 0x289C8Cu;
label_289c8c:
    // 0x289c8c: 0xc0a1ee8  jal         func_287BA0
    ctx->pc = 0x289C8Cu;
    SET_GPR_U32(ctx, 31, 0x289C94u);
    ctx->pc = 0x287BA0u;
    if (runtime->hasFunction(0x287BA0u)) {
        auto targetFn = runtime->lookupFunction(0x287BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289C94u; }
        if (ctx->pc != 0x289C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287BA0_0x287ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289C94u; }
        if (ctx->pc != 0x289C94u) { return; }
    }
    ctx->pc = 0x289C94u;
label_289c94:
    // 0x289c94: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x289c94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289c98: 0x12a000ee  beqz        $s5, . + 4 + (0xEE << 2)
    ctx->pc = 0x289C98u;
    {
        const bool branch_taken_0x289c98 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x289C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289C98u;
            // 0x289c9c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289c98) {
            ctx->pc = 0x28A054u;
            goto label_28a054;
        }
    }
    ctx->pc = 0x289CA0u;
    // 0x289ca0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x289ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289ca4: 0xc0a2c82  jal         func_28B208
    ctx->pc = 0x289CA4u;
    SET_GPR_U32(ctx, 31, 0x289CACu);
    ctx->pc = 0x289CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289CA4u;
            // 0x289ca8: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B208u;
    if (runtime->hasFunction(0x28B208u)) {
        auto targetFn = runtime->lookupFunction(0x28B208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289CACu; }
        if (ctx->pc != 0x289CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028B208_0x28b208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289CACu; }
        if (ctx->pc != 0x289CACu) { return; }
    }
    ctx->pc = 0x289CACu;
label_289cac:
    // 0x289cac: 0x104000ea  beqz        $v0, . + 4 + (0xEA << 2)
    ctx->pc = 0x289CACu;
    {
        const bool branch_taken_0x289cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289CACu;
            // 0x289cb0: 0x8fa3014c  lw          $v1, 0x14C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289cac) {
            ctx->pc = 0x28A058u;
            goto label_28a058;
        }
    }
    ctx->pc = 0x289CB4u;
label_289cb4:
    // 0x289cb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x289cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x289cb8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x289cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289cbc: 0xc0a1a88  jal         func_286A20
    ctx->pc = 0x289CBCu;
    SET_GPR_U32(ctx, 31, 0x289CC4u);
    ctx->pc = 0x289CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289CBCu;
            // 0x289cc0: 0xafa30158  sw          $v1, 0x158($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286A20u;
    if (runtime->hasFunction(0x286A20u)) {
        auto targetFn = runtime->lookupFunction(0x286A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289CC4u; }
        if (ctx->pc != 0x289CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286A20_0x286a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289CC4u; }
        if (ctx->pc != 0x289CC4u) { return; }
    }
    ctx->pc = 0x289CC4u;
label_289cc4:
    // 0x289cc4: 0x27b40064  addiu       $s4, $sp, 0x64
    ctx->pc = 0x289cc4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x289cc8: 0xc0a1a88  jal         func_286A20
    ctx->pc = 0x289CC8u;
    SET_GPR_U32(ctx, 31, 0x289CD0u);
    ctx->pc = 0x289CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289CC8u;
            // 0x289ccc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286A20u;
    if (runtime->hasFunction(0x286A20u)) {
        auto targetFn = runtime->lookupFunction(0x286A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289CD0u; }
        if (ctx->pc != 0x289CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286A20_0x286a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289CD0u; }
        if (ctx->pc != 0x289CD0u) { return; }
    }
    ctx->pc = 0x289CD0u;
label_289cd0:
    // 0x289cd0: 0x27a20014  addiu       $v0, $sp, 0x14
    ctx->pc = 0x289cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x289cd4: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x289cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
    // 0x289cd8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x289cd8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289cdc: 0xc0a1a88  jal         func_286A20
    ctx->pc = 0x289CDCu;
    SET_GPR_U32(ctx, 31, 0x289CE4u);
    ctx->pc = 0x289CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289CDCu;
            // 0x289ce0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286A20u;
    if (runtime->hasFunction(0x286A20u)) {
        auto targetFn = runtime->lookupFunction(0x286A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289CE4u; }
        if (ctx->pc != 0x289CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286A20_0x286a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289CE4u; }
        if (ctx->pc != 0x289CE4u) { return; }
    }
    ctx->pc = 0x289CE4u;
label_289ce4:
    // 0x289ce4: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x289ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x289ce8: 0xafa30168  sw          $v1, 0x168($sp)
    ctx->pc = 0x289ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 3));
    // 0x289cec: 0xc0a1a88  jal         func_286A20
    ctx->pc = 0x289CECu;
    SET_GPR_U32(ctx, 31, 0x289CF4u);
    ctx->pc = 0x289CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289CECu;
            // 0x289cf0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286A20u;
    if (runtime->hasFunction(0x286A20u)) {
        auto targetFn = runtime->lookupFunction(0x286A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289CF4u; }
        if (ctx->pc != 0x289CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286A20_0x286a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289CF4u; }
        if (ctx->pc != 0x289CF4u) { return; }
    }
    ctx->pc = 0x289CF4u;
label_289cf4:
    // 0x289cf4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x289cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289cf8: 0xc0a1c04  jal         func_287010
    ctx->pc = 0x289CF8u;
    SET_GPR_U32(ctx, 31, 0x289D00u);
    ctx->pc = 0x289CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289CF8u;
            // 0x289cfc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287010u;
    if (runtime->hasFunction(0x287010u)) {
        auto targetFn = runtime->lookupFunction(0x287010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289D00u; }
        if (ctx->pc != 0x289D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287010_0x287010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289D00u; }
        if (ctx->pc != 0x289D00u) { return; }
    }
    ctx->pc = 0x289D00u;
label_289d00:
    // 0x289d00: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x289D00u;
    {
        const bool branch_taken_0x289d00 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x289D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289D00u;
            // 0x289d04: 0x8fa40168  lw          $a0, 0x168($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289d00) {
            ctx->pc = 0x289D1Cu;
            goto label_289d1c;
        }
    }
    ctx->pc = 0x289D08u;
    // 0x289d08: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x289d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289d0c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x289d0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289d10: 0xc0a18ea  jal         func_2863A8
    ctx->pc = 0x289D10u;
    SET_GPR_U32(ctx, 31, 0x289D18u);
    ctx->pc = 0x289D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289D10u;
            // 0x289d14: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2863A8u;
    if (runtime->hasFunction(0x2863A8u)) {
        auto targetFn = runtime->lookupFunction(0x2863A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289D18u; }
        if (ctx->pc != 0x289D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002863A8_0x2863a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289D18u; }
        if (ctx->pc != 0x289D18u) { return; }
    }
    ctx->pc = 0x289D18u;
label_289d18:
    // 0x289d18: 0x8fb20168  lw          $s2, 0x168($sp)
    ctx->pc = 0x289d18u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_289d1c:
    // 0x289d1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x289d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289d20: 0xc0a1c04  jal         func_287010
    ctx->pc = 0x289D20u;
    SET_GPR_U32(ctx, 31, 0x289D28u);
    ctx->pc = 0x289D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289D20u;
            // 0x289d24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287010u;
    if (runtime->hasFunction(0x287010u)) {
        auto targetFn = runtime->lookupFunction(0x287010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289D28u; }
        if (ctx->pc != 0x289D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287010_0x287010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289D28u; }
        if (ctx->pc != 0x289D28u) { return; }
    }
    ctx->pc = 0x289D28u;
label_289d28:
    // 0x289d28: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x289D28u;
    {
        const bool branch_taken_0x289d28 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x289D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289D28u;
            // 0x289d2c: 0x8fa40160  lw          $a0, 0x160($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289d28) {
            ctx->pc = 0x289D48u;
            goto label_289d48;
        }
    }
    ctx->pc = 0x289D30u;
    // 0x289d30: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x289d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289d34: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x289d34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289d38: 0xc0a18ea  jal         func_2863A8
    ctx->pc = 0x289D38u;
    SET_GPR_U32(ctx, 31, 0x289D40u);
    ctx->pc = 0x289D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289D38u;
            // 0x289d3c: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2863A8u;
    if (runtime->hasFunction(0x2863A8u)) {
        auto targetFn = runtime->lookupFunction(0x2863A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289D40u; }
        if (ctx->pc != 0x289D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002863A8_0x2863a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289D40u; }
        if (ctx->pc != 0x289D40u) { return; }
    }
    ctx->pc = 0x289D40u;
label_289d40:
    // 0x289d40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x289D40u;
    {
        const bool branch_taken_0x289d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289D40u;
            // 0x289d44: 0x8fb00160  lw          $s0, 0x160($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289d40) {
            ctx->pc = 0x289D4Cu;
            goto label_289d4c;
        }
    }
    ctx->pc = 0x289D48u;
label_289d48:
    // 0x289d48: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x289d48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_289d4c:
    // 0x289d4c: 0x26a2000c  addiu       $v0, $s5, 0xC
    ctx->pc = 0x289d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
    // 0x289d50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x289d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289d54: 0xafa20164  sw          $v0, 0x164($sp)
    ctx->pc = 0x289d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
    // 0x289d58: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x289d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x289d5c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x289d5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289d60: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x289d60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289d64: 0xc0a1dda  jal         func_287768
    ctx->pc = 0x289D64u;
    SET_GPR_U32(ctx, 31, 0x289D6Cu);
    ctx->pc = 0x289D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289D64u;
            // 0x289d68: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287768u;
    if (runtime->hasFunction(0x287768u)) {
        auto targetFn = runtime->lookupFunction(0x287768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289D6Cu; }
        if (ctx->pc != 0x289D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287768_0x287768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289D6Cu; }
        if (ctx->pc != 0x289D6Cu) { return; }
    }
    ctx->pc = 0x289D6Cu;
label_289d6c:
    // 0x289d6c: 0x104000b9  beqz        $v0, . + 4 + (0xB9 << 2)
    ctx->pc = 0x289D6Cu;
    {
        const bool branch_taken_0x289d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289D6Cu;
            // 0x289d70: 0x8fa40160  lw          $a0, 0x160($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289d6c) {
            ctx->pc = 0x28A054u;
            goto label_28a054;
        }
    }
    ctx->pc = 0x289D74u;
    // 0x289d74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x289d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289d78: 0x8fa60164  lw          $a2, 0x164($sp)
    ctx->pc = 0x289d78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x289d7c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x289d7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289d80: 0xc0a1dda  jal         func_287768
    ctx->pc = 0x289D80u;
    SET_GPR_U32(ctx, 31, 0x289D88u);
    ctx->pc = 0x289D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289D80u;
            // 0x289d84: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287768u;
    if (runtime->hasFunction(0x287768u)) {
        auto targetFn = runtime->lookupFunction(0x287768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289D88u; }
        if (ctx->pc != 0x289D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287768_0x287768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289D88u; }
        if (ctx->pc != 0x289D88u) { return; }
    }
    ctx->pc = 0x289D88u;
label_289d88:
    // 0x289d88: 0x104000b2  beqz        $v0, . + 4 + (0xB2 << 2)
    ctx->pc = 0x289D88u;
    {
        const bool branch_taken_0x289d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289D88u;
            // 0x289d8c: 0x8fa50168  lw          $a1, 0x168($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289d88) {
            ctx->pc = 0x28A054u;
            goto label_28a054;
        }
    }
    ctx->pc = 0x289D90u;
    // 0x289d90: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x289d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289d94: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x289d94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289d98: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x289d98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289d9c: 0xc0a1dda  jal         func_287768
    ctx->pc = 0x289D9Cu;
    SET_GPR_U32(ctx, 31, 0x289DA4u);
    ctx->pc = 0x289DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289D9Cu;
            // 0x289da0: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287768u;
    if (runtime->hasFunction(0x287768u)) {
        auto targetFn = runtime->lookupFunction(0x287768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289DA4u; }
        if (ctx->pc != 0x289DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287768_0x287768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289DA4u; }
        if (ctx->pc != 0x289DA4u) { return; }
    }
    ctx->pc = 0x289DA4u;
label_289da4:
    // 0x289da4: 0x104000ab  beqz        $v0, . + 4 + (0xAB << 2)
    ctx->pc = 0x289DA4u;
    {
        const bool branch_taken_0x289da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289DA4u;
            // 0x289da8: 0x27a30028  addiu       $v1, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289da4) {
            ctx->pc = 0x28A054u;
            goto label_28a054;
        }
    }
    ctx->pc = 0x289DACu;
    // 0x289dac: 0x2402ffec  addiu       $v0, $zero, -0x14
    ctx->pc = 0x289dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x289db0: 0xafa3016c  sw          $v1, 0x16C($sp)
    ctx->pc = 0x289db0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 3));
    // 0x289db4: 0x27b4ffb0  addiu       $s4, $sp, -0x50
    ctx->pc = 0x289db4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x289db8: 0x27a3ffc4  addiu       $v1, $sp, -0x3C
    ctx->pc = 0x289db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967236));
    // 0x289dbc: 0xafa0015c  sw          $zero, 0x15C($sp)
    ctx->pc = 0x289dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 0));
    // 0x289dc0: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x289dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
    // 0x289dc4: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x289dc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289dc8: 0xafa30174  sw          $v1, 0x174($sp)
    ctx->pc = 0x289dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 3));
    // 0x289dcc: 0x8fbe0160  lw          $fp, 0x160($sp)
    ctx->pc = 0x289dccu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_289dd0:
    // 0x289dd0: 0x8fa3015c  lw          $v1, 0x15C($sp)
    ctx->pc = 0x289dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x289dd4: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x289dd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x289dd8: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x289DD8u;
    {
        const bool branch_taken_0x289dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289DD8u;
            // 0x289ddc: 0x8fa2016c  lw          $v0, 0x16C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289dd8) {
            ctx->pc = 0x289E2Cu;
            goto label_289e2c;
        }
    }
    ctx->pc = 0x289DE0u;
    // 0x289de0: 0xc0a1a88  jal         func_286A20
    ctx->pc = 0x289DE0u;
    SET_GPR_U32(ctx, 31, 0x289DE8u);
    ctx->pc = 0x289DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289DE0u;
            // 0x289de4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286A20u;
    if (runtime->hasFunction(0x286A20u)) {
        auto targetFn = runtime->lookupFunction(0x286A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289DE8u; }
        if (ctx->pc != 0x289DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286A20_0x286a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289DE8u; }
        if (ctx->pc != 0x289DE8u) { return; }
    }
    ctx->pc = 0x289DE8u;
label_289de8:
    // 0x289de8: 0xc0a1a88  jal         func_286A20
    ctx->pc = 0x289DE8u;
    SET_GPR_U32(ctx, 31, 0x289DF0u);
    ctx->pc = 0x289DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289DE8u;
            // 0x289dec: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286A20u;
    if (runtime->hasFunction(0x286A20u)) {
        auto targetFn = runtime->lookupFunction(0x286A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289DF0u; }
        if (ctx->pc != 0x289DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286A20_0x286a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289DF0u; }
        if (ctx->pc != 0x289DF0u) { return; }
    }
    ctx->pc = 0x289DF0u;
label_289df0:
    // 0x289df0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x289df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289df4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x289df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x289df8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x289df8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289dfc: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x289dfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289e00: 0xc0a1dda  jal         func_287768
    ctx->pc = 0x289E00u;
    SET_GPR_U32(ctx, 31, 0x289E08u);
    ctx->pc = 0x289E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289E00u;
            // 0x289e04: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287768u;
    if (runtime->hasFunction(0x287768u)) {
        auto targetFn = runtime->lookupFunction(0x287768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289E08u; }
        if (ctx->pc != 0x289E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287768_0x287768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289E08u; }
        if (ctx->pc != 0x289E08u) { return; }
    }
    ctx->pc = 0x289E08u;
label_289e08:
    // 0x289e08: 0x10400092  beqz        $v0, . + 4 + (0x92 << 2)
    ctx->pc = 0x289E08u;
    {
        const bool branch_taken_0x289e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289E08u;
            // 0x289e0c: 0x8fa50168  lw          $a1, 0x168($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289e08) {
            ctx->pc = 0x28A054u;
            goto label_28a054;
        }
    }
    ctx->pc = 0x289E10u;
    // 0x289e10: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x289e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289e14: 0x8fa60174  lw          $a2, 0x174($sp)
    ctx->pc = 0x289e14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x289e18: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x289e18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289e1c: 0xc0a1dda  jal         func_287768
    ctx->pc = 0x289E1Cu;
    SET_GPR_U32(ctx, 31, 0x289E24u);
    ctx->pc = 0x289E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289E1Cu;
            // 0x289e20: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287768u;
    if (runtime->hasFunction(0x287768u)) {
        auto targetFn = runtime->lookupFunction(0x287768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289E24u; }
        if (ctx->pc != 0x289E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287768_0x287768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289E24u; }
        if (ctx->pc != 0x289E24u) { return; }
    }
    ctx->pc = 0x289E24u;
label_289e24:
    // 0x289e24: 0x1040008b  beqz        $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x289E24u;
    {
        const bool branch_taken_0x289e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289E24u;
            // 0x289e28: 0x8fa2016c  lw          $v0, 0x16C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289e24) {
            ctx->pc = 0x28A054u;
            goto label_28a054;
        }
    }
    ctx->pc = 0x289E2Cu;
label_289e2c:
    // 0x289e2c: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x289e2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x289e30: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x289e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x289e34: 0x26700028  addiu       $s0, $s3, 0x28
    ctx->pc = 0x289e34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
    // 0x289e38: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x289e38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x289e3c: 0x0  nop
    ctx->pc = 0x289e3cu;
    // NOP
label_289e40:
    // 0x289e40: 0xc0a1a88  jal         func_286A20
    ctx->pc = 0x289E40u;
    SET_GPR_U32(ctx, 31, 0x289E48u);
    ctx->pc = 0x289E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289E40u;
            // 0x289e44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286A20u;
    if (runtime->hasFunction(0x286A20u)) {
        auto targetFn = runtime->lookupFunction(0x286A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289E48u; }
        if (ctx->pc != 0x289E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286A20_0x286a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289E48u; }
        if (ctx->pc != 0x289E48u) { return; }
    }
    ctx->pc = 0x289E48u;
label_289e48:
    // 0x289e48: 0x8fa60160  lw          $a2, 0x160($sp)
    ctx->pc = 0x289e48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x289e4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x289e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289e50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x289e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289e54: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x289e54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289e58: 0xc0a1dda  jal         func_287768
    ctx->pc = 0x289E58u;
    SET_GPR_U32(ctx, 31, 0x289E60u);
    ctx->pc = 0x289E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289E58u;
            // 0x289e5c: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287768u;
    if (runtime->hasFunction(0x287768u)) {
        auto targetFn = runtime->lookupFunction(0x287768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289E60u; }
        if (ctx->pc != 0x289E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287768_0x287768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289E60u; }
        if (ctx->pc != 0x289E60u) { return; }
    }
    ctx->pc = 0x289E60u;
label_289e60:
    // 0x289e60: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x289E60u;
    {
        const bool branch_taken_0x289e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289E60u;
            // 0x289e64: 0x8fa3014c  lw          $v1, 0x14C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289e60) {
            ctx->pc = 0x28A058u;
            goto label_28a058;
        }
    }
    ctx->pc = 0x289E68u;
    // 0x289e68: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x289e68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x289e6c: 0x26310014  addiu       $s1, $s1, 0x14
    ctx->pc = 0x289e6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x289e70: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x289e70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x289e74: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x289E74u;
    {
        const bool branch_taken_0x289e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289E74u;
            // 0x289e78: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289e74) {
            ctx->pc = 0x289E40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_289e40;
        }
    }
    ctx->pc = 0x289E7Cu;
    // 0x289e7c: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x289e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x289e80: 0x26940050  addiu       $s4, $s4, 0x50
    ctx->pc = 0x289e80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    // 0x289e84: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x289e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x289e88: 0x27de0050  addiu       $fp, $fp, 0x50
    ctx->pc = 0x289e88u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x289e8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x289e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x289e90: 0xafa2015c  sw          $v0, 0x15C($sp)
    ctx->pc = 0x289e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 2));
    // 0x289e94: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x289e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x289e98: 0x8fa20174  lw          $v0, 0x174($sp)
    ctx->pc = 0x289e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x289e9c: 0xafa30170  sw          $v1, 0x170($sp)
    ctx->pc = 0x289e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 3));
    // 0x289ea0: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x289ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x289ea4: 0x8fa3015c  lw          $v1, 0x15C($sp)
    ctx->pc = 0x289ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x289ea8: 0xafa20174  sw          $v0, 0x174($sp)
    ctx->pc = 0x289ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 2));
    // 0x289eac: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x289eacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x289eb0: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x289EB0u;
    {
        const bool branch_taken_0x289eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289EB0u;
            // 0x289eb4: 0x26730050  addiu       $s3, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289eb0) {
            ctx->pc = 0x289DD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_289dd0;
        }
    }
    ctx->pc = 0x289EB8u;
    // 0x289eb8: 0xc0a19c6  jal         func_286718
    ctx->pc = 0x289EB8u;
    SET_GPR_U32(ctx, 31, 0x289EC0u);
    ctx->pc = 0x289EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289EB8u;
            // 0x289ebc: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286718u;
    if (runtime->hasFunction(0x286718u)) {
        auto targetFn = runtime->lookupFunction(0x286718u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289EC0u; }
        if (ctx->pc != 0x289EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286718_0x286718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289EC0u; }
        if (ctx->pc != 0x289EC0u) { return; }
    }
    ctx->pc = 0x289EC0u;
label_289ec0:
    // 0x289ec0: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x289ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x289ec4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x289ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289ec8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x289ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x289ecc: 0x8fa60164  lw          $a2, 0x164($sp)
    ctx->pc = 0x289eccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x289ed0: 0x2474ffff  addiu       $s4, $v1, -0x1
    ctx->pc = 0x289ed0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x289ed4: 0xafa20158  sw          $v0, 0x158($sp)
    ctx->pc = 0x289ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 2));
    // 0x289ed8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x289ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289edc: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x289edcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289ee0: 0xc0a1dda  jal         func_287768
    ctx->pc = 0x289EE0u;
    SET_GPR_U32(ctx, 31, 0x289EE8u);
    ctx->pc = 0x289EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289EE0u;
            // 0x289ee4: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287768u;
    if (runtime->hasFunction(0x287768u)) {
        auto targetFn = runtime->lookupFunction(0x287768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289EE8u; }
        if (ctx->pc != 0x289EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287768_0x287768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289EE8u; }
        if (ctx->pc != 0x289EE8u) { return; }
    }
    ctx->pc = 0x289EE8u;
label_289ee8:
    // 0x289ee8: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x289EE8u;
    {
        const bool branch_taken_0x289ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289EE8u;
            // 0x289eec: 0x8fa40144  lw          $a0, 0x144($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289ee8) {
            ctx->pc = 0x28A054u;
            goto label_28a054;
        }
    }
    ctx->pc = 0x289EF0u;
    // 0x289ef0: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x289EF0u;
    {
        const bool branch_taken_0x289ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x289ef0) {
            ctx->pc = 0x289FDCu;
            goto label_289fdc;
        }
    }
    ctx->pc = 0x289EF8u;
label_289ef8:
    // 0x289ef8: 0x2682ffff  addiu       $v0, $s4, -0x1
    ctx->pc = 0x289ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_289efc:
    // 0x289efc: 0x4400012  bltz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x289EFCu;
    {
        const bool branch_taken_0x289efc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x289F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289EFCu;
            // 0x289f00: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289efc) {
            ctx->pc = 0x289F48u;
            goto label_289f48;
        }
    }
    ctx->pc = 0x289F04u;
    // 0x289f04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x289f04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_289f08:
    // 0x289f08: 0x8fa40144  lw          $a0, 0x144($sp)
    ctx->pc = 0x289f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x289f0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x289f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289f10: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x289f10u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x289f14: 0xc0a1c98  jal         func_287260
    ctx->pc = 0x289F14u;
    SET_GPR_U32(ctx, 31, 0x289F1Cu);
    ctx->pc = 0x289F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289F14u;
            // 0x289f18: 0x118840  sll         $s1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287260u;
    if (runtime->hasFunction(0x287260u)) {
        auto targetFn = runtime->lookupFunction(0x287260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289F1Cu; }
        if (ctx->pc != 0x289F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287260_0x287260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289F1Cu; }
        if (ctx->pc != 0x289F1Cu) { return; }
    }
    ctx->pc = 0x289F1Cu;
label_289f1c:
    // 0x289f1c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x289f1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x289f20: 0x8fa40148  lw          $a0, 0x148($sp)
    ctx->pc = 0x289f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x289f24: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x289f24u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x289f28: 0xc0a1c98  jal         func_287260
    ctx->pc = 0x289F28u;
    SET_GPR_U32(ctx, 31, 0x289F30u);
    ctx->pc = 0x289F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289F28u;
            // 0x289f2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287260u;
    if (runtime->hasFunction(0x287260u)) {
        auto targetFn = runtime->lookupFunction(0x287260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289F30u; }
        if (ctx->pc != 0x289F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287260_0x287260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289F30u; }
        if (ctx->pc != 0x289F30u) { return; }
    }
    ctx->pc = 0x289F30u;
label_289f30:
    // 0x289f30: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x289f30u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x289f34: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x289f34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x289f38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x289F38u;
    {
        const bool branch_taken_0x289f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289F38u;
            // 0x289f3c: 0x2931023  subu        $v0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289f38) {
            ctx->pc = 0x289F48u;
            goto label_289f48;
        }
    }
    ctx->pc = 0x289F40u;
    // 0x289f40: 0x441fff1  bgez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x289F40u;
    {
        const bool branch_taken_0x289f40 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x289F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289F40u;
            // 0x289f44: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289f40) {
            ctx->pc = 0x289F08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_289f08;
        }
    }
    ctx->pc = 0x289F48u;
label_289f48:
    // 0x289f48: 0x17c00010  bnez        $fp, . + 4 + (0x10 << 2)
    ctx->pc = 0x289F48u;
    {
        const bool branch_taken_0x289f48 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x289f48) {
            ctx->pc = 0x289F8Cu;
            goto label_289f8c;
        }
    }
    ctx->pc = 0x289F50u;
    // 0x289f50: 0x1a60000e  blez        $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x289F50u;
    {
        const bool branch_taken_0x289f50 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x289F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289F50u;
            // 0x289f54: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289f50) {
            ctx->pc = 0x289F8Cu;
            goto label_289f8c;
        }
    }
    ctx->pc = 0x289F58u;
    // 0x289f58: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x289f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289f5c: 0x0  nop
    ctx->pc = 0x289f5cu;
    // NOP
label_289f60:
    // 0x289f60: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x289f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289f64: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x289f64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289f68: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x289f68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289f6c: 0xc0a1dda  jal         func_287768
    ctx->pc = 0x289F6Cu;
    SET_GPR_U32(ctx, 31, 0x289F74u);
    ctx->pc = 0x289F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289F6Cu;
            // 0x289f70: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287768u;
    if (runtime->hasFunction(0x287768u)) {
        auto targetFn = runtime->lookupFunction(0x287768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289F74u; }
        if (ctx->pc != 0x289F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287768_0x287768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289F74u; }
        if (ctx->pc != 0x289F74u) { return; }
    }
    ctx->pc = 0x289F74u;
label_289f74:
    // 0x289f74: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x289F74u;
    {
        const bool branch_taken_0x289f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289F74u;
            // 0x289f78: 0x8fa3014c  lw          $v1, 0x14C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289f74) {
            ctx->pc = 0x28A058u;
            goto label_28a058;
        }
    }
    ctx->pc = 0x289F7Cu;
    // 0x289f7c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x289f7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x289f80: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x289f80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x289f84: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x289F84u;
    {
        const bool branch_taken_0x289f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289F84u;
            // 0x289f88: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289f84) {
            ctx->pc = 0x289F60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_289f60;
        }
    }
    ctx->pc = 0x289F8Cu;
label_289f8c:
    // 0x289f8c: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x289F8Cu;
    {
        const bool branch_taken_0x289f8c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x289F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289F8Cu;
            // 0x289f90: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289f8c) {
            ctx->pc = 0x289F9Cu;
            goto label_289f9c;
        }
    }
    ctx->pc = 0x289F94u;
    // 0x289f94: 0x5220000e  beql        $s1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x289F94u;
    {
        const bool branch_taken_0x289f94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x289f94) {
            ctx->pc = 0x289F98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x289F94u;
            // 0x289f98: 0x293a023  subu        $s4, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x289FD0u;
            goto label_289fd0;
        }
    }
    ctx->pc = 0x289F9Cu;
label_289f9c:
    // 0x289f9c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x289f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x289fa0: 0x2421818  mult        $v1, $s2, $v0
    ctx->pc = 0x289fa0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x289fa4: 0x2263018  mult        $a2, $s1, $a2
    ctx->pc = 0x289fa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x289fa8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x289fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289fac: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x289facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289fb0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x289fb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289fb4: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x289fb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289fb8: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x289fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x289fbc: 0xc0a1dda  jal         func_287768
    ctx->pc = 0x289FBCu;
    SET_GPR_U32(ctx, 31, 0x289FC4u);
    ctx->pc = 0x289FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289FBCu;
            // 0x289fc0: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287768u;
    if (runtime->hasFunction(0x287768u)) {
        auto targetFn = runtime->lookupFunction(0x287768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289FC4u; }
        if (ctx->pc != 0x289FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287768_0x287768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289FC4u; }
        if (ctx->pc != 0x289FC4u) { return; }
    }
    ctx->pc = 0x289FC4u;
label_289fc4:
    // 0x289fc4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x289FC4u;
    {
        const bool branch_taken_0x289fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289FC4u;
            // 0x289fc8: 0x8fa3014c  lw          $v1, 0x14C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289fc4) {
            ctx->pc = 0x28A058u;
            goto label_28a058;
        }
    }
    ctx->pc = 0x289FCCu;
    // 0x289fcc: 0x293a023  subu        $s4, $s4, $s3
    ctx->pc = 0x289fccu;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_289fd0:
    // 0x289fd0: 0x6800019  bltz        $s4, . + 4 + (0x19 << 2)
    ctx->pc = 0x289FD0u;
    {
        const bool branch_taken_0x289fd0 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x289FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289FD0u;
            // 0x289fd4: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289fd0) {
            ctx->pc = 0x28A038u;
            goto label_28a038;
        }
    }
    ctx->pc = 0x289FD8u;
    // 0x289fd8: 0x8fa40144  lw          $a0, 0x144($sp)
    ctx->pc = 0x289fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_289fdc:
    // 0x289fdc: 0xc0a1c98  jal         func_287260
    ctx->pc = 0x289FDCu;
    SET_GPR_U32(ctx, 31, 0x289FE4u);
    ctx->pc = 0x289FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289FDCu;
            // 0x289fe0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287260u;
    if (runtime->hasFunction(0x287260u)) {
        auto targetFn = runtime->lookupFunction(0x287260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289FE4u; }
        if (ctx->pc != 0x289FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287260_0x287260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289FE4u; }
        if (ctx->pc != 0x289FE4u) { return; }
    }
    ctx->pc = 0x289FE4u;
label_289fe4:
    // 0x289fe4: 0x8fa40148  lw          $a0, 0x148($sp)
    ctx->pc = 0x289fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x289fe8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x289fe8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289fec: 0xc0a1c98  jal         func_287260
    ctx->pc = 0x289FECu;
    SET_GPR_U32(ctx, 31, 0x289FF4u);
    ctx->pc = 0x289FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289FECu;
            // 0x289ff0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287260u;
    if (runtime->hasFunction(0x287260u)) {
        auto targetFn = runtime->lookupFunction(0x287260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289FF4u; }
        if (ctx->pc != 0x289FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287260_0x287260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289FF4u; }
        if (ctx->pc != 0x289FF4u) { return; }
    }
    ctx->pc = 0x289FF4u;
label_289ff4:
    // 0x289ff4: 0x1640ffc0  bnez        $s2, . + 4 + (-0x40 << 2)
    ctx->pc = 0x289FF4u;
    {
        const bool branch_taken_0x289ff4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x289FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289FF4u;
            // 0x289ff8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289ff4) {
            ctx->pc = 0x289EF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_289ef8;
        }
    }
    ctx->pc = 0x289FFCu;
    // 0x289ffc: 0x5620ffbf  bnel        $s1, $zero, . + 4 + (-0x41 << 2)
    ctx->pc = 0x289FFCu;
    {
        const bool branch_taken_0x289ffc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x289ffc) {
            ctx->pc = 0x28A000u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x289FFCu;
            // 0x28a000: 0x2682ffff  addiu       $v0, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x289EFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_289efc;
        }
    }
    ctx->pc = 0x28A004u;
    // 0x28a004: 0x57c0000a  bnel        $fp, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x28A004u;
    {
        const bool branch_taken_0x28a004 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x28a004) {
            ctx->pc = 0x28A008u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28A004u;
            // 0x28a008: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28A030u;
            goto label_28a030;
        }
    }
    ctx->pc = 0x28A00Cu;
    // 0x28a00c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x28a00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a010: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x28a010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a014: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x28a014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a018: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x28a018u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a01c: 0xc0a1dda  jal         func_287768
    ctx->pc = 0x28A01Cu;
    SET_GPR_U32(ctx, 31, 0x28A024u);
    ctx->pc = 0x28A020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28A01Cu;
            // 0x28a020: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287768u;
    if (runtime->hasFunction(0x287768u)) {
        auto targetFn = runtime->lookupFunction(0x287768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A024u; }
        if (ctx->pc != 0x28A024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287768_0x287768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A024u; }
        if (ctx->pc != 0x28A024u) { return; }
    }
    ctx->pc = 0x28A024u;
label_28a024:
    // 0x28a024: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x28A024u;
    {
        const bool branch_taken_0x28a024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A024u;
            // 0x28a028: 0x8fa3014c  lw          $v1, 0x14C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a024) {
            ctx->pc = 0x28A058u;
            goto label_28a058;
        }
    }
    ctx->pc = 0x28A02Cu;
    // 0x28a02c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x28a02cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_28a030:
    // 0x28a030: 0x681ffea  bgez        $s4, . + 4 + (-0x16 << 2)
    ctx->pc = 0x28A030u;
    {
        const bool branch_taken_0x28a030 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x28A034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A030u;
            // 0x28a034: 0x8fa40144  lw          $a0, 0x144($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a030) {
            ctx->pc = 0x289FDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_289fdc;
        }
    }
    ctx->pc = 0x28A038u;
label_28a038:
    // 0x28a038: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x28a038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x28a03c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x28a03cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a040: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x28a040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a044: 0xc0a1e5c  jal         func_287970
    ctx->pc = 0x28A044u;
    SET_GPR_U32(ctx, 31, 0x28A04Cu);
    ctx->pc = 0x28A048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28A044u;
            // 0x28a048: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287970u;
    if (runtime->hasFunction(0x287970u)) {
        auto targetFn = runtime->lookupFunction(0x287970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A04Cu; }
        if (ctx->pc != 0x28A04Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287970_0x287970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A04Cu; }
        if (ctx->pc != 0x28A04Cu) { return; }
    }
    ctx->pc = 0x28A04Cu;
label_28a04c:
    // 0x28a04c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28a04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28a050: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x28a050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
label_28a054:
    // 0x28a054: 0x8fa3014c  lw          $v1, 0x14C($sp)
    ctx->pc = 0x28a054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_28a058:
    // 0x28a058: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x28A058u;
    {
        const bool branch_taken_0x28a058 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28a058) {
            ctx->pc = 0x28A05Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28A058u;
            // 0x28a05c: 0x8ec20000  lw          $v0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28A074u;
            goto label_28a074;
        }
    }
    ctx->pc = 0x28A060u;
    // 0x28a060: 0x52a00004  beql        $s5, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28A060u;
    {
        const bool branch_taken_0x28a060 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a060) {
            ctx->pc = 0x28A064u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28A060u;
            // 0x28a064: 0x8ec20000  lw          $v0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28A074u;
            goto label_28a074;
        }
    }
    ctx->pc = 0x28A068u;
    // 0x28a068: 0xc0a1f0c  jal         func_287C30
    ctx->pc = 0x28A068u;
    SET_GPR_U32(ctx, 31, 0x28A070u);
    ctx->pc = 0x28A06Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28A068u;
            // 0x28a06c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287C30u;
    if (runtime->hasFunction(0x287C30u)) {
        auto targetFn = runtime->lookupFunction(0x287C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A070u; }
        if (ctx->pc != 0x28A070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287C30_0x287c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A070u; }
        if (ctx->pc != 0x28A070u) { return; }
    }
    ctx->pc = 0x28A070u;
label_28a070:
    // 0x28a070: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x28a070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_28a074:
    // 0x28a074: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x28a074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x28a078: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x28a078u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x28a07c: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x28a07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x28a080: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x28A080u;
    {
        const bool branch_taken_0x28a080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A080u;
            // 0x28a084: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a080) {
            ctx->pc = 0x28A0ECu;
            goto label_28a0ec;
        }
    }
    ctx->pc = 0x28A088u;
    // 0x28a088: 0x24140050  addiu       $s4, $zero, 0x50
    ctx->pc = 0x28a088u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x28a08c: 0x24120014  addiu       $s2, $zero, 0x14
    ctx->pc = 0x28a08cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x28a090: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x28a090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x28a094: 0x0  nop
    ctx->pc = 0x28a094u;
    // NOP
label_28a098:
    // 0x28a098: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x28A098u;
    {
        const bool branch_taken_0x28a098 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A09Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A098u;
            // 0x28a09c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a098) {
            ctx->pc = 0x28A0D4u;
            goto label_28a0d4;
        }
    }
    ctx->pc = 0x28A0A0u;
    // 0x28a0a0: 0x26710001  addiu       $s1, $s3, 0x1
    ctx->pc = 0x28a0a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x28a0a4: 0x2741818  mult        $v1, $s3, $s4
    ctx->pc = 0x28a0a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_28a0a8:
    // 0x28a0a8: 0x2122018  mult        $a0, $s0, $s2
    ctx->pc = 0x28a0a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x28a0ac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28a0acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x28a0b0: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x28a0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x28a0b4: 0xc0a1a14  jal         func_286850
    ctx->pc = 0x28A0B4u;
    SET_GPR_U32(ctx, 31, 0x28A0BCu);
    ctx->pc = 0x28A0B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28A0B4u;
            // 0x28a0b8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286850u;
    if (runtime->hasFunction(0x286850u)) {
        auto targetFn = runtime->lookupFunction(0x286850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A0BCu; }
        if (ctx->pc != 0x28A0BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286850_0x286850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A0BCu; }
        if (ctx->pc != 0x28A0BCu) { return; }
    }
    ctx->pc = 0x28A0BCu;
label_28a0bc:
    // 0x28a0bc: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x28a0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x28a0c0: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x28a0c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28a0c4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x28A0C4u;
    {
        const bool branch_taken_0x28a0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28a0c4) {
            ctx->pc = 0x28A0C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28A0C4u;
            // 0x28a0c8: 0x2741818  mult        $v1, $s3, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x28A0A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28a0a8;
        }
    }
    ctx->pc = 0x28A0CCu;
    // 0x28a0cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28A0CCu;
    {
        const bool branch_taken_0x28a0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A0CCu;
            // 0x28a0d0: 0x220982d  daddu       $s3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a0cc) {
            ctx->pc = 0x28A0E0u;
            goto label_28a0e0;
        }
    }
    ctx->pc = 0x28A0D4u;
label_28a0d4:
    // 0x28a0d4: 0x26710001  addiu       $s1, $s3, 0x1
    ctx->pc = 0x28a0d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x28a0d8: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x28a0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x28a0dc: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x28a0dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28a0e0:
    // 0x28a0e0: 0x263102a  slt         $v0, $s3, $v1
    ctx->pc = 0x28a0e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28a0e4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x28A0E4u;
    {
        const bool branch_taken_0x28a0e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A0E4u;
            // 0x28a0e8: 0x8fa30158  lw          $v1, 0x158($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a0e4) {
            ctx->pc = 0x28A098u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28a098;
        }
    }
    ctx->pc = 0x28A0ECu;
label_28a0ec:
    // 0x28a0ec: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x28a0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_28a0f0:
    // 0x28a0f0: 0xdfbf0210  ld          $ra, 0x210($sp)
    ctx->pc = 0x28a0f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x28a0f4: 0xdfbe0200  ld          $fp, 0x200($sp)
    ctx->pc = 0x28a0f4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x28a0f8: 0xdfb701f0  ld          $s7, 0x1F0($sp)
    ctx->pc = 0x28a0f8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x28a0fc: 0xdfb601e0  ld          $s6, 0x1E0($sp)
    ctx->pc = 0x28a0fcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x28a100: 0xdfb501d0  ld          $s5, 0x1D0($sp)
    ctx->pc = 0x28a100u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x28a104: 0xdfb401c0  ld          $s4, 0x1C0($sp)
    ctx->pc = 0x28a104u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x28a108: 0xdfb301b0  ld          $s3, 0x1B0($sp)
    ctx->pc = 0x28a108u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x28a10c: 0xdfb201a0  ld          $s2, 0x1A0($sp)
    ctx->pc = 0x28a10cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x28a110: 0xdfb10190  ld          $s1, 0x190($sp)
    ctx->pc = 0x28a110u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x28a114: 0xdfb00180  ld          $s0, 0x180($sp)
    ctx->pc = 0x28a114u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x28a118: 0x3e00008  jr          $ra
    ctx->pc = 0x28A118u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A11Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A118u;
            // 0x28a11c: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28A120u;
    ctx->pc = 0x28a120u;
}
