#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BE0E0
// Address: 0x1be0e0 - 0x1be248
void sub_001BE0E0_0x1be0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE0E0_0x1be0e0");
#endif

    switch (ctx->pc) {
        case 0x1be0e0u: goto label_1be0e0;
        case 0x1be0e4u: goto label_1be0e4;
        case 0x1be0e8u: goto label_1be0e8;
        case 0x1be0ecu: goto label_1be0ec;
        case 0x1be0f0u: goto label_1be0f0;
        case 0x1be0f4u: goto label_1be0f4;
        case 0x1be0f8u: goto label_1be0f8;
        case 0x1be0fcu: goto label_1be0fc;
        case 0x1be100u: goto label_1be100;
        case 0x1be104u: goto label_1be104;
        case 0x1be108u: goto label_1be108;
        case 0x1be10cu: goto label_1be10c;
        case 0x1be110u: goto label_1be110;
        case 0x1be114u: goto label_1be114;
        case 0x1be118u: goto label_1be118;
        case 0x1be11cu: goto label_1be11c;
        case 0x1be120u: goto label_1be120;
        case 0x1be124u: goto label_1be124;
        case 0x1be128u: goto label_1be128;
        case 0x1be12cu: goto label_1be12c;
        case 0x1be130u: goto label_1be130;
        case 0x1be134u: goto label_1be134;
        case 0x1be138u: goto label_1be138;
        case 0x1be13cu: goto label_1be13c;
        case 0x1be140u: goto label_1be140;
        case 0x1be144u: goto label_1be144;
        case 0x1be148u: goto label_1be148;
        case 0x1be14cu: goto label_1be14c;
        case 0x1be150u: goto label_1be150;
        case 0x1be154u: goto label_1be154;
        case 0x1be158u: goto label_1be158;
        case 0x1be15cu: goto label_1be15c;
        case 0x1be160u: goto label_1be160;
        case 0x1be164u: goto label_1be164;
        case 0x1be168u: goto label_1be168;
        case 0x1be16cu: goto label_1be16c;
        case 0x1be170u: goto label_1be170;
        case 0x1be174u: goto label_1be174;
        case 0x1be178u: goto label_1be178;
        case 0x1be17cu: goto label_1be17c;
        case 0x1be180u: goto label_1be180;
        case 0x1be184u: goto label_1be184;
        case 0x1be188u: goto label_1be188;
        case 0x1be18cu: goto label_1be18c;
        case 0x1be190u: goto label_1be190;
        case 0x1be194u: goto label_1be194;
        case 0x1be198u: goto label_1be198;
        case 0x1be19cu: goto label_1be19c;
        case 0x1be1a0u: goto label_1be1a0;
        case 0x1be1a4u: goto label_1be1a4;
        case 0x1be1a8u: goto label_1be1a8;
        case 0x1be1acu: goto label_1be1ac;
        case 0x1be1b0u: goto label_1be1b0;
        case 0x1be1b4u: goto label_1be1b4;
        case 0x1be1b8u: goto label_1be1b8;
        case 0x1be1bcu: goto label_1be1bc;
        case 0x1be1c0u: goto label_1be1c0;
        case 0x1be1c4u: goto label_1be1c4;
        case 0x1be1c8u: goto label_1be1c8;
        case 0x1be1ccu: goto label_1be1cc;
        case 0x1be1d0u: goto label_1be1d0;
        case 0x1be1d4u: goto label_1be1d4;
        case 0x1be1d8u: goto label_1be1d8;
        case 0x1be1dcu: goto label_1be1dc;
        case 0x1be1e0u: goto label_1be1e0;
        case 0x1be1e4u: goto label_1be1e4;
        case 0x1be1e8u: goto label_1be1e8;
        case 0x1be1ecu: goto label_1be1ec;
        case 0x1be1f0u: goto label_1be1f0;
        case 0x1be1f4u: goto label_1be1f4;
        case 0x1be1f8u: goto label_1be1f8;
        case 0x1be1fcu: goto label_1be1fc;
        case 0x1be200u: goto label_1be200;
        case 0x1be204u: goto label_1be204;
        case 0x1be208u: goto label_1be208;
        case 0x1be20cu: goto label_1be20c;
        case 0x1be210u: goto label_1be210;
        case 0x1be214u: goto label_1be214;
        case 0x1be218u: goto label_1be218;
        case 0x1be21cu: goto label_1be21c;
        case 0x1be220u: goto label_1be220;
        case 0x1be224u: goto label_1be224;
        case 0x1be228u: goto label_1be228;
        case 0x1be22cu: goto label_1be22c;
        case 0x1be230u: goto label_1be230;
        case 0x1be234u: goto label_1be234;
        case 0x1be238u: goto label_1be238;
        case 0x1be23cu: goto label_1be23c;
        case 0x1be240u: goto label_1be240;
        case 0x1be244u: goto label_1be244;
        default: break;
    }

    ctx->pc = 0x1be0e0u;

label_1be0e0:
    // 0x1be0e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1be0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1be0e4:
    // 0x1be0e4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1be0e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1be0e8:
    // 0x1be0e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1be0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1be0ec:
    // 0x1be0ec: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1be0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_1be0f0:
    // 0x1be0f0: 0x2484c7c8  addiu       $a0, $a0, -0x3838
    ctx->pc = 0x1be0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952904));
label_1be0f4:
    // 0x1be0f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1be0f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1be0f8:
    // 0x1be0f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be0f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1be0fc:
    // 0x1be0fc: 0x806f82c  j           func_1BE0B0
label_1be100:
    if (ctx->pc == 0x1BE100u) {
        ctx->pc = 0x1BE100u;
            // 0x1be100: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1BE104u;
        goto label_1be104;
    }
    ctx->pc = 0x1BE0FCu;
    ctx->pc = 0x1BE100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE0FCu;
            // 0x1be100: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0B0u;
    {
        auto targetFn = runtime->lookupFunction(0x1BE0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1BE104u;
label_1be104:
    // 0x1be104: 0x0  nop
    ctx->pc = 0x1be104u;
    // NOP
label_1be108:
    // 0x1be108: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1be108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1be10c:
    // 0x1be10c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1be10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1be110:
    // 0x1be110: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1be110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1be114:
    // 0x1be114: 0x2451c7cc  addiu       $s1, $v0, -0x3834
    ctx->pc = 0x1be114u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952908));
label_1be118:
    // 0x1be118: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1be118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1be11c:
    // 0x1be11c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1be11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1be120:
    // 0x1be120: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_1be124:
    if (ctx->pc == 0x1BE124u) {
        ctx->pc = 0x1BE124u;
            // 0x1be124: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->pc = 0x1BE128u;
        goto label_1be128;
    }
    ctx->pc = 0x1BE120u;
    {
        const bool branch_taken_0x1be120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE120u;
            // 0x1be124: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be120) {
            ctx->pc = 0x1BE170u;
            goto label_1be170;
        }
    }
    ctx->pc = 0x1BE128u;
label_1be128:
    // 0x1be128: 0x3c0401bf  lui         $a0, 0x1BF
    ctx->pc = 0x1be128u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)447 << 16));
label_1be12c:
    // 0x1be12c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1be12cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1be130:
    // 0x1be130: 0x24845450  addiu       $a0, $a0, 0x5450
    ctx->pc = 0x1be130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21584));
label_1be134:
    // 0x1be134: 0xc049cb6  jal         func_1272D8
label_1be138:
    if (ctx->pc == 0x1BE138u) {
        ctx->pc = 0x1BE138u;
            // 0x1be138: 0x24060140  addiu       $a2, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->pc = 0x1BE13Cu;
        goto label_1be13c;
    }
    ctx->pc = 0x1BE134u;
    SET_GPR_U32(ctx, 31, 0x1BE13Cu);
    ctx->pc = 0x1BE138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE134u;
            // 0x1be138: 0x24060140  addiu       $a2, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE13Cu; }
        if (ctx->pc != 0x1BE13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE13Cu; }
        if (ctx->pc != 0x1BE13Cu) { return; }
    }
    ctx->pc = 0x1BE13Cu;
label_1be13c:
    // 0x1be13c: 0x3c0401bf  lui         $a0, 0x1BF
    ctx->pc = 0x1be13cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)447 << 16));
label_1be140:
    // 0x1be140: 0x3c1001bf  lui         $s0, 0x1BF
    ctx->pc = 0x1be140u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)447 << 16));
label_1be144:
    // 0x1be144: 0x24845590  addiu       $a0, $a0, 0x5590
    ctx->pc = 0x1be144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21904));
label_1be148:
    // 0x1be148: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1be148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1be14c:
    // 0x1be14c: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x1be14cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_1be150:
    // 0x1be150: 0xc049cb6  jal         func_1272D8
label_1be154:
    if (ctx->pc == 0x1BE154u) {
        ctx->pc = 0x1BE154u;
            // 0x1be154: 0x26105790  addiu       $s0, $s0, 0x5790 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22416));
        ctx->pc = 0x1BE158u;
        goto label_1be158;
    }
    ctx->pc = 0x1BE150u;
    SET_GPR_U32(ctx, 31, 0x1BE158u);
    ctx->pc = 0x1BE154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE150u;
            // 0x1be154: 0x26105790  addiu       $s0, $s0, 0x5790 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE158u; }
        if (ctx->pc != 0x1BE158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE158u; }
        if (ctx->pc != 0x1BE158u) { return; }
    }
    ctx->pc = 0x1BE158u;
label_1be158:
    // 0x1be158: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1be158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1be15c:
    // 0x1be15c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1be15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1be160:
    // 0x1be160: 0xc049cb6  jal         func_1272D8
label_1be164:
    if (ctx->pc == 0x1BE164u) {
        ctx->pc = 0x1BE164u;
            // 0x1be164: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x1BE168u;
        goto label_1be168;
    }
    ctx->pc = 0x1BE160u;
    SET_GPR_U32(ctx, 31, 0x1BE168u);
    ctx->pc = 0x1BE164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE160u;
            // 0x1be164: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE168u; }
        if (ctx->pc != 0x1BE168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE168u; }
        if (ctx->pc != 0x1BE168u) { return; }
    }
    ctx->pc = 0x1BE168u;
label_1be168:
    // 0x1be168: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1be168u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_1be16c:
    // 0x1be16c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1be16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1be170:
    // 0x1be170: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1be170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1be174:
    // 0x1be174: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1be174u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1be178:
    // 0x1be178: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1be178u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1be17c:
    // 0x1be17c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1be17cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1be180:
    // 0x1be180: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1be180u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1be184:
    // 0x1be184: 0x3e00008  jr          $ra
label_1be188:
    if (ctx->pc == 0x1BE188u) {
        ctx->pc = 0x1BE188u;
            // 0x1be188: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1BE18Cu;
        goto label_1be18c;
    }
    ctx->pc = 0x1BE184u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE184u;
            // 0x1be188: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BE18Cu;
label_1be18c:
    // 0x1be18c: 0x0  nop
    ctx->pc = 0x1be18cu;
    // NOP
label_1be190:
    // 0x1be190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1be190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1be194:
    // 0x1be194: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1be194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
label_1be198:
    // 0x1be198: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1be198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1be19c:
    // 0x1be19c: 0x2463c7cc  addiu       $v1, $v1, -0x3834
    ctx->pc = 0x1be19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952908));
label_1be1a0:
    // 0x1be1a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1be1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1be1a4:
    // 0x1be1a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1be1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1be1a8:
    // 0x1be1a8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1be1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1be1ac:
    // 0x1be1ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1be1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1be1b0:
    // 0x1be1b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1be1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1be1b4:
    // 0x1be1b4: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_1be1b8:
    if (ctx->pc == 0x1BE1B8u) {
        ctx->pc = 0x1BE1B8u;
            // 0x1be1b8: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1BE1BCu;
        goto label_1be1bc;
    }
    ctx->pc = 0x1BE1B4u;
    {
        const bool branch_taken_0x1be1b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE1B4u;
            // 0x1be1b8: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be1b4) {
            ctx->pc = 0x1BE22Cu;
            goto label_1be22c;
        }
    }
    ctx->pc = 0x1BE1BCu;
label_1be1bc:
    // 0x1be1bc: 0x3c1201bf  lui         $s2, 0x1BF
    ctx->pc = 0x1be1bcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)447 << 16));
label_1be1c0:
    // 0x1be1c0: 0x24110027  addiu       $s1, $zero, 0x27
    ctx->pc = 0x1be1c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_1be1c4:
    // 0x1be1c4: 0x26505450  addiu       $s0, $s2, 0x5450
    ctx->pc = 0x1be1c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 21584));
label_1be1c8:
    // 0x1be1c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1be1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1be1cc:
    // 0x1be1cc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1be1d0:
    if (ctx->pc == 0x1BE1D0u) {
        ctx->pc = 0x1BE1D0u;
            // 0x1be1d0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x1BE1D4u;
        goto label_1be1d4;
    }
    ctx->pc = 0x1BE1CCu;
    {
        const bool branch_taken_0x1be1cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be1cc) {
            ctx->pc = 0x1BE1D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE1CCu;
            // 0x1be1d0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BE1E4u;
            goto label_1be1e4;
        }
    }
    ctx->pc = 0x1BE1D4u;
label_1be1d4:
    // 0x1be1d4: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1be1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1be1d8:
    // 0x1be1d8: 0x40f809  jalr        $v0
label_1be1dc:
    if (ctx->pc == 0x1BE1DCu) {
        ctx->pc = 0x1BE1DCu;
            // 0x1be1dc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x1BE1E0u;
        goto label_1be1e0;
    }
    ctx->pc = 0x1BE1D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BE1E0u);
        ctx->pc = 0x1BE1DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE1D8u;
            // 0x1be1dc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BE1E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BE1E0u; }
            if (ctx->pc != 0x1BE1E0u) { return; }
        }
        }
    }
    ctx->pc = 0x1BE1E0u;
label_1be1e0:
    // 0x1be1e0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1be1e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1be1e4:
    // 0x1be1e4: 0x621fff8  bgez        $s1, . + 4 + (-0x8 << 2)
label_1be1e8:
    if (ctx->pc == 0x1BE1E8u) {
        ctx->pc = 0x1BE1E8u;
            // 0x1be1e8: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x1BE1ECu;
        goto label_1be1ec;
    }
    ctx->pc = 0x1BE1E4u;
    {
        const bool branch_taken_0x1be1e4 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1BE1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE1E4u;
            // 0x1be1e8: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be1e4) {
            ctx->pc = 0x1BE1C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1be1c8;
        }
    }
    ctx->pc = 0x1BE1ECu;
label_1be1ec:
    // 0x1be1ec: 0x26445450  addiu       $a0, $s2, 0x5450
    ctx->pc = 0x1be1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 21584));
label_1be1f0:
    // 0x1be1f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1be1f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1be1f4:
    // 0x1be1f4: 0x24060140  addiu       $a2, $zero, 0x140
    ctx->pc = 0x1be1f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_1be1f8:
    // 0x1be1f8: 0xc049cb6  jal         func_1272D8
label_1be1fc:
    if (ctx->pc == 0x1BE1FCu) {
        ctx->pc = 0x1BE1FCu;
            // 0x1be1fc: 0x3c1001bf  lui         $s0, 0x1BF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)447 << 16));
        ctx->pc = 0x1BE200u;
        goto label_1be200;
    }
    ctx->pc = 0x1BE1F8u;
    SET_GPR_U32(ctx, 31, 0x1BE200u);
    ctx->pc = 0x1BE1FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE1F8u;
            // 0x1be1fc: 0x3c1001bf  lui         $s0, 0x1BF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)447 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE200u; }
        if (ctx->pc != 0x1BE200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE200u; }
        if (ctx->pc != 0x1BE200u) { return; }
    }
    ctx->pc = 0x1BE200u;
label_1be200:
    // 0x1be200: 0x3c0401bf  lui         $a0, 0x1BF
    ctx->pc = 0x1be200u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)447 << 16));
label_1be204:
    // 0x1be204: 0x24845590  addiu       $a0, $a0, 0x5590
    ctx->pc = 0x1be204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21904));
label_1be208:
    // 0x1be208: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1be208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1be20c:
    // 0x1be20c: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x1be20cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_1be210:
    // 0x1be210: 0xc049cb6  jal         func_1272D8
label_1be214:
    if (ctx->pc == 0x1BE214u) {
        ctx->pc = 0x1BE214u;
            // 0x1be214: 0x26105790  addiu       $s0, $s0, 0x5790 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22416));
        ctx->pc = 0x1BE218u;
        goto label_1be218;
    }
    ctx->pc = 0x1BE210u;
    SET_GPR_U32(ctx, 31, 0x1BE218u);
    ctx->pc = 0x1BE214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE210u;
            // 0x1be214: 0x26105790  addiu       $s0, $s0, 0x5790 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE218u; }
        if (ctx->pc != 0x1BE218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE218u; }
        if (ctx->pc != 0x1BE218u) { return; }
    }
    ctx->pc = 0x1BE218u;
label_1be218:
    // 0x1be218: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1be218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1be21c:
    // 0x1be21c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1be21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1be220:
    // 0x1be220: 0xc049cb6  jal         func_1272D8
label_1be224:
    if (ctx->pc == 0x1BE224u) {
        ctx->pc = 0x1BE224u;
            // 0x1be224: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x1BE228u;
        goto label_1be228;
    }
    ctx->pc = 0x1BE220u;
    SET_GPR_U32(ctx, 31, 0x1BE228u);
    ctx->pc = 0x1BE224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE220u;
            // 0x1be224: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE228u; }
        if (ctx->pc != 0x1BE228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE228u; }
        if (ctx->pc != 0x1BE228u) { return; }
    }
    ctx->pc = 0x1BE228u;
label_1be228:
    // 0x1be228: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1be228u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_1be22c:
    // 0x1be22c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1be22cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1be230:
    // 0x1be230: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1be230u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1be234:
    // 0x1be234: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1be234u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1be238:
    // 0x1be238: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1be238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1be23c:
    // 0x1be23c: 0x3e00008  jr          $ra
label_1be240:
    if (ctx->pc == 0x1BE240u) {
        ctx->pc = 0x1BE240u;
            // 0x1be240: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1BE244u;
        goto label_1be244;
    }
    ctx->pc = 0x1BE23Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE23Cu;
            // 0x1be240: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BE244u;
label_1be244:
    // 0x1be244: 0x0  nop
    ctx->pc = 0x1be244u;
    // NOP
    ctx->pc = 0x1be248u;
}
