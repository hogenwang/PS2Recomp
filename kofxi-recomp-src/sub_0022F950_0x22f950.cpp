#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022F950
// Address: 0x22f950 - 0x22fa78
void sub_0022F950_0x22f950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F950_0x22f950");
#endif

    switch (ctx->pc) {
        case 0x22f950u: goto label_22f950;
        case 0x22f954u: goto label_22f954;
        case 0x22f958u: goto label_22f958;
        case 0x22f95cu: goto label_22f95c;
        case 0x22f960u: goto label_22f960;
        case 0x22f964u: goto label_22f964;
        case 0x22f968u: goto label_22f968;
        case 0x22f96cu: goto label_22f96c;
        case 0x22f970u: goto label_22f970;
        case 0x22f974u: goto label_22f974;
        case 0x22f978u: goto label_22f978;
        case 0x22f97cu: goto label_22f97c;
        case 0x22f980u: goto label_22f980;
        case 0x22f984u: goto label_22f984;
        case 0x22f988u: goto label_22f988;
        case 0x22f98cu: goto label_22f98c;
        case 0x22f990u: goto label_22f990;
        case 0x22f994u: goto label_22f994;
        case 0x22f998u: goto label_22f998;
        case 0x22f99cu: goto label_22f99c;
        case 0x22f9a0u: goto label_22f9a0;
        case 0x22f9a4u: goto label_22f9a4;
        case 0x22f9a8u: goto label_22f9a8;
        case 0x22f9acu: goto label_22f9ac;
        case 0x22f9b0u: goto label_22f9b0;
        case 0x22f9b4u: goto label_22f9b4;
        case 0x22f9b8u: goto label_22f9b8;
        case 0x22f9bcu: goto label_22f9bc;
        case 0x22f9c0u: goto label_22f9c0;
        case 0x22f9c4u: goto label_22f9c4;
        case 0x22f9c8u: goto label_22f9c8;
        case 0x22f9ccu: goto label_22f9cc;
        case 0x22f9d0u: goto label_22f9d0;
        case 0x22f9d4u: goto label_22f9d4;
        case 0x22f9d8u: goto label_22f9d8;
        case 0x22f9dcu: goto label_22f9dc;
        case 0x22f9e0u: goto label_22f9e0;
        case 0x22f9e4u: goto label_22f9e4;
        case 0x22f9e8u: goto label_22f9e8;
        case 0x22f9ecu: goto label_22f9ec;
        case 0x22f9f0u: goto label_22f9f0;
        case 0x22f9f4u: goto label_22f9f4;
        case 0x22f9f8u: goto label_22f9f8;
        case 0x22f9fcu: goto label_22f9fc;
        case 0x22fa00u: goto label_22fa00;
        case 0x22fa04u: goto label_22fa04;
        case 0x22fa08u: goto label_22fa08;
        case 0x22fa0cu: goto label_22fa0c;
        case 0x22fa10u: goto label_22fa10;
        case 0x22fa14u: goto label_22fa14;
        case 0x22fa18u: goto label_22fa18;
        case 0x22fa1cu: goto label_22fa1c;
        case 0x22fa20u: goto label_22fa20;
        case 0x22fa24u: goto label_22fa24;
        case 0x22fa28u: goto label_22fa28;
        case 0x22fa2cu: goto label_22fa2c;
        case 0x22fa30u: goto label_22fa30;
        case 0x22fa34u: goto label_22fa34;
        case 0x22fa38u: goto label_22fa38;
        case 0x22fa3cu: goto label_22fa3c;
        case 0x22fa40u: goto label_22fa40;
        case 0x22fa44u: goto label_22fa44;
        case 0x22fa48u: goto label_22fa48;
        case 0x22fa4cu: goto label_22fa4c;
        case 0x22fa50u: goto label_22fa50;
        case 0x22fa54u: goto label_22fa54;
        case 0x22fa58u: goto label_22fa58;
        case 0x22fa5cu: goto label_22fa5c;
        case 0x22fa60u: goto label_22fa60;
        case 0x22fa64u: goto label_22fa64;
        case 0x22fa68u: goto label_22fa68;
        case 0x22fa6cu: goto label_22fa6c;
        case 0x22fa70u: goto label_22fa70;
        case 0x22fa74u: goto label_22fa74;
        default: break;
    }

    ctx->pc = 0x22f950u;

label_22f950:
    // 0x22f950: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x22f950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_22f954:
    // 0x22f954: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x22f954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_22f958:
    // 0x22f958: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x22f958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_22f95c:
    // 0x22f95c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22f95cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22f960:
    // 0x22f960: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x22f960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_22f964:
    // 0x22f964: 0x26300048  addiu       $s0, $s1, 0x48
    ctx->pc = 0x22f964u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
label_22f968:
    // 0x22f968: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x22f968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
label_22f96c:
    // 0x22f96c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x22f96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_22f970:
    // 0x22f970: 0x96020030  lhu         $v0, 0x30($s0)
    ctx->pc = 0x22f970u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
label_22f974:
    // 0x22f974: 0x8e33000c  lw          $s3, 0xC($s1)
    ctx->pc = 0x22f974u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_22f978:
    // 0x22f978: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x22f978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_22f97c:
    // 0x22f97c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x22f97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_22f980:
    // 0x22f980: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_22f984:
    if (ctx->pc == 0x22F984u) {
        ctx->pc = 0x22F984u;
            // 0x22f984: 0xa6030030  sh          $v1, 0x30($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x22F988u;
        goto label_22f988;
    }
    ctx->pc = 0x22F980u;
    {
        const bool branch_taken_0x22f980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F980u;
            // 0x22f984: 0xa6030030  sh          $v1, 0x30($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f980) {
            ctx->pc = 0x22F998u;
            goto label_22f998;
        }
    }
    ctx->pc = 0x22F988u;
label_22f988:
    // 0x22f988: 0xc08c21e  jal         func_230878
label_22f98c:
    if (ctx->pc == 0x22F98Cu) {
        ctx->pc = 0x22F98Cu;
            // 0x22f98c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22F990u;
        goto label_22f990;
    }
    ctx->pc = 0x22F988u;
    SET_GPR_U32(ctx, 31, 0x22F990u);
    ctx->pc = 0x22F98Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F988u;
            // 0x22f98c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230878u;
    if (runtime->hasFunction(0x230878u)) {
        auto targetFn = runtime->lookupFunction(0x230878u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F990u; }
        if (ctx->pc != 0x22F990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230878_0x230878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F990u; }
        if (ctx->pc != 0x22F990u) { return; }
    }
    ctx->pc = 0x22F990u;
label_22f990:
    // 0x22f990: 0x10000003  b           . + 4 + (0x3 << 2)
label_22f994:
    if (ctx->pc == 0x22F994u) {
        ctx->pc = 0x22F998u;
        goto label_22f998;
    }
    ctx->pc = 0x22F990u;
    {
        const bool branch_taken_0x22f990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f990) {
            ctx->pc = 0x22F9A0u;
            goto label_22f9a0;
        }
    }
    ctx->pc = 0x22F998u;
label_22f998:
    // 0x22f998: 0x34620001  ori         $v0, $v1, 0x1
    ctx->pc = 0x22f998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_22f99c:
    // 0x22f99c: 0xa6020030  sh          $v0, 0x30($s0)
    ctx->pc = 0x22f99cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 2));
label_22f9a0:
    // 0x22f9a0: 0xc08c682  jal         func_231A08
label_22f9a4:
    if (ctx->pc == 0x22F9A4u) {
        ctx->pc = 0x22F9A8u;
        goto label_22f9a8;
    }
    ctx->pc = 0x22F9A0u;
    SET_GPR_U32(ctx, 31, 0x22F9A8u);
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F9A8u; }
        if (ctx->pc != 0x22F9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F9A8u; }
        if (ctx->pc != 0x22F9A8u) { return; }
    }
    ctx->pc = 0x22F9A8u;
label_22f9a8:
    // 0x22f9a8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x22f9a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22f9ac:
    // 0x22f9ac: 0xc08c204  jal         func_230810
label_22f9b0:
    if (ctx->pc == 0x22F9B0u) {
        ctx->pc = 0x22F9B0u;
            // 0x22f9b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22F9B4u;
        goto label_22f9b4;
    }
    ctx->pc = 0x22F9ACu;
    SET_GPR_U32(ctx, 31, 0x22F9B4u);
    ctx->pc = 0x22F9B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F9ACu;
            // 0x22f9b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230810u;
    if (runtime->hasFunction(0x230810u)) {
        auto targetFn = runtime->lookupFunction(0x230810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F9B4u; }
        if (ctx->pc != 0x22F9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230810_0x230810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F9B4u; }
        if (ctx->pc != 0x22F9B4u) { return; }
    }
    ctx->pc = 0x22F9B4u;
label_22f9b4:
    // 0x22f9b4: 0x96020030  lhu         $v0, 0x30($s0)
    ctx->pc = 0x22f9b4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
label_22f9b8:
    // 0x22f9b8: 0x3043fffe  andi        $v1, $v0, 0xFFFE
    ctx->pc = 0x22f9b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
label_22f9bc:
    // 0x22f9bc: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x22f9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_22f9c0:
    // 0x22f9c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_22f9c4:
    if (ctx->pc == 0x22F9C4u) {
        ctx->pc = 0x22F9C4u;
            // 0x22f9c4: 0xa6030030  sh          $v1, 0x30($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x22F9C8u;
        goto label_22f9c8;
    }
    ctx->pc = 0x22F9C0u;
    {
        const bool branch_taken_0x22f9c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F9C0u;
            // 0x22f9c4: 0xa6030030  sh          $v1, 0x30($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f9c0) {
            ctx->pc = 0x22F9D8u;
            goto label_22f9d8;
        }
    }
    ctx->pc = 0x22F9C8u;
label_22f9c8:
    // 0x22f9c8: 0x3062fffc  andi        $v0, $v1, 0xFFFC
    ctx->pc = 0x22f9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65532);
label_22f9cc:
    // 0x22f9cc: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x22f9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_22f9d0:
    // 0x22f9d0: 0xc08b6f0  jal         func_22DBC0
label_22f9d4:
    if (ctx->pc == 0x22F9D4u) {
        ctx->pc = 0x22F9D4u;
            // 0x22f9d4: 0xa6020030  sh          $v0, 0x30($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x22F9D8u;
        goto label_22f9d8;
    }
    ctx->pc = 0x22F9D0u;
    SET_GPR_U32(ctx, 31, 0x22F9D8u);
    ctx->pc = 0x22F9D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F9D0u;
            // 0x22f9d4: 0xa6020030  sh          $v0, 0x30($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22DBC0u;
    if (runtime->hasFunction(0x22DBC0u)) {
        auto targetFn = runtime->lookupFunction(0x22DBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F9D8u; }
        if (ctx->pc != 0x22F9D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022DBC0_0x22dbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F9D8u; }
        if (ctx->pc != 0x22F9D8u) { return; }
    }
    ctx->pc = 0x22F9D8u;
label_22f9d8:
    // 0x22f9d8: 0xde0b0000  ld          $t3, 0x0($s0)
    ctx->pc = 0x22f9d8u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_22f9dc:
    // 0x22f9dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22f9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22f9e0:
    // 0x22f9e0: 0xde0a0008  ld          $t2, 0x8($s0)
    ctx->pc = 0x22f9e0u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 16), 8)));
label_22f9e4:
    // 0x22f9e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22f9e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f9e8:
    // 0x22f9e8: 0xde090010  ld          $t1, 0x10($s0)
    ctx->pc = 0x22f9e8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 16), 16)));
label_22f9ec:
    // 0x22f9ec: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x22f9ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_22f9f0:
    // 0x22f9f0: 0xde020018  ld          $v0, 0x18($s0)
    ctx->pc = 0x22f9f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 24)));
label_22f9f4:
    // 0x22f9f4: 0xde030020  ld          $v1, 0x20($s0)
    ctx->pc = 0x22f9f4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 32)));
label_22f9f8:
    // 0x22f9f8: 0xde070028  ld          $a3, 0x28($s0)
    ctx->pc = 0x22f9f8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 16), 40)));
label_22f9fc:
    // 0x22f9fc: 0xde080030  ld          $t0, 0x30($s0)
    ctx->pc = 0x22f9fcu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 16), 48)));
label_22fa00:
    // 0x22fa00: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x22fa00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
label_22fa04:
    // 0x22fa04: 0xffaa0008  sd          $t2, 0x8($sp)
    ctx->pc = 0x22fa04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 10));
label_22fa08:
    // 0x22fa08: 0xffa90010  sd          $t1, 0x10($sp)
    ctx->pc = 0x22fa08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 9));
label_22fa0c:
    // 0x22fa0c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x22fa0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_22fa10:
    // 0x22fa10: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x22fa10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
label_22fa14:
    // 0x22fa14: 0xffa70028  sd          $a3, 0x28($sp)
    ctx->pc = 0x22fa14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 7));
label_22fa18:
    // 0x22fa18: 0xc049cb6  jal         func_1272D8
label_22fa1c:
    if (ctx->pc == 0x22FA1Cu) {
        ctx->pc = 0x22FA1Cu;
            // 0x22fa1c: 0xffa80030  sd          $t0, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 8));
        ctx->pc = 0x22FA20u;
        goto label_22fa20;
    }
    ctx->pc = 0x22FA18u;
    SET_GPR_U32(ctx, 31, 0x22FA20u);
    ctx->pc = 0x22FA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FA18u;
            // 0x22fa1c: 0xffa80030  sd          $t0, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FA20u; }
        if (ctx->pc != 0x22FA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FA20u; }
        if (ctx->pc != 0x22FA20u) { return; }
    }
    ctx->pc = 0x22FA20u;
label_22fa20:
    // 0x22fa20: 0xc08c698  jal         func_231A60
label_22fa24:
    if (ctx->pc == 0x22FA24u) {
        ctx->pc = 0x22FA24u;
            // 0x22fa24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22FA28u;
        goto label_22fa28;
    }
    ctx->pc = 0x22FA20u;
    SET_GPR_U32(ctx, 31, 0x22FA28u);
    ctx->pc = 0x22FA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FA20u;
            // 0x22fa24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FA28u; }
        if (ctx->pc != 0x22FA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FA28u; }
        if (ctx->pc != 0x22FA28u) { return; }
    }
    ctx->pc = 0x22FA28u;
label_22fa28:
    // 0x22fa28: 0x9662000a  lhu         $v0, 0xA($s3)
    ctx->pc = 0x22fa28u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
label_22fa2c:
    // 0x22fa2c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x22fa2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_22fa30:
    // 0x22fa30: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_22fa34:
    if (ctx->pc == 0x22FA34u) {
        ctx->pc = 0x22FA38u;
        goto label_22fa38;
    }
    ctx->pc = 0x22FA30u;
    {
        const bool branch_taken_0x22fa30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fa30) {
            ctx->pc = 0x22FA50u;
            goto label_22fa50;
        }
    }
    ctx->pc = 0x22FA38u;
label_22fa38:
    // 0x22fa38: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x22fa38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_22fa3c:
    // 0x22fa3c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x22fa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_22fa40:
    // 0x22fa40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_22fa44:
    if (ctx->pc == 0x22FA44u) {
        ctx->pc = 0x22FA48u;
        goto label_22fa48;
    }
    ctx->pc = 0x22FA40u;
    {
        const bool branch_taken_0x22fa40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fa40) {
            ctx->pc = 0x22FA50u;
            goto label_22fa50;
        }
    }
    ctx->pc = 0x22FA48u;
label_22fa48:
    // 0x22fa48: 0x40f809  jalr        $v0
label_22fa4c:
    if (ctx->pc == 0x22FA4Cu) {
        ctx->pc = 0x22FA4Cu;
            // 0x22fa4c: 0x8fa40028  lw          $a0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->pc = 0x22FA50u;
        goto label_22fa50;
    }
    ctx->pc = 0x22FA48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22FA50u);
        ctx->pc = 0x22FA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FA48u;
            // 0x22fa4c: 0x8fa40028  lw          $a0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22FA50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22FA50u; }
            if (ctx->pc != 0x22FA50u) { return; }
        }
        }
    }
    ctx->pc = 0x22FA50u;
label_22fa50:
    // 0x22fa50: 0xc08c29c  jal         func_230A70
label_22fa54:
    if (ctx->pc == 0x22FA54u) {
        ctx->pc = 0x22FA54u;
            // 0x22fa54: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22FA58u;
        goto label_22fa58;
    }
    ctx->pc = 0x22FA50u;
    SET_GPR_U32(ctx, 31, 0x22FA58u);
    ctx->pc = 0x22FA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FA50u;
            // 0x22fa54: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230A70u;
    if (runtime->hasFunction(0x230A70u)) {
        auto targetFn = runtime->lookupFunction(0x230A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FA58u; }
        if (ctx->pc != 0x22FA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230A70_0x230a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FA58u; }
        if (ctx->pc != 0x22FA58u) { return; }
    }
    ctx->pc = 0x22FA58u;
label_22fa58:
    // 0x22fa58: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x22fa58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_22fa5c:
    // 0x22fa5c: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x22fa5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_22fa60:
    // 0x22fa60: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x22fa60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_22fa64:
    // 0x22fa64: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x22fa64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_22fa68:
    // 0x22fa68: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x22fa68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22fa6c:
    // 0x22fa6c: 0x3e00008  jr          $ra
label_22fa70:
    if (ctx->pc == 0x22FA70u) {
        ctx->pc = 0x22FA70u;
            // 0x22fa70: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x22FA74u;
        goto label_22fa74;
    }
    ctx->pc = 0x22FA6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FA70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FA6Cu;
            // 0x22fa70: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22FA74u;
label_22fa74:
    // 0x22fa74: 0x0  nop
    ctx->pc = 0x22fa74u;
    // NOP
    ctx->pc = 0x22fa78u;
}
