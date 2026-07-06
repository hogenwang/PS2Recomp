#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013B910
// Address: 0x13b910 - 0x13bc90
void sub_0013B910_0x13b910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B910_0x13b910");
#endif

    switch (ctx->pc) {
        case 0x13b93cu: goto label_13b93c;
        case 0x13b970u: goto label_13b970;
        case 0x13b984u: goto label_13b984;
        case 0x13b99cu: goto label_13b99c;
        case 0x13b9d4u: goto label_13b9d4;
        case 0x13ba68u: goto label_13ba68;
        case 0x13ba80u: goto label_13ba80;
        case 0x13baacu: goto label_13baac;
        case 0x13bb38u: goto label_13bb38;
        case 0x13bbb8u: goto label_13bbb8;
        case 0x13bbc0u: goto label_13bbc0;
        case 0x13bbccu: goto label_13bbcc;
        case 0x13bbd4u: goto label_13bbd4;
        case 0x13bc0cu: goto label_13bc0c;
        case 0x13bc18u: goto label_13bc18;
        case 0x13bc68u: goto label_13bc68;
        default: break;
    }

    ctx->pc = 0x13b910u;

    // 0x13b910: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13b910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13b914: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13b914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13b918: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13b918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13b91c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13b91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13b920: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13b920u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b924: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x13B924u;
    {
        const bool branch_taken_0x13b924 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B924u;
            // 0x13b928: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b924) {
            ctx->pc = 0x13B934u;
            goto label_13b934;
        }
    }
    ctx->pc = 0x13B92Cu;
    // 0x13b92c: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x13B92Cu;
    {
        const bool branch_taken_0x13b92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B92Cu;
            // 0x13b930: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b92c) {
            ctx->pc = 0x13BC6Cu;
            goto label_13bc6c;
        }
    }
    ctx->pc = 0x13B934u;
label_13b934:
    // 0x13b934: 0xc062804  jal         func_18A010
    ctx->pc = 0x13B934u;
    SET_GPR_U32(ctx, 31, 0x13B93Cu);
    ctx->pc = 0x13B938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13B934u;
            // 0x13b938: 0x8e4400dc  lw          $a0, 0xDC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (runtime->hasFunction(0x18A010u)) {
        auto targetFn = runtime->lookupFunction(0x18A010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B93Cu; }
        if (ctx->pc != 0x13B93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A010_0x18a010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B93Cu; }
        if (ctx->pc != 0x13B93Cu) { return; }
    }
    ctx->pc = 0x13B93Cu;
label_13b93c:
    // 0x13b93c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13B93Cu;
    {
        const bool branch_taken_0x13b93c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b93c) {
            ctx->pc = 0x13B940u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13B93Cu;
            // 0x13b940: 0x8e420498  lw          $v0, 0x498($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13B94Cu;
            goto label_13b94c;
        }
    }
    ctx->pc = 0x13B944u;
    // 0x13b944: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x13B944u;
    {
        const bool branch_taken_0x13b944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B944u;
            // 0x13b948: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b944) {
            ctx->pc = 0x13BC6Cu;
            goto label_13bc6c;
        }
    }
    ctx->pc = 0x13B94Cu;
label_13b94c:
    // 0x13b94c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x13b94cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x13b950: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x13B950u;
    {
        const bool branch_taken_0x13b950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b950) {
            ctx->pc = 0x13B954u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13B950u;
            // 0x13b954: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13B97Cu;
            goto label_13b97c;
        }
    }
    ctx->pc = 0x13B958u;
    // 0x13b958: 0x9243025e  lbu         $v1, 0x25E($s2)
    ctx->pc = 0x13b958u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 606)));
    // 0x13b95c: 0x924200f7  lbu         $v0, 0xF7($s2)
    ctx->pc = 0x13b95cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 247)));
    // 0x13b960: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13B960u;
    {
        const bool branch_taken_0x13b960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13b960) {
            ctx->pc = 0x13B978u;
            goto label_13b978;
        }
    }
    ctx->pc = 0x13B968u;
    // 0x13b968: 0xc04ee24  jal         func_13B890
    ctx->pc = 0x13B968u;
    SET_GPR_U32(ctx, 31, 0x13B970u);
    ctx->pc = 0x13B96Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13B968u;
            // 0x13b96c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B890u;
    if (runtime->hasFunction(0x13B890u)) {
        auto targetFn = runtime->lookupFunction(0x13B890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B970u; }
        if (ctx->pc != 0x13B970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013B890_0x13b890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B970u; }
        if (ctx->pc != 0x13B970u) { return; }
    }
    ctx->pc = 0x13B970u;
label_13b970:
    // 0x13b970: 0x924200f7  lbu         $v0, 0xF7($s2)
    ctx->pc = 0x13b970u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 247)));
    // 0x13b974: 0xa242025e  sb          $v0, 0x25E($s2)
    ctx->pc = 0x13b974u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 606), (uint8_t)GPR_U32(ctx, 2));
label_13b978:
    // 0x13b978: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13b978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13b97c:
    // 0x13b97c: 0xc0cdbf8  jal         func_336FE0
    ctx->pc = 0x13B97Cu;
    SET_GPR_U32(ctx, 31, 0x13B984u);
    ctx->pc = 0x336FE0u;
    if (runtime->hasFunction(0x336FE0u)) {
        auto targetFn = runtime->lookupFunction(0x336FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B984u; }
        if (ctx->pc != 0x13B984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00336FE0_0x336fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B984u; }
        if (ctx->pc != 0x13B984u) { return; }
    }
    ctx->pc = 0x13B984u;
label_13b984:
    // 0x13b984: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13B984u;
    {
        const bool branch_taken_0x13b984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b984) {
            ctx->pc = 0x13B988u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13B984u;
            // 0x13b988: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13B994u;
            goto label_13b994;
        }
    }
    ctx->pc = 0x13B98Cu;
    // 0x13b98c: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x13B98Cu;
    {
        const bool branch_taken_0x13b98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B98Cu;
            // 0x13b990: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b98c) {
            ctx->pc = 0x13BC6Cu;
            goto label_13bc6c;
        }
    }
    ctx->pc = 0x13B994u;
label_13b994:
    // 0x13b994: 0xc0d50fc  jal         func_3543F0
    ctx->pc = 0x13B994u;
    SET_GPR_U32(ctx, 31, 0x13B99Cu);
    ctx->pc = 0x3543F0u;
    if (runtime->hasFunction(0x3543F0u)) {
        auto targetFn = runtime->lookupFunction(0x3543F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B99Cu; }
        if (ctx->pc != 0x13B99Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003543F0_0x3543f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B99Cu; }
        if (ctx->pc != 0x13B99Cu) { return; }
    }
    ctx->pc = 0x13B99Cu;
label_13b99c:
    // 0x13b99c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13B99Cu;
    {
        const bool branch_taken_0x13b99c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b99c) {
            ctx->pc = 0x13B9A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13B99Cu;
            // 0x13b9a0: 0x86430242  lh          $v1, 0x242($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 578)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13B9ACu;
            goto label_13b9ac;
        }
    }
    ctx->pc = 0x13B9A4u;
    // 0x13b9a4: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x13B9A4u;
    {
        const bool branch_taken_0x13b9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B9A4u;
            // 0x13b9a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b9a4) {
            ctx->pc = 0x13BC6Cu;
            goto label_13bc6c;
        }
    }
    ctx->pc = 0x13B9ACu;
label_13b9ac:
    // 0x13b9ac: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x13b9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x13b9b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x13b9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x13b9b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13b9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b9b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13b9b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b9bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13b9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13b9c0: 0xa6430242  sh          $v1, 0x242($s2)
    ctx->pc = 0x13b9c0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 578), (uint16_t)GPR_U32(ctx, 3));
    // 0x13b9c4: 0x8e43023c  lw          $v1, 0x23C($s2)
    ctx->pc = 0x13b9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 572)));
    // 0x13b9c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13b9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13b9cc: 0xc04f550  jal         func_13D540
    ctx->pc = 0x13B9CCu;
    SET_GPR_U32(ctx, 31, 0x13B9D4u);
    ctx->pc = 0x13B9D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13B9CCu;
            // 0x13b9d0: 0xae42023c  sw          $v0, 0x23C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 572), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D540u;
    if (runtime->hasFunction(0x13D540u)) {
        auto targetFn = runtime->lookupFunction(0x13D540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B9D4u; }
        if (ctx->pc != 0x13B9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D540_0x13d540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B9D4u; }
        if (ctx->pc != 0x13B9D4u) { return; }
    }
    ctx->pc = 0x13B9D4u;
label_13b9d4:
    // 0x13b9d4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x13b9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x13b9d8: 0xa0625cc0  sb          $v0, 0x5CC0($v1)
    ctx->pc = 0x13b9d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 23744), (uint8_t)GPR_U32(ctx, 2));
    // 0x13b9dc: 0x8e420494  lw          $v0, 0x494($s2)
    ctx->pc = 0x13b9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1172)));
    // 0x13b9e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13b9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13b9e4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x13B9E4u;
    {
        const bool branch_taken_0x13b9e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b9e4) {
            ctx->pc = 0x13B9E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13B9E4u;
            // 0x13b9e8: 0x8e420238  lw          $v0, 0x238($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 568)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13BA00u;
            goto label_13ba00;
        }
    }
    ctx->pc = 0x13B9ECu;
    // 0x13b9ec: 0x8e42048c  lw          $v0, 0x48C($s2)
    ctx->pc = 0x13b9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1164)));
    // 0x13b9f0: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x13b9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x13b9f4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x13B9F4u;
    {
        const bool branch_taken_0x13b9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b9f4) {
            ctx->pc = 0x13B9F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13B9F4u;
            // 0x13b9f8: 0x8e420494  lw          $v0, 0x494($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13BA0Cu;
            goto label_13ba0c;
        }
    }
    ctx->pc = 0x13B9FCu;
    // 0x13b9fc: 0x8e420238  lw          $v0, 0x238($s2)
    ctx->pc = 0x13b9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 568)));
label_13ba00:
    // 0x13ba00: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x13ba00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x13ba04: 0xae420238  sw          $v0, 0x238($s2)
    ctx->pc = 0x13ba04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 568), GPR_U32(ctx, 2));
    // 0x13ba08: 0x8e420494  lw          $v0, 0x494($s2)
    ctx->pc = 0x13ba08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1172)));
label_13ba0c:
    // 0x13ba0c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13ba0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13ba10: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x13BA10u;
    {
        const bool branch_taken_0x13ba10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ba10) {
            ctx->pc = 0x13BA14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13BA10u;
            // 0x13ba14: 0x8e43023c  lw          $v1, 0x23C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 572)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13BA40u;
            goto label_13ba40;
        }
    }
    ctx->pc = 0x13BA18u;
    // 0x13ba18: 0x8e42023c  lw          $v0, 0x23C($s2)
    ctx->pc = 0x13ba18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 572)));
    // 0x13ba1c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x13ba1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x13ba20: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13ba20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13ba24: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x13BA24u;
    {
        const bool branch_taken_0x13ba24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ba24) {
            ctx->pc = 0x13BA28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13BA24u;
            // 0x13ba28: 0x8e42048c  lw          $v0, 0x48C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1164)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13BA54u;
            goto label_13ba54;
        }
    }
    ctx->pc = 0x13BA2Cu;
    // 0x13ba2c: 0xae400208  sw          $zero, 0x208($s2)
    ctx->pc = 0x13ba2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 520), GPR_U32(ctx, 0));
    // 0x13ba30: 0x8e42023c  lw          $v0, 0x23C($s2)
    ctx->pc = 0x13ba30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 572)));
    // 0x13ba34: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13ba34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13ba38: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13BA38u;
    {
        const bool branch_taken_0x13ba38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BA3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BA38u;
            // 0x13ba3c: 0xae42023c  sw          $v0, 0x23C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 572), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ba38) {
            ctx->pc = 0x13BA50u;
            goto label_13ba50;
        }
    }
    ctx->pc = 0x13BA40u;
label_13ba40:
    // 0x13ba40: 0x3c02fffb  lui         $v0, 0xFFFB
    ctx->pc = 0x13ba40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65531 << 16));
    // 0x13ba44: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x13ba44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x13ba48: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13ba48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13ba4c: 0xae42023c  sw          $v0, 0x23C($s2)
    ctx->pc = 0x13ba4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 572), GPR_U32(ctx, 2));
label_13ba50:
    // 0x13ba50: 0x8e42048c  lw          $v0, 0x48C($s2)
    ctx->pc = 0x13ba50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1164)));
label_13ba54:
    // 0x13ba54: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x13ba54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x13ba58: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x13BA58u;
    {
        const bool branch_taken_0x13ba58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ba58) {
            ctx->pc = 0x13BA5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13BA58u;
            // 0x13ba5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13BA78u;
            goto label_13ba78;
        }
    }
    ctx->pc = 0x13BA60u;
    // 0x13ba60: 0xc05087c  jal         func_1421F0
    ctx->pc = 0x13BA60u;
    SET_GPR_U32(ctx, 31, 0x13BA68u);
    ctx->pc = 0x13BA64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13BA60u;
            // 0x13ba64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1421F0u;
    if (runtime->hasFunction(0x1421F0u)) {
        auto targetFn = runtime->lookupFunction(0x1421F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BA68u; }
        if (ctx->pc != 0x13BA68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001421F0_0x1421f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BA68u; }
        if (ctx->pc != 0x13BA68u) { return; }
    }
    ctx->pc = 0x13BA68u;
label_13ba68:
    // 0x13ba68: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13BA68u;
    {
        const bool branch_taken_0x13ba68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ba68) {
            ctx->pc = 0x13BA74u;
            goto label_13ba74;
        }
    }
    ctx->pc = 0x13BA70u;
    // 0x13ba70: 0xae400208  sw          $zero, 0x208($s2)
    ctx->pc = 0x13ba70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 520), GPR_U32(ctx, 0));
label_13ba74:
    // 0x13ba74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13ba74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13ba78:
    // 0x13ba78: 0xc04ef3c  jal         func_13BCF0
    ctx->pc = 0x13BA78u;
    SET_GPR_U32(ctx, 31, 0x13BA80u);
    ctx->pc = 0x13BCF0u;
    if (runtime->hasFunction(0x13BCF0u)) {
        auto targetFn = runtime->lookupFunction(0x13BCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BA80u; }
        if (ctx->pc != 0x13BA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013BCF0_0x13bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BA80u; }
        if (ctx->pc != 0x13BA80u) { return; }
    }
    ctx->pc = 0x13BA80u;
label_13ba80:
    // 0x13ba80: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x13BA80u;
    {
        const bool branch_taken_0x13ba80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ba80) {
            ctx->pc = 0x13BA84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13BA80u;
            // 0x13ba84: 0x8e420238  lw          $v0, 0x238($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 568)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13BA98u;
            goto label_13ba98;
        }
    }
    ctx->pc = 0x13BA88u;
    // 0x13ba88: 0xa6400248  sh          $zero, 0x248($s2)
    ctx->pc = 0x13ba88u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 584), (uint16_t)GPR_U32(ctx, 0));
    // 0x13ba8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13ba8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ba90: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x13BA90u;
    {
        const bool branch_taken_0x13ba90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BA90u;
            // 0x13ba94: 0xa640024a  sh          $zero, 0x24A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 586), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ba90) {
            ctx->pc = 0x13BC6Cu;
            goto label_13bc6c;
        }
    }
    ctx->pc = 0x13BA98u;
label_13ba98:
    // 0x13ba98: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x13ba98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x13ba9c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x13BA9Cu;
    {
        const bool branch_taken_0x13ba9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ba9c) {
            ctx->pc = 0x13BAA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13BA9Cu;
            // 0x13baa0: 0x86420242  lh          $v0, 0x242($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 578)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13BAC8u;
            goto label_13bac8;
        }
    }
    ctx->pc = 0x13BAA4u;
    // 0x13baa4: 0xc04efa0  jal         func_13BE80
    ctx->pc = 0x13BAA4u;
    SET_GPR_U32(ctx, 31, 0x13BAACu);
    ctx->pc = 0x13BAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13BAA4u;
            // 0x13baa8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13BE80u;
    if (runtime->hasFunction(0x13BE80u)) {
        auto targetFn = runtime->lookupFunction(0x13BE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BAACu; }
        if (ctx->pc != 0x13BAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013BE80_0x13be80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BAACu; }
        if (ctx->pc != 0x13BAACu) { return; }
    }
    ctx->pc = 0x13BAACu;
label_13baac:
    // 0x13baac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13BAACu;
    {
        const bool branch_taken_0x13baac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13baac) {
            ctx->pc = 0x13BAC4u;
            goto label_13bac4;
        }
    }
    ctx->pc = 0x13BAB4u;
    // 0x13bab4: 0xa6400248  sh          $zero, 0x248($s2)
    ctx->pc = 0x13bab4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 584), (uint16_t)GPR_U32(ctx, 0));
    // 0x13bab8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13bab8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13babc: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x13BABCu;
    {
        const bool branch_taken_0x13babc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BAC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BABCu;
            // 0x13bac0: 0xa640024a  sh          $zero, 0x24A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 586), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13babc) {
            ctx->pc = 0x13BC6Cu;
            goto label_13bc6c;
        }
    }
    ctx->pc = 0x13BAC4u;
label_13bac4:
    // 0x13bac4: 0x86420242  lh          $v0, 0x242($s2)
    ctx->pc = 0x13bac4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 578)));
label_13bac8:
    // 0x13bac8: 0x28410961  slti        $at, $v0, 0x961
    ctx->pc = 0x13bac8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2401) ? 1 : 0);
    // 0x13bacc: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13BACCu;
    {
        const bool branch_taken_0x13bacc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bacc) {
            ctx->pc = 0x13BAD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13BACCu;
            // 0x13bad0: 0x8e420208  lw          $v0, 0x208($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 520)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13BADCu;
            goto label_13badc;
        }
    }
    ctx->pc = 0x13BAD4u;
    // 0x13bad4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x13bad4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13bad8: 0x8e420208  lw          $v0, 0x208($s2)
    ctx->pc = 0x13bad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 520)));
label_13badc:
    // 0x13badc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13BADCu;
    {
        const bool branch_taken_0x13badc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13badc) {
            ctx->pc = 0x13BAE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13BADCu;
            // 0x13bae0: 0x90430000  lbu         $v1, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13BAECu;
            goto label_13baec;
        }
    }
    ctx->pc = 0x13BAE4u;
    // 0x13bae4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13BAE4u;
    {
        const bool branch_taken_0x13bae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BAE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BAE4u;
            // 0x13bae8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bae4) {
            ctx->pc = 0x13BAFCu;
            goto label_13bafc;
        }
    }
    ctx->pc = 0x13BAECu;
label_13baec:
    // 0x13baec: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x13baecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x13baf0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13BAF0u;
    {
        const bool branch_taken_0x13baf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13baf0) {
            ctx->pc = 0x13BAFCu;
            goto label_13bafc;
        }
    }
    ctx->pc = 0x13BAF8u;
    // 0x13baf8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x13baf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13bafc:
    // 0x13bafc: 0x52000031  beql        $s0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x13BAFCu;
    {
        const bool branch_taken_0x13bafc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bafc) {
            ctx->pc = 0x13BB00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13BAFCu;
            // 0x13bb00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13BBC4u;
            goto label_13bbc4;
        }
    }
    ctx->pc = 0x13BB04u;
    // 0x13bb04: 0x92430211  lbu         $v1, 0x211($s2)
    ctx->pc = 0x13bb04u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 529)));
    // 0x13bb08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x13bb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13bb0c: 0x50620019  beql        $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x13BB0Cu;
    {
        const bool branch_taken_0x13bb0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13bb0c) {
            ctx->pc = 0x13BB10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13BB0Cu;
            // 0x13bb10: 0x8e420490  lw          $v0, 0x490($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1168)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13BB74u;
            goto label_13bb74;
        }
    }
    ctx->pc = 0x13BB14u;
    // 0x13bb14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13bb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13bb18: 0x5062000e  beql        $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x13BB18u;
    {
        const bool branch_taken_0x13bb18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13bb18) {
            ctx->pc = 0x13BB1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13BB18u;
            // 0x13bb1c: 0x92420210  lbu         $v0, 0x210($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 528)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13BB54u;
            goto label_13bb54;
        }
    }
    ctx->pc = 0x13BB20u;
    // 0x13bb20: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13BB20u;
    {
        const bool branch_taken_0x13bb20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bb20) {
            ctx->pc = 0x13BB30u;
            goto label_13bb30;
        }
    }
    ctx->pc = 0x13BB28u;
    // 0x13bb28: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x13BB28u;
    {
        const bool branch_taken_0x13bb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bb28) {
            ctx->pc = 0x13BBC0u;
            goto label_13bbc0;
        }
    }
    ctx->pc = 0x13BB30u;
label_13bb30:
    // 0x13bb30: 0xc04fda0  jal         func_13F680
    ctx->pc = 0x13BB30u;
    SET_GPR_U32(ctx, 31, 0x13BB38u);
    ctx->pc = 0x13F680u;
    if (runtime->hasFunction(0x13F680u)) {
        auto targetFn = runtime->lookupFunction(0x13F680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BB38u; }
        if (ctx->pc != 0x13BB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F680_0x13f680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BB38u; }
        if (ctx->pc != 0x13BB38u) { return; }
    }
    ctx->pc = 0x13BB38u;
label_13bb38:
    // 0x13bb38: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13BB38u;
    {
        const bool branch_taken_0x13bb38 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x13bb38) {
            ctx->pc = 0x13BB3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13BB38u;
            // 0x13bb3c: 0xa2420210  sb          $v0, 0x210($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 528), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13BB48u;
            goto label_13bb48;
        }
    }
    ctx->pc = 0x13BB40u;
    // 0x13bb40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13bb40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bb44: 0xa2420210  sb          $v0, 0x210($s2)
    ctx->pc = 0x13bb44u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 528), (uint8_t)GPR_U32(ctx, 2));
label_13bb48:
    // 0x13bb48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13bb48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13bb4c: 0xa2420211  sb          $v0, 0x211($s2)
    ctx->pc = 0x13bb4cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 529), (uint8_t)GPR_U32(ctx, 2));
    // 0x13bb50: 0x92420210  lbu         $v0, 0x210($s2)
    ctx->pc = 0x13bb50u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 528)));
label_13bb54:
    // 0x13bb54: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x13BB54u;
    {
        const bool branch_taken_0x13bb54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bb54) {
            ctx->pc = 0x13BB58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13BB54u;
            // 0x13bb58: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13BB6Cu;
            goto label_13bb6c;
        }
    }
    ctx->pc = 0x13BB5Cu;
    // 0x13bb5c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x13bb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13bb60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13bb60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bb64: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x13BB64u;
    {
        const bool branch_taken_0x13bb64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BB64u;
            // 0x13bb68: 0xa2430210  sb          $v1, 0x210($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 528), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bb64) {
            ctx->pc = 0x13BC6Cu;
            goto label_13bc6c;
        }
    }
    ctx->pc = 0x13BB6Cu;
label_13bb6c:
    // 0x13bb6c: 0xa2420211  sb          $v0, 0x211($s2)
    ctx->pc = 0x13bb6cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 529), (uint8_t)GPR_U32(ctx, 2));
    // 0x13bb70: 0x8e420490  lw          $v0, 0x490($s2)
    ctx->pc = 0x13bb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1168)));
label_13bb74:
    // 0x13bb74: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x13bb74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x13bb78: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x13BB78u;
    {
        const bool branch_taken_0x13bb78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bb78) {
            ctx->pc = 0x13BB7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13BB78u;
            // 0x13bb7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13BBB0u;
            goto label_13bbb0;
        }
    }
    ctx->pc = 0x13BB80u;
    // 0x13bb80: 0x8e42048c  lw          $v0, 0x48C($s2)
    ctx->pc = 0x13bb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1164)));
    // 0x13bb84: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x13bb84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x13bb88: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13BB88u;
    {
        const bool branch_taken_0x13bb88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bb88) {
            ctx->pc = 0x13BBACu;
            goto label_13bbac;
        }
    }
    ctx->pc = 0x13BB90u;
    // 0x13bb90: 0x8e430494  lw          $v1, 0x494($s2)
    ctx->pc = 0x13bb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1172)));
    // 0x13bb94: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x13bb94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x13bb98: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13BB98u;
    {
        const bool branch_taken_0x13bb98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bb98) {
            ctx->pc = 0x13BBACu;
            goto label_13bbac;
        }
    }
    ctx->pc = 0x13BBA0u;
    // 0x13bba0: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x13bba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x13bba4: 0x50400031  beql        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x13BBA4u;
    {
        const bool branch_taken_0x13bba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bba4) {
            ctx->pc = 0x13BBA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13BBA4u;
            // 0x13bba8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13BC6Cu;
            goto label_13bc6c;
        }
    }
    ctx->pc = 0x13BBACu;
label_13bbac:
    // 0x13bbac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13bbacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13bbb0:
    // 0x13bbb0: 0xc04f2d8  jal         func_13CB60
    ctx->pc = 0x13BBB0u;
    SET_GPR_U32(ctx, 31, 0x13BBB8u);
    ctx->pc = 0x13CB60u;
    if (runtime->hasFunction(0x13CB60u)) {
        auto targetFn = runtime->lookupFunction(0x13CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BBB8u; }
        if (ctx->pc != 0x13BBB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CB60_0x13cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BBB8u; }
        if (ctx->pc != 0x13BBB8u) { return; }
    }
    ctx->pc = 0x13BBB8u;
label_13bbb8:
    // 0x13bbb8: 0xc04ef24  jal         func_13BC90
    ctx->pc = 0x13BBB8u;
    SET_GPR_U32(ctx, 31, 0x13BBC0u);
    ctx->pc = 0x13BBBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13BBB8u;
            // 0x13bbbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13BC90u;
    if (runtime->hasFunction(0x13BC90u)) {
        auto targetFn = runtime->lookupFunction(0x13BC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BBC0u; }
        if (ctx->pc != 0x13BBC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013BC90_0x13bc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BBC0u; }
        if (ctx->pc != 0x13BBC0u) { return; }
    }
    ctx->pc = 0x13BBC0u;
label_13bbc0:
    // 0x13bbc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13bbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13bbc4:
    // 0x13bbc4: 0xc04fa68  jal         func_13E9A0
    ctx->pc = 0x13BBC4u;
    SET_GPR_U32(ctx, 31, 0x13BBCCu);
    ctx->pc = 0x13E9A0u;
    if (runtime->hasFunction(0x13E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x13E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BBCCu; }
        if (ctx->pc != 0x13BBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E9A0_0x13e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BBCCu; }
        if (ctx->pc != 0x13BBCCu) { return; }
    }
    ctx->pc = 0x13BBCCu;
label_13bbcc:
    // 0x13bbcc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13bbccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bbd0: 0x2a01000b  slti        $at, $s0, 0xB
    ctx->pc = 0x13bbd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)11) ? 1 : 0);
label_13bbd4:
    // 0x13bbd4: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x13BBD4u;
    {
        const bool branch_taken_0x13bbd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BBD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BBD4u;
            // 0x13bbd8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bbd4) {
            ctx->pc = 0x13BC60u;
            goto label_13bc60;
        }
    }
    ctx->pc = 0x13BBDCu;
    // 0x13bbdc: 0x8e420208  lw          $v0, 0x208($s2)
    ctx->pc = 0x13bbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 520)));
    // 0x13bbe0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13BBE0u;
    {
        const bool branch_taken_0x13bbe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bbe0) {
            ctx->pc = 0x13BBF8u;
            goto label_13bbf8;
        }
    }
    ctx->pc = 0x13BBE8u;
    // 0x13bbe8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x13bbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x13bbec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13BBECu;
    {
        const bool branch_taken_0x13bbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BBF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BBECu;
            // 0x13bbf0: 0xa242021c  sb          $v0, 0x21C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 540), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bbec) {
            ctx->pc = 0x13BC00u;
            goto label_13bc00;
        }
    }
    ctx->pc = 0x13BBF4u;
    // 0x13bbf4: 0x0  nop
    ctx->pc = 0x13bbf4u;
    // NOP
label_13bbf8:
    // 0x13bbf8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x13bbf8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13bbfc: 0xa242021c  sb          $v0, 0x21C($s2)
    ctx->pc = 0x13bbfcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 540), (uint8_t)GPR_U32(ctx, 2));
label_13bc00:
    // 0x13bc00: 0x9244021c  lbu         $a0, 0x21C($s2)
    ctx->pc = 0x13bc00u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 540)));
    // 0x13bc04: 0xc04f324  jal         func_13CC90
    ctx->pc = 0x13BC04u;
    SET_GPR_U32(ctx, 31, 0x13BC0Cu);
    ctx->pc = 0x13BC08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13BC04u;
            // 0x13bc08: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CC90u;
    if (runtime->hasFunction(0x13CC90u)) {
        auto targetFn = runtime->lookupFunction(0x13CC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BC0Cu; }
        if (ctx->pc != 0x13BC0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CC90_0x13cc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BC0Cu; }
        if (ctx->pc != 0x13BC0Cu) { return; }
    }
    ctx->pc = 0x13BC0Cu;
label_13bc0c:
    // 0x13bc0c: 0x9244021c  lbu         $a0, 0x21C($s2)
    ctx->pc = 0x13bc0cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 540)));
    // 0x13bc10: 0xc04f344  jal         func_13CD10
    ctx->pc = 0x13BC10u;
    SET_GPR_U32(ctx, 31, 0x13BC18u);
    ctx->pc = 0x13BC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13BC10u;
            // 0x13bc14: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CD10u;
    if (runtime->hasFunction(0x13CD10u)) {
        auto targetFn = runtime->lookupFunction(0x13CD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BC18u; }
        if (ctx->pc != 0x13BC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CD10_0x13cd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BC18u; }
        if (ctx->pc != 0x13BC18u) { return; }
    }
    ctx->pc = 0x13BC18u;
label_13bc18:
    // 0x13bc18: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x13BC18u;
    {
        const bool branch_taken_0x13bc18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bc18) {
            ctx->pc = 0x13BC58u;
            goto label_13bc58;
        }
    }
    ctx->pc = 0x13BC20u;
    // 0x13bc20: 0x8e430208  lw          $v1, 0x208($s2)
    ctx->pc = 0x13bc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 520)));
    // 0x13bc24: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x13BC24u;
    {
        const bool branch_taken_0x13bc24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bc24) {
            ctx->pc = 0x13BC48u;
            goto label_13bc48;
        }
    }
    ctx->pc = 0x13BC2Cu;
    // 0x13bc2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13bc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13bc30: 0xae430208  sw          $v1, 0x208($s2)
    ctx->pc = 0x13bc30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 520), GPR_U32(ctx, 3));
    // 0x13bc34: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13bc34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13bc38: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13BC38u;
    {
        const bool branch_taken_0x13bc38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x13BC3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BC38u;
            // 0x13bc3c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bc38) {
            ctx->pc = 0x13BC48u;
            goto label_13bc48;
        }
    }
    ctx->pc = 0x13BC40u;
    // 0x13bc40: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x13bc40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13bc44: 0x0  nop
    ctx->pc = 0x13bc44u;
    // NOP
label_13bc48:
    // 0x13bc48: 0xa6400226  sh          $zero, 0x226($s2)
    ctx->pc = 0x13bc48u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 550), (uint16_t)GPR_U32(ctx, 0));
    // 0x13bc4c: 0x86420242  lh          $v0, 0x242($s2)
    ctx->pc = 0x13bc4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 578)));
    // 0x13bc50: 0xa6420244  sh          $v0, 0x244($s2)
    ctx->pc = 0x13bc50u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 580), (uint16_t)GPR_U32(ctx, 2));
    // 0x13bc54: 0xa6400242  sh          $zero, 0x242($s2)
    ctx->pc = 0x13bc54u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 578), (uint16_t)GPR_U32(ctx, 0));
label_13bc58:
    // 0x13bc58: 0x5620ffde  bnel        $s1, $zero, . + 4 + (-0x22 << 2)
    ctx->pc = 0x13BC58u;
    {
        const bool branch_taken_0x13bc58 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bc58) {
            ctx->pc = 0x13BC5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13BC58u;
            // 0x13bc5c: 0x2a01000b  slti        $at, $s0, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)11) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13BBD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13bbd4;
        }
    }
    ctx->pc = 0x13BC60u;
label_13bc60:
    // 0x13bc60: 0xc04f3b8  jal         func_13CEE0
    ctx->pc = 0x13BC60u;
    SET_GPR_U32(ctx, 31, 0x13BC68u);
    ctx->pc = 0x13BC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13BC60u;
            // 0x13bc64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CEE0u;
    if (runtime->hasFunction(0x13CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x13CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BC68u; }
        if (ctx->pc != 0x13BC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CEE0_0x13cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BC68u; }
        if (ctx->pc != 0x13BC68u) { return; }
    }
    ctx->pc = 0x13BC68u;
label_13bc68:
    // 0x13bc68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13bc68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13bc6c:
    // 0x13bc6c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13bc6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13bc70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13bc70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13bc74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13bc74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13bc78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13bc78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13bc7c: 0x3e00008  jr          $ra
    ctx->pc = 0x13BC7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BC80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BC7Cu;
            // 0x13bc80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13BC84u;
    // 0x13bc84: 0x0  nop
    ctx->pc = 0x13bc84u;
    // NOP
    // 0x13bc88: 0x0  nop
    ctx->pc = 0x13bc88u;
    // NOP
    // 0x13bc8c: 0x0  nop
    ctx->pc = 0x13bc8cu;
    // NOP
    ctx->pc = 0x13bc90u;
}
