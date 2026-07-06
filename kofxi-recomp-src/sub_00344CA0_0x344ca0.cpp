#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00344CA0
// Address: 0x344ca0 - 0x345020
void sub_00344CA0_0x344ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344CA0_0x344ca0");
#endif

    switch (ctx->pc) {
        case 0x344cf0u: goto label_344cf0;
        case 0x344d04u: goto label_344d04;
        case 0x344d10u: goto label_344d10;
        case 0x344d48u: goto label_344d48;
        case 0x344d5cu: goto label_344d5c;
        case 0x344d64u: goto label_344d64;
        case 0x344d70u: goto label_344d70;
        case 0x344da8u: goto label_344da8;
        case 0x344dc8u: goto label_344dc8;
        case 0x344de8u: goto label_344de8;
        case 0x344e40u: goto label_344e40;
        case 0x344e64u: goto label_344e64;
        case 0x344ed8u: goto label_344ed8;
        case 0x344ef0u: goto label_344ef0;
        case 0x344f28u: goto label_344f28;
        case 0x344f50u: goto label_344f50;
        case 0x344f60u: goto label_344f60;
        case 0x344f70u: goto label_344f70;
        case 0x344f88u: goto label_344f88;
        case 0x344fa0u: goto label_344fa0;
        case 0x344ff4u: goto label_344ff4;
        case 0x345000u: goto label_345000;
        case 0x345008u: goto label_345008;
        default: break;
    }

    ctx->pc = 0x344ca0u;

label_344ca0:
    // 0x344ca0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x344ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x344ca4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x344ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x344ca8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x344ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x344cac: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x344cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x344cb0: 0x9448be90  lhu         $t0, -0x4170($v0)
    ctx->pc = 0x344cb0u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950544)));
    // 0x344cb4: 0x24031340  addiu       $v1, $zero, 0x1340
    ctx->pc = 0x344cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4928));
    // 0x344cb8: 0x248450a0  addiu       $a0, $a0, 0x50A0
    ctx->pc = 0x344cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20640));
    // 0x344cbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x344cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344cc0: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x344cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x344cc4: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x344cc4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x344cc8: 0x8c463f80  lw          $a2, 0x3F80($v0)
    ctx->pc = 0x344cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16256)));
    // 0x344ccc: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x344cccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x344cd0: 0x73980  sll         $a3, $a3, 6
    ctx->pc = 0x344cd0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x344cd4: 0x1031818  mult        $v1, $t0, $v1
    ctx->pc = 0x344cd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x344cd8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x344cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x344cdc: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x344cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x344ce0: 0x8c424040  lw          $v0, 0x4040($v0)
    ctx->pc = 0x344ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16448)));
    // 0x344ce4: 0x24c60108  addiu       $a2, $a2, 0x108
    ctx->pc = 0x344ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 264));
    // 0x344ce8: 0xc06a0b8  jal         func_1A82E0
    ctx->pc = 0x344CE8u;
    SET_GPR_U32(ctx, 31, 0x344CF0u);
    ctx->pc = 0x344CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x344CE8u;
            // 0x344cec: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A82E0u;
    if (runtime->hasFunction(0x1A82E0u)) {
        auto targetFn = runtime->lookupFunction(0x1A82E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344CF0u; }
        if (ctx->pc != 0x344CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A82E0_0x1a82e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344CF0u; }
        if (ctx->pc != 0x344CF0u) { return; }
    }
    ctx->pc = 0x344CF0u;
label_344cf0:
    // 0x344cf0: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x344cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x344cf4: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x344cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x344cf8: 0x24845b20  addiu       $a0, $a0, 0x5B20
    ctx->pc = 0x344cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23328));
    // 0x344cfc: 0xc0558d4  jal         func_156350
    ctx->pc = 0x344CFCu;
    SET_GPR_U32(ctx, 31, 0x344D04u);
    ctx->pc = 0x344D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x344CFCu;
            // 0x344d00: 0x24a54d10  addiu       $a1, $a1, 0x4D10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (runtime->hasFunction(0x156350u)) {
        auto targetFn = runtime->lookupFunction(0x156350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344D04u; }
        if (ctx->pc != 0x344D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156350_0x156350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344D04u; }
        if (ctx->pc != 0x344D04u) { return; }
    }
    ctx->pc = 0x344D04u;
label_344d04:
    // 0x344d04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x344d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344d08: 0x3e00008  jr          $ra
    ctx->pc = 0x344D08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344D08u;
            // 0x344d0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x344D10u;
label_344d10:
    // 0x344d10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x344d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x344d14: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x344d14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x344d18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x344d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x344d1c: 0x2484be90  addiu       $a0, $a0, -0x4170
    ctx->pc = 0x344d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950544));
    // 0x344d20: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x344d20u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x344d24: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x344d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x344d28: 0x8c4242f8  lw          $v0, 0x42F8($v0)
    ctx->pc = 0x344d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17144)));
    // 0x344d2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x344d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x344d30: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x344d30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x344d34: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x344D34u;
    {
        const bool branch_taken_0x344d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x344d34) {
            ctx->pc = 0x344D38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x344D34u;
            // 0x344d38: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x344D50u;
            goto label_344d50;
        }
    }
    ctx->pc = 0x344D3Cu;
    // 0x344d3c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x344d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x344d40: 0xc082674  jal         func_2099D0
    ctx->pc = 0x344D40u;
    SET_GPR_U32(ctx, 31, 0x344D48u);
    ctx->pc = 0x344D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x344D40u;
            // 0x344d44: 0x24844d70  addiu       $a0, $a0, 0x4D70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344D48u; }
        if (ctx->pc != 0x344D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344D48u; }
        if (ctx->pc != 0x344D48u) { return; }
    }
    ctx->pc = 0x344D48u;
label_344d48:
    // 0x344d48: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x344D48u;
    {
        const bool branch_taken_0x344d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344D48u;
            // 0x344d4c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344d48) {
            ctx->pc = 0x344D68u;
            goto label_344d68;
        }
    }
    ctx->pc = 0x344D50u;
label_344d50:
    // 0x344d50: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x344d50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x344d54: 0xc082674  jal         func_2099D0
    ctx->pc = 0x344D54u;
    SET_GPR_U32(ctx, 31, 0x344D5Cu);
    ctx->pc = 0x344D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x344D54u;
            // 0x344d58: 0x24844ca0  addiu       $a0, $a0, 0x4CA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344D5Cu; }
        if (ctx->pc != 0x344D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344D5Cu; }
        if (ctx->pc != 0x344D5Cu) { return; }
    }
    ctx->pc = 0x344D5Cu;
label_344d5c:
    // 0x344d5c: 0xc0d1328  jal         func_344CA0
    ctx->pc = 0x344D5Cu;
    SET_GPR_U32(ctx, 31, 0x344D64u);
    ctx->pc = 0x344CA0u;
    goto label_344ca0;
    ctx->pc = 0x344D64u;
label_344d64:
    // 0x344d64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x344d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_344d68:
    // 0x344d68: 0x3e00008  jr          $ra
    ctx->pc = 0x344D68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344D68u;
            // 0x344d6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x344D70u;
label_344d70:
    // 0x344d70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x344d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x344d74: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x344d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x344d78: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x344d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x344d7c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x344d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x344d80: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x344d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x344d84: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x344d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x344d88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x344d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x344d8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x344d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x344d90: 0x8c4442f8  lw          $a0, 0x42F8($v0)
    ctx->pc = 0x344d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17144)));
    // 0x344d94: 0x1880004c  blez        $a0, . + 4 + (0x4C << 2)
    ctx->pc = 0x344D94u;
    {
        const bool branch_taken_0x344d94 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x344D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344D94u;
            // 0x344d98: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344d94) {
            ctx->pc = 0x344EC8u;
            goto label_344ec8;
        }
    }
    ctx->pc = 0x344D9Cu;
    // 0x344d9c: 0x3c1301de  lui         $s3, 0x1DE
    ctx->pc = 0x344d9cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)478 << 16));
    // 0x344da0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x344da0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344da4: 0x267342e0  addiu       $s3, $s3, 0x42E0
    ctx->pc = 0x344da4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 17120));
label_344da8:
    // 0x344da8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x344da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x344dac: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x344dacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x344db0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x344db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x344db4: 0x8c4242fc  lw          $v0, 0x42FC($v0)
    ctx->pc = 0x344db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17148)));
    // 0x344db8: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x344DB8u;
    {
        const bool branch_taken_0x344db8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x344DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344DB8u;
            // 0x344dbc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344db8) {
            ctx->pc = 0x344E08u;
            goto label_344e08;
        }
    }
    ctx->pc = 0x344DC0u;
    // 0x344dc0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x344dc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344dc4: 0x0  nop
    ctx->pc = 0x344dc4u;
    // NOP
label_344dc8:
    // 0x344dc8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x344dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x344dcc: 0x8c433fc0  lw          $v1, 0x3FC0($v0)
    ctx->pc = 0x344dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16320)));
    // 0x344dd0: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x344dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x344dd4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x344dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x344dd8: 0x8c424040  lw          $v0, 0x4040($v0)
    ctx->pc = 0x344dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16448)));
    // 0x344ddc: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x344ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x344de0: 0xc04a78a  jal         func_129E28
    ctx->pc = 0x344DE0u;
    SET_GPR_U32(ctx, 31, 0x344DE8u);
    ctx->pc = 0x344DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x344DE0u;
            // 0x344de4: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (runtime->hasFunction(0x129E28u)) {
        auto targetFn = runtime->lookupFunction(0x129E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344DE8u; }
        if (ctx->pc != 0x344DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129E28_0x129e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344DE8u; }
        if (ctx->pc != 0x344DE8u) { return; }
    }
    ctx->pc = 0x344DE8u;
label_344de8:
    // 0x344de8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x344DE8u;
    {
        const bool branch_taken_0x344de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x344de8) {
            ctx->pc = 0x344E08u;
            goto label_344e08;
        }
    }
    ctx->pc = 0x344DF0u;
    // 0x344df0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x344df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x344df4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x344df4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x344df8: 0x8c4242fc  lw          $v0, 0x42FC($v0)
    ctx->pc = 0x344df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17148)));
    // 0x344dfc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x344dfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x344e00: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x344E00u;
    {
        const bool branch_taken_0x344e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x344E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344E00u;
            // 0x344e04: 0x26100240  addiu       $s0, $s0, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344e00) {
            ctx->pc = 0x344DC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_344dc8;
        }
    }
    ctx->pc = 0x344E08u;
label_344e08:
    // 0x344e08: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x344e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x344e0c: 0x8c4242fc  lw          $v0, 0x42FC($v0)
    ctx->pc = 0x344e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17148)));
    // 0x344e10: 0x222082a  slt         $at, $s1, $v0
    ctx->pc = 0x344e10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x344e14: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x344E14u;
    {
        const bool branch_taken_0x344e14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x344e14) {
            ctx->pc = 0x344E28u;
            goto label_344e28;
        }
    }
    ctx->pc = 0x344E1Cu;
    // 0x344e1c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x344e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x344e20: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x344e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x344e24: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x344e24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_344e28:
    // 0x344e28: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x344e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x344e2c: 0x8c424300  lw          $v0, 0x4300($v0)
    ctx->pc = 0x344e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17152)));
    // 0x344e30: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x344E30u;
    {
        const bool branch_taken_0x344e30 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x344E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344E30u;
            // 0x344e34: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344e30) {
            ctx->pc = 0x344E88u;
            goto label_344e88;
        }
    }
    ctx->pc = 0x344E38u;
    // 0x344e38: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x344e38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344e3c: 0x0  nop
    ctx->pc = 0x344e3cu;
    // NOP
label_344e40:
    // 0x344e40: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x344e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x344e44: 0x8c434000  lw          $v1, 0x4000($v0)
    ctx->pc = 0x344e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16384)));
    // 0x344e48: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x344e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x344e4c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x344e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x344e50: 0x8c424040  lw          $v0, 0x4040($v0)
    ctx->pc = 0x344e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16448)));
    // 0x344e54: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x344e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x344e58: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x344e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x344e5c: 0xc04a78a  jal         func_129E28
    ctx->pc = 0x344E5Cu;
    SET_GPR_U32(ctx, 31, 0x344E64u);
    ctx->pc = 0x344E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x344E5Cu;
            // 0x344e60: 0x24450100  addiu       $a1, $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (runtime->hasFunction(0x129E28u)) {
        auto targetFn = runtime->lookupFunction(0x129E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344E64u; }
        if (ctx->pc != 0x344E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129E28_0x129e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344E64u; }
        if (ctx->pc != 0x344E64u) { return; }
    }
    ctx->pc = 0x344E64u;
label_344e64:
    // 0x344e64: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x344E64u;
    {
        const bool branch_taken_0x344e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x344e64) {
            ctx->pc = 0x344E88u;
            goto label_344e88;
        }
    }
    ctx->pc = 0x344E6Cu;
    // 0x344e6c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x344e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x344e70: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x344e70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x344e74: 0x8c424300  lw          $v0, 0x4300($v0)
    ctx->pc = 0x344e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17152)));
    // 0x344e78: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x344e78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x344e7c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x344E7Cu;
    {
        const bool branch_taken_0x344e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x344E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344E7Cu;
            // 0x344e80: 0x26310240  addiu       $s1, $s1, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344e7c) {
            ctx->pc = 0x344E40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_344e40;
        }
    }
    ctx->pc = 0x344E84u;
    // 0x344e84: 0x0  nop
    ctx->pc = 0x344e84u;
    // NOP
label_344e88:
    // 0x344e88: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x344e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x344e8c: 0x8c424300  lw          $v0, 0x4300($v0)
    ctx->pc = 0x344e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17152)));
    // 0x344e90: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x344e90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x344e94: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x344E94u;
    {
        const bool branch_taken_0x344e94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x344e94) {
            ctx->pc = 0x344EA8u;
            goto label_344ea8;
        }
    }
    ctx->pc = 0x344E9Cu;
    // 0x344e9c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x344e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x344ea0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x344ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x344ea4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x344ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_344ea8:
    // 0x344ea8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x344ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x344eac: 0x8c4442f8  lw          $a0, 0x42F8($v0)
    ctx->pc = 0x344eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17144)));
    // 0x344eb0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x344eb0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x344eb4: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x344eb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x344eb8: 0x284102a  slt         $v0, $s4, $a0
    ctx->pc = 0x344eb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x344ebc: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x344EBCu;
    {
        const bool branch_taken_0x344ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x344EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344EBCu;
            // 0x344ec0: 0x26521340  addiu       $s2, $s2, 0x1340 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344ebc) {
            ctx->pc = 0x344DA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_344da8;
        }
    }
    ctx->pc = 0x344EC4u;
    // 0x344ec4: 0x0  nop
    ctx->pc = 0x344ec4u;
    // NOP
label_344ec8:
    // 0x344ec8: 0x1880000f  blez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x344EC8u;
    {
        const bool branch_taken_0x344ec8 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x344ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344EC8u;
            // 0x344ecc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344ec8) {
            ctx->pc = 0x344F08u;
            goto label_344f08;
        }
    }
    ctx->pc = 0x344ED0u;
    // 0x344ed0: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x344ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x344ed4: 0x24a542e0  addiu       $a1, $a1, 0x42E0
    ctx->pc = 0x344ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17120));
label_344ed8:
    // 0x344ed8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x344ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x344edc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x344EDCu;
    {
        const bool branch_taken_0x344edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x344edc) {
            ctx->pc = 0x344EE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x344EDCu;
            // 0x344ee0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x344EF8u;
            goto label_344ef8;
        }
    }
    ctx->pc = 0x344EE4u;
    // 0x344ee4: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x344ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x344ee8: 0xc082674  jal         func_2099D0
    ctx->pc = 0x344EE8u;
    SET_GPR_U32(ctx, 31, 0x344EF0u);
    ctx->pc = 0x344EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x344EE8u;
            // 0x344eec: 0x24844f50  addiu       $a0, $a0, 0x4F50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344EF0u; }
        if (ctx->pc != 0x344EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344EF0u; }
        if (ctx->pc != 0x344EF0u) { return; }
    }
    ctx->pc = 0x344EF0u;
label_344ef0:
    // 0x344ef0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x344EF0u;
    {
        const bool branch_taken_0x344ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344EF0u;
            // 0x344ef4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344ef0) {
            ctx->pc = 0x344F2Cu;
            goto label_344f2c;
        }
    }
    ctx->pc = 0x344EF8u;
label_344ef8:
    // 0x344ef8: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x344ef8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x344efc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x344EFCu;
    {
        const bool branch_taken_0x344efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x344F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344EFCu;
            // 0x344f00: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344efc) {
            ctx->pc = 0x344ED8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_344ed8;
        }
    }
    ctx->pc = 0x344F04u;
    // 0x344f04: 0x0  nop
    ctx->pc = 0x344f04u;
    // NOP
label_344f08:
    // 0x344f08: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x344f08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x344f0c: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x344f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x344f10: 0x24030036  addiu       $v1, $zero, 0x36
    ctx->pc = 0x344f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x344f14: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x344f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x344f18: 0x248457e0  addiu       $a0, $a0, 0x57E0
    ctx->pc = 0x344f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22496));
    // 0x344f1c: 0xa443be90  sh          $v1, -0x4170($v0)
    ctx->pc = 0x344f1cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950544), (uint16_t)GPR_U32(ctx, 3));
    // 0x344f20: 0xc0558d4  jal         func_156350
    ctx->pc = 0x344F20u;
    SET_GPR_U32(ctx, 31, 0x344F28u);
    ctx->pc = 0x344F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x344F20u;
            // 0x344f24: 0x24a54380  addiu       $a1, $a1, 0x4380 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (runtime->hasFunction(0x156350u)) {
        auto targetFn = runtime->lookupFunction(0x156350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344F28u; }
        if (ctx->pc != 0x344F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156350_0x156350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344F28u; }
        if (ctx->pc != 0x344F28u) { return; }
    }
    ctx->pc = 0x344F28u;
label_344f28:
    // 0x344f28: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x344f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_344f2c:
    // 0x344f2c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x344f2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x344f30: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x344f30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x344f34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x344f34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x344f38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x344f38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x344f3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x344f3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344f40: 0x3e00008  jr          $ra
    ctx->pc = 0x344F40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344F40u;
            // 0x344f44: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x344F48u;
    // 0x344f48: 0x0  nop
    ctx->pc = 0x344f48u;
    // NOP
    // 0x344f4c: 0x0  nop
    ctx->pc = 0x344f4cu;
    // NOP
label_344f50:
    // 0x344f50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x344f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x344f54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x344f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x344f58: 0xc069230  jal         func_1A48C0
    ctx->pc = 0x344F58u;
    SET_GPR_U32(ctx, 31, 0x344F60u);
    ctx->pc = 0x344F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x344F58u;
            // 0x344f5c: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A48C0u;
    if (runtime->hasFunction(0x1A48C0u)) {
        auto targetFn = runtime->lookupFunction(0x1A48C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344F60u; }
        if (ctx->pc != 0x344F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A48C0_0x1a48c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344F60u; }
        if (ctx->pc != 0x344F60u) { return; }
    }
    ctx->pc = 0x344F60u;
label_344f60:
    // 0x344f60: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x344f60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x344f64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x344f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344f68: 0xc082678  jal         func_2099E0
    ctx->pc = 0x344F68u;
    SET_GPR_U32(ctx, 31, 0x344F70u);
    ctx->pc = 0x344F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x344F68u;
            // 0x344f6c: 0x24843ff0  addiu       $a0, $a0, 0x3FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (runtime->hasFunction(0x2099E0u)) {
        auto targetFn = runtime->lookupFunction(0x2099E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344F70u; }
        if (ctx->pc != 0x344F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099E0_0x2099e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344F70u; }
        if (ctx->pc != 0x344F70u) { return; }
    }
    ctx->pc = 0x344F70u;
label_344f70:
    // 0x344f70: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x344f70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x344f74: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x344f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x344f78: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x344f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x344f7c: 0x24844fa0  addiu       $a0, $a0, 0x4FA0
    ctx->pc = 0x344f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20384));
    // 0x344f80: 0xc082674  jal         func_2099D0
    ctx->pc = 0x344F80u;
    SET_GPR_U32(ctx, 31, 0x344F88u);
    ctx->pc = 0x344F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x344F80u;
            // 0x344f84: 0xa443be90  sh          $v1, -0x4170($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294950544), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344F88u; }
        if (ctx->pc != 0x344F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344F88u; }
        if (ctx->pc != 0x344F88u) { return; }
    }
    ctx->pc = 0x344F88u;
label_344f88:
    // 0x344f88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x344f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x344F8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344F8Cu;
            // 0x344f90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x344F94u;
    // 0x344f94: 0x0  nop
    ctx->pc = 0x344f94u;
    // NOP
    // 0x344f98: 0x0  nop
    ctx->pc = 0x344f98u;
    // NOP
    // 0x344f9c: 0x0  nop
    ctx->pc = 0x344f9cu;
    // NOP
label_344fa0:
    // 0x344fa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x344fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x344fa4: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x344fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x344fa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x344fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x344fac: 0x2484be90  addiu       $a0, $a0, -0x4170
    ctx->pc = 0x344facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950544));
    // 0x344fb0: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x344fb0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x344fb4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x344fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x344fb8: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x344fb8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x344fbc: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x344fbcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x344fc0: 0x54600012  bnel        $v1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x344FC0u;
    {
        const bool branch_taken_0x344fc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x344fc0) {
            ctx->pc = 0x344FC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x344FC0u;
            // 0x344fc4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34500Cu;
            goto label_34500c;
        }
    }
    ctx->pc = 0x344FC8u;
    // 0x344fc8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x344fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x344fcc: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x344fccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x344fd0: 0x8c434050  lw          $v1, 0x4050($v0)
    ctx->pc = 0x344fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16464)));
    // 0x344fd4: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x344fd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x344fd8: 0x248447d0  addiu       $a0, $a0, 0x47D0
    ctx->pc = 0x344fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18384));
    // 0x344fdc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x344fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344fe0: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x344fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x344fe4: 0xa4660000  sh          $a2, 0x0($v1)
    ctx->pc = 0x344fe4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x344fe8: 0x8c424058  lw          $v0, 0x4058($v0)
    ctx->pc = 0x344fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16472)));
    // 0x344fec: 0xc082678  jal         func_2099E0
    ctx->pc = 0x344FECu;
    SET_GPR_U32(ctx, 31, 0x344FF4u);
    ctx->pc = 0x344FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x344FECu;
            // 0x344ff0: 0xa4460000  sh          $a2, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (runtime->hasFunction(0x2099E0u)) {
        auto targetFn = runtime->lookupFunction(0x2099E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344FF4u; }
        if (ctx->pc != 0x344FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099E0_0x2099e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344FF4u; }
        if (ctx->pc != 0x344FF4u) { return; }
    }
    ctx->pc = 0x344FF4u;
label_344ff4:
    // 0x344ff4: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x344ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x344ff8: 0xc082674  jal         func_2099D0
    ctx->pc = 0x344FF8u;
    SET_GPR_U32(ctx, 31, 0x345000u);
    ctx->pc = 0x344FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x344FF8u;
            // 0x344ffc: 0x24845020  addiu       $a0, $a0, 0x5020 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345000u; }
        if (ctx->pc != 0x345000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345000u; }
        if (ctx->pc != 0x345000u) { return; }
    }
    ctx->pc = 0x345000u;
label_345000:
    // 0x345000: 0xc0d1408  jal         func_345020
    ctx->pc = 0x345000u;
    SET_GPR_U32(ctx, 31, 0x345008u);
    ctx->pc = 0x345020u;
    if (runtime->hasFunction(0x345020u)) {
        auto targetFn = runtime->lookupFunction(0x345020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345008u; }
        if (ctx->pc != 0x345008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00345020_0x345020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345008u; }
        if (ctx->pc != 0x345008u) { return; }
    }
    ctx->pc = 0x345008u;
label_345008:
    // 0x345008: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x345008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_34500c:
    // 0x34500c: 0x3e00008  jr          $ra
    ctx->pc = 0x34500Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34500Cu;
            // 0x345010: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x345014u;
    // 0x345014: 0x0  nop
    ctx->pc = 0x345014u;
    // NOP
    // 0x345018: 0x0  nop
    ctx->pc = 0x345018u;
    // NOP
    // 0x34501c: 0x0  nop
    ctx->pc = 0x34501cu;
    // NOP
    ctx->pc = 0x345020u;
}
