#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B6210
// Address: 0x2b6210 - 0x2b6410
void sub_002B6210_0x2b6210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6210_0x2b6210");
#endif

    switch (ctx->pc) {
        case 0x2b6210u: goto label_2b6210;
        case 0x2b6214u: goto label_2b6214;
        case 0x2b6218u: goto label_2b6218;
        case 0x2b621cu: goto label_2b621c;
        case 0x2b6220u: goto label_2b6220;
        case 0x2b6224u: goto label_2b6224;
        case 0x2b6228u: goto label_2b6228;
        case 0x2b622cu: goto label_2b622c;
        case 0x2b6230u: goto label_2b6230;
        case 0x2b6234u: goto label_2b6234;
        case 0x2b6238u: goto label_2b6238;
        case 0x2b623cu: goto label_2b623c;
        case 0x2b6240u: goto label_2b6240;
        case 0x2b6244u: goto label_2b6244;
        case 0x2b6248u: goto label_2b6248;
        case 0x2b624cu: goto label_2b624c;
        case 0x2b6250u: goto label_2b6250;
        case 0x2b6254u: goto label_2b6254;
        case 0x2b6258u: goto label_2b6258;
        case 0x2b625cu: goto label_2b625c;
        case 0x2b6260u: goto label_2b6260;
        case 0x2b6264u: goto label_2b6264;
        case 0x2b6268u: goto label_2b6268;
        case 0x2b626cu: goto label_2b626c;
        case 0x2b6270u: goto label_2b6270;
        case 0x2b6274u: goto label_2b6274;
        case 0x2b6278u: goto label_2b6278;
        case 0x2b627cu: goto label_2b627c;
        case 0x2b6280u: goto label_2b6280;
        case 0x2b6284u: goto label_2b6284;
        case 0x2b6288u: goto label_2b6288;
        case 0x2b628cu: goto label_2b628c;
        case 0x2b6290u: goto label_2b6290;
        case 0x2b6294u: goto label_2b6294;
        case 0x2b6298u: goto label_2b6298;
        case 0x2b629cu: goto label_2b629c;
        case 0x2b62a0u: goto label_2b62a0;
        case 0x2b62a4u: goto label_2b62a4;
        case 0x2b62a8u: goto label_2b62a8;
        case 0x2b62acu: goto label_2b62ac;
        case 0x2b62b0u: goto label_2b62b0;
        case 0x2b62b4u: goto label_2b62b4;
        case 0x2b62b8u: goto label_2b62b8;
        case 0x2b62bcu: goto label_2b62bc;
        case 0x2b62c0u: goto label_2b62c0;
        case 0x2b62c4u: goto label_2b62c4;
        case 0x2b62c8u: goto label_2b62c8;
        case 0x2b62ccu: goto label_2b62cc;
        case 0x2b62d0u: goto label_2b62d0;
        case 0x2b62d4u: goto label_2b62d4;
        case 0x2b62d8u: goto label_2b62d8;
        case 0x2b62dcu: goto label_2b62dc;
        case 0x2b62e0u: goto label_2b62e0;
        case 0x2b62e4u: goto label_2b62e4;
        case 0x2b62e8u: goto label_2b62e8;
        case 0x2b62ecu: goto label_2b62ec;
        case 0x2b62f0u: goto label_2b62f0;
        case 0x2b62f4u: goto label_2b62f4;
        case 0x2b62f8u: goto label_2b62f8;
        case 0x2b62fcu: goto label_2b62fc;
        case 0x2b6300u: goto label_2b6300;
        case 0x2b6304u: goto label_2b6304;
        case 0x2b6308u: goto label_2b6308;
        case 0x2b630cu: goto label_2b630c;
        case 0x2b6310u: goto label_2b6310;
        case 0x2b6314u: goto label_2b6314;
        case 0x2b6318u: goto label_2b6318;
        case 0x2b631cu: goto label_2b631c;
        case 0x2b6320u: goto label_2b6320;
        case 0x2b6324u: goto label_2b6324;
        case 0x2b6328u: goto label_2b6328;
        case 0x2b632cu: goto label_2b632c;
        case 0x2b6330u: goto label_2b6330;
        case 0x2b6334u: goto label_2b6334;
        case 0x2b6338u: goto label_2b6338;
        case 0x2b633cu: goto label_2b633c;
        case 0x2b6340u: goto label_2b6340;
        case 0x2b6344u: goto label_2b6344;
        case 0x2b6348u: goto label_2b6348;
        case 0x2b634cu: goto label_2b634c;
        case 0x2b6350u: goto label_2b6350;
        case 0x2b6354u: goto label_2b6354;
        case 0x2b6358u: goto label_2b6358;
        case 0x2b635cu: goto label_2b635c;
        case 0x2b6360u: goto label_2b6360;
        case 0x2b6364u: goto label_2b6364;
        case 0x2b6368u: goto label_2b6368;
        case 0x2b636cu: goto label_2b636c;
        case 0x2b6370u: goto label_2b6370;
        case 0x2b6374u: goto label_2b6374;
        case 0x2b6378u: goto label_2b6378;
        case 0x2b637cu: goto label_2b637c;
        case 0x2b6380u: goto label_2b6380;
        case 0x2b6384u: goto label_2b6384;
        case 0x2b6388u: goto label_2b6388;
        case 0x2b638cu: goto label_2b638c;
        case 0x2b6390u: goto label_2b6390;
        case 0x2b6394u: goto label_2b6394;
        case 0x2b6398u: goto label_2b6398;
        case 0x2b639cu: goto label_2b639c;
        case 0x2b63a0u: goto label_2b63a0;
        case 0x2b63a4u: goto label_2b63a4;
        case 0x2b63a8u: goto label_2b63a8;
        case 0x2b63acu: goto label_2b63ac;
        case 0x2b63b0u: goto label_2b63b0;
        case 0x2b63b4u: goto label_2b63b4;
        case 0x2b63b8u: goto label_2b63b8;
        case 0x2b63bcu: goto label_2b63bc;
        case 0x2b63c0u: goto label_2b63c0;
        case 0x2b63c4u: goto label_2b63c4;
        case 0x2b63c8u: goto label_2b63c8;
        case 0x2b63ccu: goto label_2b63cc;
        case 0x2b63d0u: goto label_2b63d0;
        case 0x2b63d4u: goto label_2b63d4;
        case 0x2b63d8u: goto label_2b63d8;
        case 0x2b63dcu: goto label_2b63dc;
        case 0x2b63e0u: goto label_2b63e0;
        case 0x2b63e4u: goto label_2b63e4;
        case 0x2b63e8u: goto label_2b63e8;
        case 0x2b63ecu: goto label_2b63ec;
        case 0x2b63f0u: goto label_2b63f0;
        case 0x2b63f4u: goto label_2b63f4;
        case 0x2b63f8u: goto label_2b63f8;
        case 0x2b63fcu: goto label_2b63fc;
        case 0x2b6400u: goto label_2b6400;
        case 0x2b6404u: goto label_2b6404;
        case 0x2b6408u: goto label_2b6408;
        case 0x2b640cu: goto label_2b640c;
        default: break;
    }

    ctx->pc = 0x2b6210u;

label_2b6210:
    // 0x2b6210: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2b6210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2b6214:
    // 0x2b6214: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2b6214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_2b6218:
    // 0x2b6218: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2b6218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_2b621c:
    // 0x2b621c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2b621cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2b6220:
    // 0x2b6220: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2b6220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2b6224:
    // 0x2b6224: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2b6224u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b6228:
    // 0x2b6228: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b6228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2b622c:
    // 0x2b622c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2b622cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2b6230:
    // 0x2b6230: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b6230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2b6234:
    // 0x2b6234: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b6234u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b6238:
    // 0x2b6238: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2b6238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2b623c:
    // 0x2b623c: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2b623cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
label_2b6240:
    // 0x2b6240: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x2b6240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_2b6244:
    // 0x2b6244: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2b6244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2b6248:
    // 0x2b6248: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b6248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2b624c:
    // 0x2b624c: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x2b624cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_2b6250:
    // 0x2b6250: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x2b6250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_2b6254:
    // 0x2b6254: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2b6258:
    if (ctx->pc == 0x2B6258u) {
        ctx->pc = 0x2B6258u;
            // 0x2b6258: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B625Cu;
        goto label_2b625c;
    }
    ctx->pc = 0x2B6254u;
    {
        const bool branch_taken_0x2b6254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6254u;
            // 0x2b6258: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6254) {
            ctx->pc = 0x2B626Cu;
            goto label_2b626c;
        }
    }
    ctx->pc = 0x2B625Cu;
label_2b625c:
    // 0x2b625c: 0xc0ad904  jal         func_2B6410
label_2b6260:
    if (ctx->pc == 0x2B6260u) {
        ctx->pc = 0x2B6264u;
        goto label_2b6264;
    }
    ctx->pc = 0x2B625Cu;
    SET_GPR_U32(ctx, 31, 0x2B6264u);
    ctx->pc = 0x2B6410u;
    if (runtime->hasFunction(0x2B6410u)) {
        auto targetFn = runtime->lookupFunction(0x2B6410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6264u; }
        if (ctx->pc != 0x2B6264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6410_0x2b6410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6264u; }
        if (ctx->pc != 0x2B6264u) { return; }
    }
    ctx->pc = 0x2B6264u;
label_2b6264:
    // 0x2b6264: 0x1000005f  b           . + 4 + (0x5F << 2)
label_2b6268:
    if (ctx->pc == 0x2B6268u) {
        ctx->pc = 0x2B6268u;
            // 0x2b6268: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x2B626Cu;
        goto label_2b626c;
    }
    ctx->pc = 0x2B6264u;
    {
        const bool branch_taken_0x2b6264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6264u;
            // 0x2b6268: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6264) {
            ctx->pc = 0x2B63E4u;
            goto label_2b63e4;
        }
    }
    ctx->pc = 0x2B626Cu;
label_2b626c:
    // 0x2b626c: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x2b626cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_2b6270:
    // 0x2b6270: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2b6274:
    if (ctx->pc == 0x2B6274u) {
        ctx->pc = 0x2B6278u;
        goto label_2b6278;
    }
    ctx->pc = 0x2B6270u;
    {
        const bool branch_taken_0x2b6270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6270) {
            ctx->pc = 0x2B6288u;
            goto label_2b6288;
        }
    }
    ctx->pc = 0x2B6278u;
label_2b6278:
    // 0x2b6278: 0xc0adbaa  jal         func_2B6EA8
label_2b627c:
    if (ctx->pc == 0x2B627Cu) {
        ctx->pc = 0x2B627Cu;
            // 0x2b627c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B6280u;
        goto label_2b6280;
    }
    ctx->pc = 0x2B6278u;
    SET_GPR_U32(ctx, 31, 0x2B6280u);
    ctx->pc = 0x2B627Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6278u;
            // 0x2b627c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6EA8u;
    if (runtime->hasFunction(0x2B6EA8u)) {
        auto targetFn = runtime->lookupFunction(0x2B6EA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6280u; }
        if (ctx->pc != 0x2B6280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6EA8_0x2b6ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6280u; }
        if (ctx->pc != 0x2B6280u) { return; }
    }
    ctx->pc = 0x2B6280u;
label_2b6280:
    // 0x2b6280: 0x18400058  blez        $v0, . + 4 + (0x58 << 2)
label_2b6284:
    if (ctx->pc == 0x2B6284u) {
        ctx->pc = 0x2B6284u;
            // 0x2b6284: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x2B6288u;
        goto label_2b6288;
    }
    ctx->pc = 0x2B6280u;
    {
        const bool branch_taken_0x2b6280 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B6284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6280u;
            // 0x2b6284: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6280) {
            ctx->pc = 0x2B63E4u;
            goto label_2b63e4;
        }
    }
    ctx->pc = 0x2B6288u;
label_2b6288:
    // 0x2b6288: 0x12600055  beqz        $s3, . + 4 + (0x55 << 2)
label_2b628c:
    if (ctx->pc == 0x2B628Cu) {
        ctx->pc = 0x2B628Cu;
            // 0x2b628c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B6290u;
        goto label_2b6290;
    }
    ctx->pc = 0x2B6288u;
    {
        const bool branch_taken_0x2b6288 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B628Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6288u;
            // 0x2b628c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6288) {
            ctx->pc = 0x2B63E0u;
            goto label_2b63e0;
        }
    }
    ctx->pc = 0x2B6290u;
label_2b6290:
    // 0x2b6290: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x2b6290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_2b6294:
    // 0x2b6294: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x2b6294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_2b6298:
    // 0x2b6298: 0x2457009c  addiu       $s7, $v0, 0x9C
    ctx->pc = 0x2b6298u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 156));
label_2b629c:
    // 0x2b629c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2b62a0:
    if (ctx->pc == 0x2B62A0u) {
        ctx->pc = 0x2B62A0u;
            // 0x2b62a0: 0x245100cc  addiu       $s1, $v0, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 204));
        ctx->pc = 0x2B62A4u;
        goto label_2b62a4;
    }
    ctx->pc = 0x2B629Cu;
    {
        const bool branch_taken_0x2b629c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B62A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B629Cu;
            // 0x2b62a0: 0x245100cc  addiu       $s1, $v0, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 204));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b629c) {
            ctx->pc = 0x2B62BCu;
            goto label_2b62bc;
        }
    }
    ctx->pc = 0x2B62A4u;
label_2b62a4:
    // 0x2b62a4: 0x8e42007c  lw          $v0, 0x7C($s2)
    ctx->pc = 0x2b62a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
label_2b62a8:
    // 0x2b62a8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2b62ac:
    if (ctx->pc == 0x2B62ACu) {
        ctx->pc = 0x2B62ACu;
            // 0x2b62ac: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B62B0u;
        goto label_2b62b0;
    }
    ctx->pc = 0x2B62A8u;
    {
        const bool branch_taken_0x2b62a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b62a8) {
            ctx->pc = 0x2B62ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B62A8u;
            // 0x2b62ac: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B62C0u;
            goto label_2b62c0;
        }
    }
    ctx->pc = 0x2B62B0u;
label_2b62b0:
    // 0x2b62b0: 0x8e420078  lw          $v0, 0x78($s2)
    ctx->pc = 0x2b62b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
label_2b62b4:
    // 0x2b62b4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2b62b8:
    if (ctx->pc == 0x2B62B8u) {
        ctx->pc = 0x2B62BCu;
        goto label_2b62bc;
    }
    ctx->pc = 0x2B62B4u;
    {
        const bool branch_taken_0x2b62b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b62b4) {
            ctx->pc = 0x2B62C0u;
            goto label_2b62c0;
        }
    }
    ctx->pc = 0x2B62BCu;
label_2b62bc:
    // 0x2b62bc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2b62bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b62c0:
    // 0x2b62c0: 0x16000002  bnez        $s0, . + 4 + (0x2 << 2)
label_2b62c4:
    if (ctx->pc == 0x2B62C4u) {
        ctx->pc = 0x2B62C4u;
            // 0x2b62c4: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B62C8u;
        goto label_2b62c8;
    }
    ctx->pc = 0x2B62C0u;
    {
        const bool branch_taken_0x2b62c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B62C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B62C0u;
            // 0x2b62c4: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b62c0) {
            ctx->pc = 0x2B62CCu;
            goto label_2b62cc;
        }
    }
    ctx->pc = 0x2B62C8u;
label_2b62c8:
    // 0x2b62c8: 0x8e5e0074  lw          $fp, 0x74($s2)
    ctx->pc = 0x2b62c8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
label_2b62cc:
    // 0x2b62cc: 0x8ef00010  lw          $s0, 0x10($s7)
    ctx->pc = 0x2b62ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
label_2b62d0:
    // 0x2b62d0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2b62d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2b62d4:
    // 0x2b62d4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2b62d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b62d8:
    // 0x2b62d8: 0xa2150000  sb          $s5, 0x0($s0)
    ctx->pc = 0x2b62d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 21));
label_2b62dc:
    // 0x2b62dc: 0xae350000  sw          $s5, 0x0($s1)
    ctx->pc = 0x2b62dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 21));
label_2b62e0:
    // 0x2b62e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b62e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2b62e4:
    // 0x2b62e4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2b62e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2b62e8:
    // 0x2b62e8: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x2b62e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_2b62ec:
    // 0x2b62ec: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x2b62ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_2b62f0:
    // 0x2b62f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b62f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2b62f4:
    // 0x2b62f4: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x2b62f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_2b62f8:
    // 0x2b62f8: 0x26140001  addiu       $s4, $s0, 0x1
    ctx->pc = 0x2b62f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2b62fc:
    // 0x2b62fc: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x2b62fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_2b6300:
    // 0x2b6300: 0x26900002  addiu       $s0, $s4, 0x2
    ctx->pc = 0x2b6300u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
label_2b6304:
    // 0x2b6304: 0xae330004  sw          $s3, 0x4($s1)
    ctx->pc = 0x2b6304u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
label_2b6308:
    // 0x2b6308: 0xae30000c  sw          $s0, 0xC($s1)
    ctx->pc = 0x2b6308u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
label_2b630c:
    // 0x2b630c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b630cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b6310:
    // 0x2b6310: 0xc049c48  jal         func_127120
label_2b6314:
    if (ctx->pc == 0x2B6314u) {
        ctx->pc = 0x2B6314u;
            // 0x2b6314: 0xae360010  sw          $s6, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 22));
        ctx->pc = 0x2B6318u;
        goto label_2b6318;
    }
    ctx->pc = 0x2B6310u;
    SET_GPR_U32(ctx, 31, 0x2B6318u);
    ctx->pc = 0x2B6314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6310u;
            // 0x2b6314: 0xae360010  sw          $s6, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6318u; }
        if (ctx->pc != 0x2B6318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6318u; }
        if (ctx->pc != 0x2B6318u) { return; }
    }
    ctx->pc = 0x2B6318u;
label_2b6318:
    // 0x2b6318: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2b6318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2b631c:
    // 0x2b631c: 0x13c00010  beqz        $fp, . + 4 + (0x10 << 2)
label_2b6320:
    if (ctx->pc == 0x2B6320u) {
        ctx->pc = 0x2B6320u;
            // 0x2b6320: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->pc = 0x2B6324u;
        goto label_2b6324;
    }
    ctx->pc = 0x2B631Cu;
    {
        const bool branch_taken_0x2b631c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B631Cu;
            // 0x2b6320: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b631c) {
            ctx->pc = 0x2B6360u;
            goto label_2b6360;
        }
    }
    ctx->pc = 0x2B6324u;
label_2b6324:
    // 0x2b6324: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2b6324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2b6328:
    // 0x2b6328: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b6328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b632c:
    // 0x2b632c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2b632cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2b6330:
    // 0x2b6330: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b6330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b6334:
    // 0x2b6334: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x2b6334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2b6338:
    // 0x2b6338: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2b6338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2b633c:
    // 0x2b633c: 0x40f809  jalr        $v0
label_2b6340:
    if (ctx->pc == 0x2B6340u) {
        ctx->pc = 0x2B6340u;
            // 0x2b6340: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->pc = 0x2B6344u;
        goto label_2b6344;
    }
    ctx->pc = 0x2B633Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B6344u);
        ctx->pc = 0x2B6340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B633Cu;
            // 0x2b6340: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B6344u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B6344u; }
            if (ctx->pc != 0x2B6344u) { return; }
        }
        }
    }
    ctx->pc = 0x2B6344u;
label_2b6344:
    // 0x2b6344: 0x18400026  blez        $v0, . + 4 + (0x26 << 2)
label_2b6348:
    if (ctx->pc == 0x2B6348u) {
        ctx->pc = 0x2B6348u;
            // 0x2b6348: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2B634Cu;
        goto label_2b634c;
    }
    ctx->pc = 0x2B6344u;
    {
        const bool branch_taken_0x2b6344 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B6348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6344u;
            // 0x2b6348: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6344) {
            ctx->pc = 0x2B63E0u;
            goto label_2b63e0;
        }
    }
    ctx->pc = 0x2B634Cu;
label_2b634c:
    // 0x2b634c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2b634cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2b6350:
    // 0x2b6350: 0xae30000c  sw          $s0, 0xC($s1)
    ctx->pc = 0x2b6350u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
label_2b6354:
    // 0x2b6354: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x2b6354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_2b6358:
    // 0x2b6358: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x2b6358u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
label_2b635c:
    // 0x2b635c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2b635cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_2b6360:
    // 0x2b6360: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2b6360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2b6364:
    // 0x2b6364: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b6364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b6368:
    // 0x2b6368: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x2b6368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2b636c:
    // 0x2b636c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b636cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b6370:
    // 0x2b6370: 0x40f809  jalr        $v0
label_2b6374:
    if (ctx->pc == 0x2B6374u) {
        ctx->pc = 0x2B6374u;
            // 0x2b6374: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B6378u;
        goto label_2b6378;
    }
    ctx->pc = 0x2B6370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B6378u);
        ctx->pc = 0x2B6374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6370u;
            // 0x2b6374: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B6378u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B6378u; }
            if (ctx->pc != 0x2B6378u) { return; }
        }
        }
    }
    ctx->pc = 0x2B6378u;
label_2b6378:
    // 0x2b6378: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2b6378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2b637c:
    // 0x2b637c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b637cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b6380:
    // 0x2b6380: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2b6380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2b6384:
    // 0x2b6384: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2b6384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2b6388:
    // 0x2b6388: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2b6388u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
label_2b638c:
    // 0x2b638c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2b638cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b6390:
    // 0x2b6390: 0xa2830000  sb          $v1, 0x0($s4)
    ctx->pc = 0x2b6390u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 3));
label_2b6394:
    // 0x2b6394: 0x92220004  lbu         $v0, 0x4($s1)
    ctx->pc = 0x2b6394u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_2b6398:
    // 0x2b6398: 0xa2820001  sb          $v0, 0x1($s4)
    ctx->pc = 0x2b6398u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 2));
label_2b639c:
    // 0x2b639c: 0xae350000  sw          $s5, 0x0($s1)
    ctx->pc = 0x2b639cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 21));
label_2b63a0:
    // 0x2b63a0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2b63a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2b63a4:
    // 0x2b63a4: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x2b63a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
label_2b63a8:
    // 0x2b63a8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2b63a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_2b63ac:
    // 0x2b63ac: 0xaee20008  sw          $v0, 0x8($s7)
    ctx->pc = 0x2b63acu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 2));
label_2b63b0:
    // 0x2b63b0: 0xaee0000c  sw          $zero, 0xC($s7)
    ctx->pc = 0x2b63b0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 12), GPR_U32(ctx, 0));
label_2b63b4:
    // 0x2b63b4: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x2b63b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_2b63b8:
    // 0x2b63b8: 0xac5300e8  sw          $s3, 0xE8($v0)
    ctx->pc = 0x2b63b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 232), GPR_U32(ctx, 19));
label_2b63bc:
    // 0x2b63bc: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x2b63bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_2b63c0:
    // 0x2b63c0: 0xac7600f4  sw          $s6, 0xF4($v1)
    ctx->pc = 0x2b63c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 244), GPR_U32(ctx, 22));
label_2b63c4:
    // 0x2b63c4: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x2b63c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_2b63c8:
    // 0x2b63c8: 0xac5500ec  sw          $s5, 0xEC($v0)
    ctx->pc = 0x2b63c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 236), GPR_U32(ctx, 21));
label_2b63cc:
    // 0x2b63cc: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x2b63ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_2b63d0:
    // 0x2b63d0: 0xc0ad904  jal         func_2B6410
label_2b63d4:
    if (ctx->pc == 0x2B63D4u) {
        ctx->pc = 0x2B63D4u;
            // 0x2b63d4: 0xac7300f0  sw          $s3, 0xF0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 240), GPR_U32(ctx, 19));
        ctx->pc = 0x2B63D8u;
        goto label_2b63d8;
    }
    ctx->pc = 0x2B63D0u;
    SET_GPR_U32(ctx, 31, 0x2B63D8u);
    ctx->pc = 0x2B63D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B63D0u;
            // 0x2b63d4: 0xac7300f0  sw          $s3, 0xF0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 240), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6410u;
    if (runtime->hasFunction(0x2B6410u)) {
        auto targetFn = runtime->lookupFunction(0x2B6410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B63D8u; }
        if (ctx->pc != 0x2B63D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6410_0x2b6410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B63D8u; }
        if (ctx->pc != 0x2B63D8u) { return; }
    }
    ctx->pc = 0x2B63D8u;
label_2b63d8:
    // 0x2b63d8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2b63dc:
    if (ctx->pc == 0x2B63DCu) {
        ctx->pc = 0x2B63DCu;
            // 0x2b63dc: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x2B63E0u;
        goto label_2b63e0;
    }
    ctx->pc = 0x2B63D8u;
    {
        const bool branch_taken_0x2b63d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B63DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B63D8u;
            // 0x2b63dc: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b63d8) {
            ctx->pc = 0x2B63E4u;
            goto label_2b63e4;
        }
    }
    ctx->pc = 0x2B63E0u;
label_2b63e0:
    // 0x2b63e0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2b63e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2b63e4:
    // 0x2b63e4: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2b63e4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2b63e8:
    // 0x2b63e8: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x2b63e8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2b63ec:
    // 0x2b63ec: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2b63ecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2b63f0:
    // 0x2b63f0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2b63f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2b63f4:
    // 0x2b63f4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2b63f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2b63f8:
    // 0x2b63f8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2b63f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2b63fc:
    // 0x2b63fc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b63fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b6400:
    // 0x2b6400: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b6400u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b6404:
    // 0x2b6404: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b6404u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b6408:
    // 0x2b6408: 0x3e00008  jr          $ra
label_2b640c:
    if (ctx->pc == 0x2B640Cu) {
        ctx->pc = 0x2B640Cu;
            // 0x2b640c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x2B6410u;
        goto label_fallthrough_0x2b6408;
    }
    ctx->pc = 0x2B6408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B640Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6408u;
            // 0x2b640c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2b6408:
    ctx->pc = 0x2B6410u;
    ctx->pc = 0x2b6410u;
}
