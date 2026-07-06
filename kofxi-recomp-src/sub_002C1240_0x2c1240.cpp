#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C1240
// Address: 0x2c1240 - 0x2c12f8
void sub_002C1240_0x2c1240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1240_0x2c1240");
#endif

    switch (ctx->pc) {
        case 0x2c1264u: goto label_2c1264;
        case 0x2c1270u: goto label_2c1270;
        case 0x2c1278u: goto label_2c1278;
        case 0x2c1288u: goto label_2c1288;
        case 0x2c1290u: goto label_2c1290;
        case 0x2c12a0u: goto label_2c12a0;
        case 0x2c12a8u: goto label_2c12a8;
        case 0x2c12b8u: goto label_2c12b8;
        case 0x2c12c0u: goto label_2c12c0;
        case 0x2c12c4u: goto label_2c12c4;
        case 0x2c12d0u: goto label_2c12d0;
        case 0x2c12e8u: goto label_2c12e8;
        default: break;
    }

    ctx->pc = 0x2c1240u;

    // 0x2c1240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c1240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c1244: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1244u;
    {
        const bool branch_taken_0x2c1244 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C1248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1244u;
            // 0x2c1248: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1244) {
            ctx->pc = 0x2C1254u;
            goto label_2c1254;
        }
    }
    ctx->pc = 0x2C124Cu;
    // 0x2c124c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C124Cu;
    {
        const bool branch_taken_0x2c124c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C124Cu;
            // 0x2c1250: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c124c) {
            ctx->pc = 0x2C1268u;
            goto label_2c1268;
        }
    }
    ctx->pc = 0x2C1254u;
label_2c1254:
    // 0x2c1254: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x2c1254u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c1258: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x2c1258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2c125c: 0xc0a06b2  jal         func_281AC8
    ctx->pc = 0x2C125Cu;
    SET_GPR_U32(ctx, 31, 0x2C1264u);
    ctx->pc = 0x2C1260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C125Cu;
            // 0x2c1260: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281AC8u;
    if (runtime->hasFunction(0x281AC8u)) {
        auto targetFn = runtime->lookupFunction(0x281AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1264u; }
        if (ctx->pc != 0x2C1264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281AC8_0x281ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1264u; }
        if (ctx->pc != 0x2C1264u) { return; }
    }
    ctx->pc = 0x2C1264u;
label_2c1264:
    // 0x2c1264: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2c1264u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2c1268:
    // 0x2c1268: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c1268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c126c: 0x3e00008  jr          $ra
label_2c1270:
    if (ctx->pc == 0x2C1270u) {
        ctx->pc = 0x2C1270u;
            // 0x2c1270: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2C1274u;
        goto label_fallthrough_0x2c126c;
    }
    ctx->pc = 0x2C126Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C126Cu;
            // 0x2c1270: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2c126c:
    ctx->pc = 0x2C1274u;
    // 0x2c1274: 0x0  nop
    ctx->pc = 0x2c1274u;
    // NOP
label_2c1278:
    // 0x2c1278: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1278u;
    {
        const bool branch_taken_0x2c1278 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C127Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1278u;
            // 0x2c127c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1278) {
            ctx->pc = 0x2C1288u;
            goto label_2c1288;
        }
    }
    ctx->pc = 0x2C1280u;
    // 0x2c1280: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1280u;
            // 0x2c1284: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C1288u;
label_2c1288:
    // 0x2c1288: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C1290u;
label_2c1290:
    // 0x2c1290: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1290u;
    {
        const bool branch_taken_0x2c1290 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1290u;
            // 0x2c1294: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1290) {
            ctx->pc = 0x2C12A0u;
            goto label_2c12a0;
        }
    }
    ctx->pc = 0x2C1298u;
    // 0x2c1298: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C129Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1298u;
            // 0x2c129c: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C12A0u;
label_2c12a0:
    // 0x2c12a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C12A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C12A8u;
label_2c12a8:
    // 0x2c12a8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C12A8u;
    {
        const bool branch_taken_0x2c12a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C12ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C12A8u;
            // 0x2c12ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c12a8) {
            ctx->pc = 0x2C12B8u;
            goto label_2c12b8;
        }
    }
    ctx->pc = 0x2C12B0u;
    // 0x2c12b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C12B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C12B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C12B0u;
            // 0x2c12b4: 0x84820004  lh          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C12B8u;
label_2c12b8:
    // 0x2c12b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C12B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C12C0u;
label_2c12c0:
    // 0x2c12c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c12c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2c12c4:
    // 0x2c12c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c12c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c12c8: 0xc0a6a4e  jal         func_29A938
    ctx->pc = 0x2C12C8u;
    SET_GPR_U32(ctx, 31, 0x2C12D0u);
    ctx->pc = 0x29A938u;
    if (runtime->hasFunction(0x29A938u)) {
        auto targetFn = runtime->lookupFunction(0x29A938u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C12D0u; }
        if (ctx->pc != 0x2C12D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029A938_0x29a938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C12D0u; }
        if (ctx->pc != 0x2C12D0u) { return; }
    }
    ctx->pc = 0x2C12D0u;
label_2c12d0:
    // 0x2c12d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c12d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c12d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2c12d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c12d8: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C12D8u;
    {
        const bool branch_taken_0x2c12d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C12DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C12D8u;
            // 0x2c12dc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c12d8) {
            ctx->pc = 0x2C12ECu;
            goto label_2c12ec;
        }
    }
    ctx->pc = 0x2C12E0u;
    // 0x2c12e0: 0xc0b04be  jal         func_2C12F8
    ctx->pc = 0x2C12E0u;
    SET_GPR_U32(ctx, 31, 0x2C12E8u);
    ctx->pc = 0x2C12F8u;
    if (runtime->hasFunction(0x2C12F8u)) {
        auto targetFn = runtime->lookupFunction(0x2C12F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C12E8u; }
        if (ctx->pc != 0x2C12E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C12F8_0x2c12f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C12E8u; }
        if (ctx->pc != 0x2C12E8u) { return; }
    }
    ctx->pc = 0x2C12E8u;
label_2c12e8:
    // 0x2c12e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c12e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c12ec:
    // 0x2c12ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2C12ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C12F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C12ECu;
            // 0x2c12f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C12F4u;
    // 0x2c12f4: 0x0  nop
    ctx->pc = 0x2c12f4u;
    // NOP
    ctx->pc = 0x2c12f8u;
}
