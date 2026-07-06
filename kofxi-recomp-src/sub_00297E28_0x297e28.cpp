#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00297E28
// Address: 0x297e28 - 0x297fd0
void sub_00297E28_0x297e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297E28_0x297e28");
#endif

    switch (ctx->pc) {
        case 0x297e7cu: goto label_297e7c;
        case 0x297e94u: goto label_297e94;
        case 0x297ea8u: goto label_297ea8;
        case 0x297eb8u: goto label_297eb8;
        case 0x297eccu: goto label_297ecc;
        case 0x297ee4u: goto label_297ee4;
        case 0x297ef8u: goto label_297ef8;
        case 0x297f14u: goto label_297f14;
        case 0x297f24u: goto label_297f24;
        case 0x297f3cu: goto label_297f3c;
        case 0x297f4cu: goto label_297f4c;
        case 0x297f58u: goto label_297f58;
        case 0x297f84u: goto label_297f84;
        case 0x297f8cu: goto label_297f8c;
        case 0x297f9cu: goto label_297f9c;
        case 0x297fa8u: goto label_297fa8;
        default: break;
    }

    ctx->pc = 0x297e28u;

    // 0x297e28: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x297e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x297e2c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x297e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x297e30: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x297e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x297e34: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x297e34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297e38: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x297e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x297e3c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x297e3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297e40: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x297e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x297e44: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x297e44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297e48: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x297e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x297e4c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x297e4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297e50: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x297e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x297e54: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x297E54u;
    {
        const bool branch_taken_0x297e54 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x297E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297E54u;
            // 0x297e58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297e54) {
            ctx->pc = 0x297E68u;
            goto label_297e68;
        }
    }
    ctx->pc = 0x297E5Cu;
    // 0x297e5c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x297e5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x297e60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x297E60u;
    {
        const bool branch_taken_0x297e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297E60u;
            // 0x297e64: 0xae120000  sw          $s2, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297e60) {
            ctx->pc = 0x297E6Cu;
            goto label_297e6c;
        }
    }
    ctx->pc = 0x297E68u;
label_297e68:
    // 0x297e68: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x297e68u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_297e6c:
    // 0x297e6c: 0x1260001e  beqz        $s3, . + 4 + (0x1E << 2)
    ctx->pc = 0x297E6Cu;
    {
        const bool branch_taken_0x297e6c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x297E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297E6Cu;
            // 0x297e70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297e6c) {
            ctx->pc = 0x297EE8u;
            goto label_297ee8;
        }
    }
    ctx->pc = 0x297E74u;
    // 0x297e74: 0xc0a5af8  jal         func_296BE0
    ctx->pc = 0x297E74u;
    SET_GPR_U32(ctx, 31, 0x297E7Cu);
    ctx->pc = 0x297E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297E74u;
            // 0x297e78: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296BE0u;
    if (runtime->hasFunction(0x296BE0u)) {
        auto targetFn = runtime->lookupFunction(0x296BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297E7Cu; }
        if (ctx->pc != 0x297E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296BE0_0x296be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297E7Cu; }
        if (ctx->pc != 0x297E7Cu) { return; }
    }
    ctx->pc = 0x297E7Cu;
label_297e7c:
    // 0x297e7c: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x297e7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x297e80: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x297E80u;
    {
        const bool branch_taken_0x297e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297E80u;
            // 0x297e84: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297e80) {
            ctx->pc = 0x297EC0u;
            goto label_297ec0;
        }
    }
    ctx->pc = 0x297E88u;
    // 0x297e88: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x297e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x297e8c: 0xc0a5102  jal         func_294408
    ctx->pc = 0x297E8Cu;
    SET_GPR_U32(ctx, 31, 0x297E94u);
    ctx->pc = 0x297E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297E8Cu;
            // 0x297e90: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294408u;
    if (runtime->hasFunction(0x294408u)) {
        auto targetFn = runtime->lookupFunction(0x294408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297E94u; }
        if (ctx->pc != 0x297E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294408_0x294408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297E94u; }
        if (ctx->pc != 0x297E94u) { return; }
    }
    ctx->pc = 0x297E94u;
label_297e94:
    // 0x297e94: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x297E94u;
    {
        const bool branch_taken_0x297e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297E94u;
            // 0x297e98: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297e94) {
            ctx->pc = 0x297F2Cu;
            goto label_297f2c;
        }
    }
    ctx->pc = 0x297E9Cu;
    // 0x297e9c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x297e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x297ea0: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x297EA0u;
    SET_GPR_U32(ctx, 31, 0x297EA8u);
    ctx->pc = 0x297EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297EA0u;
            // 0x297ea4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (runtime->hasFunction(0x2944F0u)) {
        auto targetFn = runtime->lookupFunction(0x2944F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297EA8u; }
        if (ctx->pc != 0x297EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002944F0_0x2944f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297EA8u; }
        if (ctx->pc != 0x297EA8u) { return; }
    }
    ctx->pc = 0x297EA8u;
label_297ea8:
    // 0x297ea8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x297ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x297eac: 0x26050018  addiu       $a1, $s0, 0x18
    ctx->pc = 0x297eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x297eb0: 0xc0a5148  jal         func_294520
    ctx->pc = 0x297EB0u;
    SET_GPR_U32(ctx, 31, 0x297EB8u);
    ctx->pc = 0x297EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297EB0u;
            // 0x297eb4: 0x26060014  addiu       $a2, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294520u;
    if (runtime->hasFunction(0x294520u)) {
        auto targetFn = runtime->lookupFunction(0x294520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297EB8u; }
        if (ctx->pc != 0x297EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294520_0x294520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297EB8u; }
        if (ctx->pc != 0x297EB8u) { return; }
    }
    ctx->pc = 0x297EB8u;
label_297eb8:
    // 0x297eb8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x297EB8u;
    {
        const bool branch_taken_0x297eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297eb8) {
            ctx->pc = 0x297EE8u;
            goto label_297ee8;
        }
    }
    ctx->pc = 0x297EC0u;
label_297ec0:
    // 0x297ec0: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x297ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x297ec4: 0xc049c48  jal         func_127120
    ctx->pc = 0x297EC4u;
    SET_GPR_U32(ctx, 31, 0x297ECCu);
    ctx->pc = 0x297EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297EC4u;
            // 0x297ec8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297ECCu; }
        if (ctx->pc != 0x297ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297ECCu; }
        if (ctx->pc != 0x297ECCu) { return; }
    }
    ctx->pc = 0x297ECCu;
label_297ecc:
    // 0x297ecc: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x297eccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x297ed0: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x297ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x297ed4: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x297ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x297ed8: 0xd13023  subu        $a2, $a2, $s1
    ctx->pc = 0x297ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x297edc: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x297EDCu;
    SET_GPR_U32(ctx, 31, 0x297EE4u);
    ctx->pc = 0x297EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297EDCu;
            // 0x297ee0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297EE4u; }
        if (ctx->pc != 0x297EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297EE4u; }
        if (ctx->pc != 0x297EE4u) { return; }
    }
    ctx->pc = 0x297EE4u;
label_297ee4:
    // 0x297ee4: 0xae110014  sw          $s1, 0x14($s0)
    ctx->pc = 0x297ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
label_297ee8:
    // 0x297ee8: 0x1280002c  beqz        $s4, . + 4 + (0x2C << 2)
    ctx->pc = 0x297EE8u;
    {
        const bool branch_taken_0x297ee8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x297EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297EE8u;
            // 0x297eec: 0x26110018  addiu       $s1, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297ee8) {
            ctx->pc = 0x297F9Cu;
            goto label_297f9c;
        }
    }
    ctx->pc = 0x297EF0u;
    // 0x297ef0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x297ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297ef4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x297ef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_297ef8:
    // 0x297ef8: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x297ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x297efc: 0x3a52021  addu        $a0, $sp, $a1
    ctx->pc = 0x297efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x297f00: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x297f00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x297f04: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x297f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x297f08: 0x28a30040  slti        $v1, $a1, 0x40
    ctx->pc = 0x297f08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x297f0c: 0x38420036  xori        $v0, $v0, 0x36
    ctx->pc = 0x297f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)54);
    // 0x297f10: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_297f14:
    if (ctx->pc == 0x297F14u) {
        ctx->pc = 0x297F14u;
            // 0x297f14: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x297F18u;
        goto label_fallthrough_0x297f10;
    }
    ctx->pc = 0x297F10u;
    {
        const bool branch_taken_0x297f10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x297F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297F10u;
            // 0x297f14: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297f10) {
            ctx->pc = 0x297EF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_297ef8;
        }
    }
label_fallthrough_0x297f10:
    ctx->pc = 0x297F18u;
    // 0x297f18: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x297f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x297f1c: 0xc0a5102  jal         func_294408
    ctx->pc = 0x297F1Cu;
    SET_GPR_U32(ctx, 31, 0x297F24u);
    ctx->pc = 0x297F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297F1Cu;
            // 0x297f20: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294408u;
    if (runtime->hasFunction(0x294408u)) {
        auto targetFn = runtime->lookupFunction(0x294408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297F24u; }
        if (ctx->pc != 0x297F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294408_0x294408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297F24u; }
        if (ctx->pc != 0x297F24u) { return; }
    }
    ctx->pc = 0x297F24u;
label_297f24:
    // 0x297f24: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x297F24u;
    {
        const bool branch_taken_0x297f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x297f24) {
            ctx->pc = 0x297F34u;
            goto label_297f34;
        }
    }
    ctx->pc = 0x297F2Cu;
label_297f2c:
    // 0x297f2c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x297F2Cu;
    {
        const bool branch_taken_0x297f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297F2Cu;
            // 0x297f30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297f2c) {
            ctx->pc = 0x297FACu;
            goto label_297fac;
        }
    }
    ctx->pc = 0x297F34u;
label_297f34:
    // 0x297f34: 0xc0a5af8  jal         func_296BE0
    ctx->pc = 0x297F34u;
    SET_GPR_U32(ctx, 31, 0x297F3Cu);
    ctx->pc = 0x297F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297F34u;
            // 0x297f38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296BE0u;
    if (runtime->hasFunction(0x296BE0u)) {
        auto targetFn = runtime->lookupFunction(0x296BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297F3Cu; }
        if (ctx->pc != 0x297F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296BE0_0x296be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297F3Cu; }
        if (ctx->pc != 0x297F3Cu) { return; }
    }
    ctx->pc = 0x297F3Cu;
label_297f3c:
    // 0x297f3c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x297f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x297f40: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x297f40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297f44: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x297F44u;
    SET_GPR_U32(ctx, 31, 0x297F4Cu);
    ctx->pc = 0x297F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297F44u;
            // 0x297f48: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (runtime->hasFunction(0x2944F0u)) {
        auto targetFn = runtime->lookupFunction(0x2944F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297F4Cu; }
        if (ctx->pc != 0x297F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002944F0_0x2944f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297F4Cu; }
        if (ctx->pc != 0x297F4Cu) { return; }
    }
    ctx->pc = 0x297F4Cu;
label_297f4c:
    // 0x297f4c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x297f4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297f50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x297f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297f54: 0x0  nop
    ctx->pc = 0x297f54u;
    // NOP
label_297f58:
    // 0x297f58: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x297f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x297f5c: 0x3a52021  addu        $a0, $sp, $a1
    ctx->pc = 0x297f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x297f60: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x297f60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x297f64: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x297f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x297f68: 0x28a30040  slti        $v1, $a1, 0x40
    ctx->pc = 0x297f68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x297f6c: 0x3842005c  xori        $v0, $v0, 0x5C
    ctx->pc = 0x297f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)92);
    // 0x297f70: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x297F70u;
    {
        const bool branch_taken_0x297f70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x297F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297F70u;
            // 0x297f74: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297f70) {
            ctx->pc = 0x297F58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_297f58;
        }
    }
    ctx->pc = 0x297F78u;
    // 0x297f78: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x297f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x297f7c: 0xc0a5102  jal         func_294408
    ctx->pc = 0x297F7Cu;
    SET_GPR_U32(ctx, 31, 0x297F84u);
    ctx->pc = 0x297F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297F7Cu;
            // 0x297f80: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294408u;
    if (runtime->hasFunction(0x294408u)) {
        auto targetFn = runtime->lookupFunction(0x294408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297F84u; }
        if (ctx->pc != 0x297F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294408_0x294408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297F84u; }
        if (ctx->pc != 0x297F84u) { return; }
    }
    ctx->pc = 0x297F84u;
label_297f84:
    // 0x297f84: 0xc0a5af8  jal         func_296BE0
    ctx->pc = 0x297F84u;
    SET_GPR_U32(ctx, 31, 0x297F8Cu);
    ctx->pc = 0x297F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297F84u;
            // 0x297f88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296BE0u;
    if (runtime->hasFunction(0x296BE0u)) {
        auto targetFn = runtime->lookupFunction(0x296BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297F8Cu; }
        if (ctx->pc != 0x297F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296BE0_0x296be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297F8Cu; }
        if (ctx->pc != 0x297F8Cu) { return; }
    }
    ctx->pc = 0x297F8Cu;
label_297f8c:
    // 0x297f8c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x297f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x297f90: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x297f90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297f94: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x297F94u;
    SET_GPR_U32(ctx, 31, 0x297F9Cu);
    ctx->pc = 0x297F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297F94u;
            // 0x297f98: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (runtime->hasFunction(0x2944F0u)) {
        auto targetFn = runtime->lookupFunction(0x2944F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297F9Cu; }
        if (ctx->pc != 0x297F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002944F0_0x2944f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297F9Cu; }
        if (ctx->pc != 0x297F9Cu) { return; }
    }
    ctx->pc = 0x297F9Cu;
label_297f9c:
    // 0x297f9c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x297f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x297fa0: 0xc0a5bae  jal         func_296EB8
    ctx->pc = 0x297FA0u;
    SET_GPR_U32(ctx, 31, 0x297FA8u);
    ctx->pc = 0x297FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297FA0u;
            // 0x297fa4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296EB8u;
    if (runtime->hasFunction(0x296EB8u)) {
        auto targetFn = runtime->lookupFunction(0x296EB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297FA8u; }
        if (ctx->pc != 0x297FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296EB8_0x296eb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297FA8u; }
        if (ctx->pc != 0x297FA8u) { return; }
    }
    ctx->pc = 0x297FA8u;
label_297fa8:
    // 0x297fa8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x297fa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_297fac:
    // 0x297fac: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x297facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x297fb0: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x297fb0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x297fb4: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x297fb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x297fb8: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x297fb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x297fbc: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x297fbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x297fc0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x297fc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x297fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x297FC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297FC4u;
            // 0x297fc8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x297FCCu;
    // 0x297fcc: 0x0  nop
    ctx->pc = 0x297fccu;
    // NOP
    ctx->pc = 0x297fd0u;
}
