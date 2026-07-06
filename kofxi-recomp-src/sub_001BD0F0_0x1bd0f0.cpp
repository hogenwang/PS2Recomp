#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BD0F0
// Address: 0x1bd0f0 - 0x1bd1f0
void sub_001BD0F0_0x1bd0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BD0F0_0x1bd0f0");
#endif

    switch (ctx->pc) {
        case 0x1bd0f0u: goto label_1bd0f0;
        case 0x1bd0f4u: goto label_1bd0f4;
        case 0x1bd0f8u: goto label_1bd0f8;
        case 0x1bd0fcu: goto label_1bd0fc;
        case 0x1bd100u: goto label_1bd100;
        case 0x1bd104u: goto label_1bd104;
        case 0x1bd108u: goto label_1bd108;
        case 0x1bd10cu: goto label_1bd10c;
        case 0x1bd110u: goto label_1bd110;
        case 0x1bd114u: goto label_1bd114;
        case 0x1bd118u: goto label_1bd118;
        case 0x1bd11cu: goto label_1bd11c;
        case 0x1bd120u: goto label_1bd120;
        case 0x1bd124u: goto label_1bd124;
        case 0x1bd128u: goto label_1bd128;
        case 0x1bd12cu: goto label_1bd12c;
        case 0x1bd130u: goto label_1bd130;
        case 0x1bd134u: goto label_1bd134;
        case 0x1bd138u: goto label_1bd138;
        case 0x1bd13cu: goto label_1bd13c;
        case 0x1bd140u: goto label_1bd140;
        case 0x1bd144u: goto label_1bd144;
        case 0x1bd148u: goto label_1bd148;
        case 0x1bd14cu: goto label_1bd14c;
        case 0x1bd150u: goto label_1bd150;
        case 0x1bd154u: goto label_1bd154;
        case 0x1bd158u: goto label_1bd158;
        case 0x1bd15cu: goto label_1bd15c;
        case 0x1bd160u: goto label_1bd160;
        case 0x1bd164u: goto label_1bd164;
        case 0x1bd168u: goto label_1bd168;
        case 0x1bd16cu: goto label_1bd16c;
        case 0x1bd170u: goto label_1bd170;
        case 0x1bd174u: goto label_1bd174;
        case 0x1bd178u: goto label_1bd178;
        case 0x1bd17cu: goto label_1bd17c;
        case 0x1bd180u: goto label_1bd180;
        case 0x1bd184u: goto label_1bd184;
        case 0x1bd188u: goto label_1bd188;
        case 0x1bd18cu: goto label_1bd18c;
        case 0x1bd190u: goto label_1bd190;
        case 0x1bd194u: goto label_1bd194;
        case 0x1bd198u: goto label_1bd198;
        case 0x1bd19cu: goto label_1bd19c;
        case 0x1bd1a0u: goto label_1bd1a0;
        case 0x1bd1a4u: goto label_1bd1a4;
        case 0x1bd1a8u: goto label_1bd1a8;
        case 0x1bd1acu: goto label_1bd1ac;
        case 0x1bd1b0u: goto label_1bd1b0;
        case 0x1bd1b4u: goto label_1bd1b4;
        case 0x1bd1b8u: goto label_1bd1b8;
        case 0x1bd1bcu: goto label_1bd1bc;
        case 0x1bd1c0u: goto label_1bd1c0;
        case 0x1bd1c4u: goto label_1bd1c4;
        case 0x1bd1c8u: goto label_1bd1c8;
        case 0x1bd1ccu: goto label_1bd1cc;
        case 0x1bd1d0u: goto label_1bd1d0;
        case 0x1bd1d4u: goto label_1bd1d4;
        case 0x1bd1d8u: goto label_1bd1d8;
        case 0x1bd1dcu: goto label_1bd1dc;
        case 0x1bd1e0u: goto label_1bd1e0;
        case 0x1bd1e4u: goto label_1bd1e4;
        case 0x1bd1e8u: goto label_1bd1e8;
        case 0x1bd1ecu: goto label_1bd1ec;
        default: break;
    }

    ctx->pc = 0x1bd0f0u;

label_1bd0f0:
    // 0x1bd0f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bd0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1bd0f4:
    // 0x1bd0f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bd0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1bd0f8:
    // 0x1bd0f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bd0f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bd0fc:
    // 0x1bd0fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bd0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1bd100:
    // 0x1bd100: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1bd100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1bd104:
    // 0x1bd104: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1bd104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1bd108:
    // 0x1bd108: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1bd108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1bd10c:
    // 0x1bd10c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1bd10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_1bd110:
    // 0x1bd110: 0x8202006c  lb          $v0, 0x6C($s0)
    ctx->pc = 0x1bd110u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 108)));
label_1bd114:
    // 0x1bd114: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1bd118:
    if (ctx->pc == 0x1BD118u) {
        ctx->pc = 0x1BD11Cu;
        goto label_1bd11c;
    }
    ctx->pc = 0x1BD114u;
    {
        const bool branch_taken_0x1bd114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd114) {
            ctx->pc = 0x1BD14Cu;
            goto label_1bd14c;
        }
    }
    ctx->pc = 0x1BD11Cu;
label_1bd11c:
    // 0x1bd11c: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x1bd11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_1bd120:
    // 0x1bd120: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1bd124:
    if (ctx->pc == 0x1BD124u) {
        ctx->pc = 0x1BD128u;
        goto label_1bd128;
    }
    ctx->pc = 0x1BD120u;
    {
        const bool branch_taken_0x1bd120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd120) {
            ctx->pc = 0x1BD14Cu;
            goto label_1bd14c;
        }
    }
    ctx->pc = 0x1BD128u;
label_1bd128:
    // 0x1bd128: 0xc06d82e  jal         func_1B60B8
label_1bd12c:
    if (ctx->pc == 0x1BD12Cu) {
        ctx->pc = 0x1BD12Cu;
            // 0x1bd12c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x1BD130u;
        goto label_1bd130;
    }
    ctx->pc = 0x1BD128u;
    SET_GPR_U32(ctx, 31, 0x1BD130u);
    ctx->pc = 0x1BD12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD128u;
            // 0x1bd12c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B60B8u;
    if (runtime->hasFunction(0x1B60B8u)) {
        auto targetFn = runtime->lookupFunction(0x1B60B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD130u; }
        if (ctx->pc != 0x1BD130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B60B8_0x1b60b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD130u; }
        if (ctx->pc != 0x1BD130u) { return; }
    }
    ctx->pc = 0x1BD130u;
label_1bd130:
    // 0x1bd130: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x1bd130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_1bd134:
    // 0x1bd134: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1bd134u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1bd138:
    // 0x1bd138: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1bd13c:
    if (ctx->pc == 0x1BD13Cu) {
        ctx->pc = 0x1BD140u;
        goto label_1bd140;
    }
    ctx->pc = 0x1BD138u;
    {
        const bool branch_taken_0x1bd138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd138) {
            ctx->pc = 0x1BD14Cu;
            goto label_1bd14c;
        }
    }
    ctx->pc = 0x1BD140u;
label_1bd140:
    // 0x1bd140: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1bd140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1bd144:
    // 0x1bd144: 0xc06d884  jal         func_1B6210
label_1bd148:
    if (ctx->pc == 0x1BD148u) {
        ctx->pc = 0x1BD148u;
            // 0x1bd148: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1BD14Cu;
        goto label_1bd14c;
    }
    ctx->pc = 0x1BD144u;
    SET_GPR_U32(ctx, 31, 0x1BD14Cu);
    ctx->pc = 0x1BD148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD144u;
            // 0x1bd148: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6210u;
    if (runtime->hasFunction(0x1B6210u)) {
        auto targetFn = runtime->lookupFunction(0x1B6210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD14Cu; }
        if (ctx->pc != 0x1BD14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6210_0x1b6210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD14Cu; }
        if (ctx->pc != 0x1BD14Cu) { return; }
    }
    ctx->pc = 0x1BD14Cu;
label_1bd14c:
    // 0x1bd14c: 0xc06d446  jal         func_1B5118
label_1bd150:
    if (ctx->pc == 0x1BD150u) {
        ctx->pc = 0x1BD150u;
            // 0x1bd150: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x1BD154u;
        goto label_1bd154;
    }
    ctx->pc = 0x1BD14Cu;
    SET_GPR_U32(ctx, 31, 0x1BD154u);
    ctx->pc = 0x1BD150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD14Cu;
            // 0x1bd150: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5118u;
    if (runtime->hasFunction(0x1B5118u)) {
        auto targetFn = runtime->lookupFunction(0x1B5118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD154u; }
        if (ctx->pc != 0x1BD154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5118_0x1b5118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD154u; }
        if (ctx->pc != 0x1BD154u) { return; }
    }
    ctx->pc = 0x1BD154u;
label_1bd154:
    // 0x1bd154: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bd154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1bd158:
    // 0x1bd158: 0x5443001d  bnel        $v0, $v1, . + 4 + (0x1D << 2)
label_1bd15c:
    if (ctx->pc == 0x1BD15Cu) {
        ctx->pc = 0x1BD15Cu;
            // 0x1bd15c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1BD160u;
        goto label_1bd160;
    }
    ctx->pc = 0x1BD158u;
    {
        const bool branch_taken_0x1bd158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bd158) {
            ctx->pc = 0x1BD15Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD158u;
            // 0x1bd15c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BD1D0u;
            goto label_1bd1d0;
        }
    }
    ctx->pc = 0x1BD160u;
label_1bd160:
    // 0x1bd160: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1bd160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1bd164:
    // 0x1bd164: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1bd164u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bd168:
    // 0x1bd168: 0x3c140038  lui         $s4, 0x38
    ctx->pc = 0x1bd168u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)56 << 16));
label_1bd16c:
    // 0x1bd16c: 0xc06d89c  jal         func_1B6270
label_1bd170:
    if (ctx->pc == 0x1BD170u) {
        ctx->pc = 0x1BD170u;
            // 0x1bd170: 0x26110018  addiu       $s1, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->pc = 0x1BD174u;
        goto label_1bd174;
    }
    ctx->pc = 0x1BD16Cu;
    SET_GPR_U32(ctx, 31, 0x1BD174u);
    ctx->pc = 0x1BD170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD16Cu;
            // 0x1bd170: 0x26110018  addiu       $s1, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6270u;
    if (runtime->hasFunction(0x1B6270u)) {
        auto targetFn = runtime->lookupFunction(0x1B6270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD174u; }
        if (ctx->pc != 0x1BD174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6270_0x1b6270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD174u; }
        if (ctx->pc != 0x1BD174u) { return; }
    }
    ctx->pc = 0x1BD174u;
label_1bd174:
    // 0x1bd174: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1bd174u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bd178:
    // 0x1bd178: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1bd178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1bd17c:
    // 0x1bd17c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1bd180:
    if (ctx->pc == 0x1BD180u) {
        ctx->pc = 0x1BD180u;
            // 0x1bd180: 0xac52c3bc  sw          $s2, -0x3C44($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294951868), GPR_U32(ctx, 18));
        ctx->pc = 0x1BD184u;
        goto label_1bd184;
    }
    ctx->pc = 0x1BD17Cu;
    {
        const bool branch_taken_0x1bd17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD17Cu;
            // 0x1bd180: 0xac52c3bc  sw          $s2, -0x3C44($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294951868), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd17c) {
            ctx->pc = 0x1BD18Cu;
            goto label_1bd18c;
        }
    }
    ctx->pc = 0x1BD184u;
label_1bd184:
    // 0x1bd184: 0x0  nop
    ctx->pc = 0x1bd184u;
    // NOP
label_1bd188:
    // 0x1bd188: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1bd188u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1bd18c:
    // 0x1bd18c: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x1bd18cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_1bd190:
    // 0x1bd190: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1bd194:
    if (ctx->pc == 0x1BD194u) {
        ctx->pc = 0x1BD198u;
        goto label_1bd198;
    }
    ctx->pc = 0x1BD190u;
    {
        const bool branch_taken_0x1bd190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd190) {
            ctx->pc = 0x1BD1BCu;
            goto label_1bd1bc;
        }
    }
    ctx->pc = 0x1BD198u;
label_1bd198:
    // 0x1bd198: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1bd198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1bd19c:
    // 0x1bd19c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1bd19cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1bd1a0:
    // 0x1bd1a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1bd1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1bd1a4:
    // 0x1bd1a4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1bd1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1bd1a8:
    // 0x1bd1a8: 0x40f809  jalr        $v0
label_1bd1ac:
    if (ctx->pc == 0x1BD1ACu) {
        ctx->pc = 0x1BD1ACu;
            // 0x1bd1ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1BD1B0u;
        goto label_1bd1b0;
    }
    ctx->pc = 0x1BD1A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BD1B0u);
        ctx->pc = 0x1BD1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD1A8u;
            // 0x1bd1ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BD1B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BD1B0u; }
            if (ctx->pc != 0x1BD1B0u) { return; }
        }
        }
    }
    ctx->pc = 0x1BD1B0u;
label_1bd1b0:
    // 0x1bd1b0: 0x28430040  slti        $v1, $v0, 0x40
    ctx->pc = 0x1bd1b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
label_1bd1b4:
    // 0x1bd1b4: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_1bd1b8:
    if (ctx->pc == 0x1BD1B8u) {
        ctx->pc = 0x1BD1B8u;
            // 0x1bd1b8: 0xae82c3c0  sw          $v0, -0x3C40($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294951872), GPR_U32(ctx, 2));
        ctx->pc = 0x1BD1BCu;
        goto label_1bd1bc;
    }
    ctx->pc = 0x1BD1B4u;
    {
        const bool branch_taken_0x1bd1b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD1B4u;
            // 0x1bd1b8: 0xae82c3c0  sw          $v0, -0x3C40($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294951872), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd1b4) {
            ctx->pc = 0x1BD188u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bd188;
        }
    }
    ctx->pc = 0x1BD1BCu;
label_1bd1bc:
    // 0x1bd1bc: 0x56720004  bnel        $s3, $s2, . + 4 + (0x4 << 2)
label_1bd1c0:
    if (ctx->pc == 0x1BD1C0u) {
        ctx->pc = 0x1BD1C0u;
            // 0x1bd1c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1BD1C4u;
        goto label_1bd1c4;
    }
    ctx->pc = 0x1BD1BCu;
    {
        const bool branch_taken_0x1bd1bc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 18));
        if (branch_taken_0x1bd1bc) {
            ctx->pc = 0x1BD1C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD1BCu;
            // 0x1bd1c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BD1D0u;
            goto label_1bd1d0;
        }
    }
    ctx->pc = 0x1BD1C4u;
label_1bd1c4:
    // 0x1bd1c4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1bd1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1bd1c8:
    // 0x1bd1c8: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1bd1c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_1bd1cc:
    // 0x1bd1cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bd1ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bd1d0:
    // 0x1bd1d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bd1d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1bd1d4:
    // 0x1bd1d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bd1d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1bd1d8:
    // 0x1bd1d8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1bd1d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1bd1dc:
    // 0x1bd1dc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1bd1dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1bd1e0:
    // 0x1bd1e0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1bd1e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1bd1e4:
    // 0x1bd1e4: 0x3e00008  jr          $ra
label_1bd1e8:
    if (ctx->pc == 0x1BD1E8u) {
        ctx->pc = 0x1BD1E8u;
            // 0x1bd1e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1BD1ECu;
        goto label_1bd1ec;
    }
    ctx->pc = 0x1BD1E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD1E4u;
            // 0x1bd1e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BD1ECu;
label_1bd1ec:
    // 0x1bd1ec: 0x0  nop
    ctx->pc = 0x1bd1ecu;
    // NOP
    ctx->pc = 0x1bd1f0u;
}
