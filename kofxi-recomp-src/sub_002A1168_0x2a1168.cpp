#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A1168
// Address: 0x2a1168 - 0x2a12b8
void sub_002A1168_0x2a1168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1168_0x2a1168");
#endif

    switch (ctx->pc) {
        case 0x2a1168u: goto label_2a1168;
        case 0x2a116cu: goto label_2a116c;
        case 0x2a1170u: goto label_2a1170;
        case 0x2a1174u: goto label_2a1174;
        case 0x2a1178u: goto label_2a1178;
        case 0x2a117cu: goto label_2a117c;
        case 0x2a1180u: goto label_2a1180;
        case 0x2a1184u: goto label_2a1184;
        case 0x2a1188u: goto label_2a1188;
        case 0x2a118cu: goto label_2a118c;
        case 0x2a1190u: goto label_2a1190;
        case 0x2a1194u: goto label_2a1194;
        case 0x2a1198u: goto label_2a1198;
        case 0x2a119cu: goto label_2a119c;
        case 0x2a11a0u: goto label_2a11a0;
        case 0x2a11a4u: goto label_2a11a4;
        case 0x2a11a8u: goto label_2a11a8;
        case 0x2a11acu: goto label_2a11ac;
        case 0x2a11b0u: goto label_2a11b0;
        case 0x2a11b4u: goto label_2a11b4;
        case 0x2a11b8u: goto label_2a11b8;
        case 0x2a11bcu: goto label_2a11bc;
        case 0x2a11c0u: goto label_2a11c0;
        case 0x2a11c4u: goto label_2a11c4;
        case 0x2a11c8u: goto label_2a11c8;
        case 0x2a11ccu: goto label_2a11cc;
        case 0x2a11d0u: goto label_2a11d0;
        case 0x2a11d4u: goto label_2a11d4;
        case 0x2a11d8u: goto label_2a11d8;
        case 0x2a11dcu: goto label_2a11dc;
        case 0x2a11e0u: goto label_2a11e0;
        case 0x2a11e4u: goto label_2a11e4;
        case 0x2a11e8u: goto label_2a11e8;
        case 0x2a11ecu: goto label_2a11ec;
        case 0x2a11f0u: goto label_2a11f0;
        case 0x2a11f4u: goto label_2a11f4;
        case 0x2a11f8u: goto label_2a11f8;
        case 0x2a11fcu: goto label_2a11fc;
        case 0x2a1200u: goto label_2a1200;
        case 0x2a1204u: goto label_2a1204;
        case 0x2a1208u: goto label_2a1208;
        case 0x2a120cu: goto label_2a120c;
        case 0x2a1210u: goto label_2a1210;
        case 0x2a1214u: goto label_2a1214;
        case 0x2a1218u: goto label_2a1218;
        case 0x2a121cu: goto label_2a121c;
        case 0x2a1220u: goto label_2a1220;
        case 0x2a1224u: goto label_2a1224;
        case 0x2a1228u: goto label_2a1228;
        case 0x2a122cu: goto label_2a122c;
        case 0x2a1230u: goto label_2a1230;
        case 0x2a1234u: goto label_2a1234;
        case 0x2a1238u: goto label_2a1238;
        case 0x2a123cu: goto label_2a123c;
        case 0x2a1240u: goto label_2a1240;
        case 0x2a1244u: goto label_2a1244;
        case 0x2a1248u: goto label_2a1248;
        case 0x2a124cu: goto label_2a124c;
        case 0x2a1250u: goto label_2a1250;
        case 0x2a1254u: goto label_2a1254;
        case 0x2a1258u: goto label_2a1258;
        case 0x2a125cu: goto label_2a125c;
        case 0x2a1260u: goto label_2a1260;
        case 0x2a1264u: goto label_2a1264;
        case 0x2a1268u: goto label_2a1268;
        case 0x2a126cu: goto label_2a126c;
        case 0x2a1270u: goto label_2a1270;
        case 0x2a1274u: goto label_2a1274;
        case 0x2a1278u: goto label_2a1278;
        case 0x2a127cu: goto label_2a127c;
        case 0x2a1280u: goto label_2a1280;
        case 0x2a1284u: goto label_2a1284;
        case 0x2a1288u: goto label_2a1288;
        case 0x2a128cu: goto label_2a128c;
        case 0x2a1290u: goto label_2a1290;
        case 0x2a1294u: goto label_2a1294;
        case 0x2a1298u: goto label_2a1298;
        case 0x2a129cu: goto label_2a129c;
        case 0x2a12a0u: goto label_2a12a0;
        case 0x2a12a4u: goto label_2a12a4;
        case 0x2a12a8u: goto label_2a12a8;
        case 0x2a12acu: goto label_2a12ac;
        case 0x2a12b0u: goto label_2a12b0;
        case 0x2a12b4u: goto label_2a12b4;
        default: break;
    }

    ctx->pc = 0x2a1168u;

label_2a1168:
    // 0x2a1168: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2a1168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_2a116c:
    // 0x2a116c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a116cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a1170:
    // 0x2a1170: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x2a1170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
label_2a1174:
    // 0x2a1174: 0xffb700c0  sd          $s7, 0xC0($sp)
    ctx->pc = 0x2a1174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
label_2a1178:
    // 0x2a1178: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x2a1178u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2a117c:
    // 0x2a117c: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x2a117cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
label_2a1180:
    // 0x2a1180: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x2a1180u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_2a1184:
    // 0x2a1184: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x2a1184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
label_2a1188:
    // 0x2a1188: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2a1188u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2a118c:
    // 0x2a118c: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x2a118cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
label_2a1190:
    // 0x2a1190: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2a1190u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a1194:
    // 0x2a1194: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x2a1194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
label_2a1198:
    // 0x2a1198: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x2a1198u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2a119c:
    // 0x2a119c: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2a119cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
label_2a11a0:
    // 0x2a11a0: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2a11a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2a11a4:
    // 0x2a11a4: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2a11a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_2a11a8:
    // 0x2a11a8: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x2a11a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2a11ac:
    // 0x2a11ac: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x2a11acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
label_2a11b0:
    // 0x2a11b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a11b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a11b4:
    // 0x2a11b4: 0x14a20034  bne         $a1, $v0, . + 4 + (0x34 << 2)
label_2a11b8:
    if (ctx->pc == 0x2A11B8u) {
        ctx->pc = 0x2A11B8u;
            // 0x2a11b8: 0xffb10060  sd          $s1, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
        ctx->pc = 0x2A11BCu;
        goto label_2a11bc;
    }
    ctx->pc = 0x2A11B4u;
    {
        const bool branch_taken_0x2a11b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A11B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A11B4u;
            // 0x2a11b8: 0xffb10060  sd          $s1, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a11b4) {
            ctx->pc = 0x2A1288u;
            goto label_2a1288;
        }
    }
    ctx->pc = 0x2A11BCu;
label_2a11bc:
    // 0x2a11bc: 0xc0a1a88  jal         func_286A20
label_2a11c0:
    if (ctx->pc == 0x2A11C0u) {
        ctx->pc = 0x2A11C0u;
            // 0x2a11c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A11C4u;
        goto label_2a11c4;
    }
    ctx->pc = 0x2A11BCu;
    SET_GPR_U32(ctx, 31, 0x2A11C4u);
    ctx->pc = 0x2A11C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A11BCu;
            // 0x2a11c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286A20u;
    if (runtime->hasFunction(0x286A20u)) {
        auto targetFn = runtime->lookupFunction(0x286A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A11C4u; }
        if (ctx->pc != 0x2A11C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286A20_0x286a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A11C4u; }
        if (ctx->pc != 0x2A11C4u) { return; }
    }
    ctx->pc = 0x2A11C4u;
label_2a11c4:
    // 0x2a11c4: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x2a11c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2a11c8:
    // 0x2a11c8: 0xc0a1a88  jal         func_286A20
label_2a11cc:
    if (ctx->pc == 0x2A11CCu) {
        ctx->pc = 0x2A11CCu;
            // 0x2a11cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A11D0u;
        goto label_2a11d0;
    }
    ctx->pc = 0x2A11C8u;
    SET_GPR_U32(ctx, 31, 0x2A11D0u);
    ctx->pc = 0x2A11CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A11C8u;
            // 0x2a11cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286A20u;
    if (runtime->hasFunction(0x286A20u)) {
        auto targetFn = runtime->lookupFunction(0x286A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A11D0u; }
        if (ctx->pc != 0x2A11D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286A20_0x286a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A11D0u; }
        if (ctx->pc != 0x2A11D0u) { return; }
    }
    ctx->pc = 0x2A11D0u;
label_2a11d0:
    // 0x2a11d0: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x2a11d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2a11d4:
    // 0x2a11d4: 0xc0a1a02  jal         func_286808
label_2a11d8:
    if (ctx->pc == 0x2A11D8u) {
        ctx->pc = 0x2A11D8u;
            // 0x2a11d8: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x2A11DCu;
        goto label_2a11dc;
    }
    ctx->pc = 0x2A11D4u;
    SET_GPR_U32(ctx, 31, 0x2A11DCu);
    ctx->pc = 0x2A11D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A11D4u;
            // 0x2a11d8: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286808u;
    if (runtime->hasFunction(0x286808u)) {
        auto targetFn = runtime->lookupFunction(0x286808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A11DCu; }
        if (ctx->pc != 0x2A11DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286808_0x286808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A11DCu; }
        if (ctx->pc != 0x2A11DCu) { return; }
    }
    ctx->pc = 0x2A11DCu;
label_2a11dc:
    // 0x2a11dc: 0x24440007  addiu       $a0, $v0, 0x7
    ctx->pc = 0x2a11dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_2a11e0:
    // 0x2a11e0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a11e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a11e4:
    // 0x2a11e4: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x2a11e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2a11e8:
    // 0x2a11e8: 0x2442000e  addiu       $v0, $v0, 0xE
    ctx->pc = 0x2a11e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
label_2a11ec:
    // 0x2a11ec: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2a11ecu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_2a11f0:
    // 0x2a11f0: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x2a11f0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
label_2a11f4:
    // 0x2a11f4: 0x263102b  sltu        $v0, $s3, $v1
    ctx->pc = 0x2a11f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2a11f8:
    // 0x2a11f8: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_2a11fc:
    if (ctx->pc == 0x2A11FCu) {
        ctx->pc = 0x2A11FCu;
            // 0x2a11fc: 0xafa30040  sw          $v1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
        ctx->pc = 0x2A1200u;
        goto label_2a1200;
    }
    ctx->pc = 0x2A11F8u;
    {
        const bool branch_taken_0x2a11f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A11FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A11F8u;
            // 0x2a11fc: 0xafa30040  sw          $v1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a11f8) {
            ctx->pc = 0x2A1274u;
            goto label_2a1274;
        }
    }
    ctx->pc = 0x2A1200u;
label_2a1200:
    // 0x2a1200: 0x72102b  sltu        $v0, $v1, $s2
    ctx->pc = 0x2a1200u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_2a1204:
    // 0x2a1204: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2a1208:
    if (ctx->pc == 0x2A1208u) {
        ctx->pc = 0x2A1208u;
            // 0x2a1208: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A120Cu;
        goto label_2a120c;
    }
    ctx->pc = 0x2A1204u;
    {
        const bool branch_taken_0x2a1204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1204u;
            // 0x2a1208: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1204) {
            ctx->pc = 0x2A1214u;
            goto label_2a1214;
        }
    }
    ctx->pc = 0x2A120Cu;
label_2a120c:
    // 0x2a120c: 0x10000019  b           . + 4 + (0x19 << 2)
label_2a1210:
    if (ctx->pc == 0x2A1210u) {
        ctx->pc = 0x2A1210u;
            // 0x2a1210: 0x24150003  addiu       $s5, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2A1214u;
        goto label_2a1214;
    }
    ctx->pc = 0x2A120Cu;
    {
        const bool branch_taken_0x2a120c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A120Cu;
            // 0x2a1210: 0x24150003  addiu       $s5, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a120c) {
            ctx->pc = 0x2A1274u;
            goto label_2a1274;
        }
    }
    ctx->pc = 0x2A1214u;
label_2a1214:
    // 0x2a1214: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a1214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a1218:
    // 0x2a1218: 0xc0a1b8c  jal         func_286E30
label_2a121c:
    if (ctx->pc == 0x2A121Cu) {
        ctx->pc = 0x2A121Cu;
            // 0x2a121c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A1220u;
        goto label_2a1220;
    }
    ctx->pc = 0x2A1218u;
    SET_GPR_U32(ctx, 31, 0x2A1220u);
    ctx->pc = 0x2A121Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1218u;
            // 0x2a121c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286E30u;
    if (runtime->hasFunction(0x286E30u)) {
        auto targetFn = runtime->lookupFunction(0x286E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1220u; }
        if (ctx->pc != 0x2A1220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286E30_0x286e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1220u; }
        if (ctx->pc != 0x2A1220u) { return; }
    }
    ctx->pc = 0x2A1220u;
label_2a1220:
    // 0x2a1220: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a1220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a1224:
    // 0x2a1224: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2a1224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2a1228:
    // 0x2a1228: 0xc0a83bc  jal         func_2A0EF0
label_2a122c:
    if (ctx->pc == 0x2A122Cu) {
        ctx->pc = 0x2A122Cu;
            // 0x2a122c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A1230u;
        goto label_2a1230;
    }
    ctx->pc = 0x2A1228u;
    SET_GPR_U32(ctx, 31, 0x2A1230u);
    ctx->pc = 0x2A122Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1228u;
            // 0x2a122c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A0EF0u;
    if (runtime->hasFunction(0x2A0EF0u)) {
        auto targetFn = runtime->lookupFunction(0x2A0EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1230u; }
        if (ctx->pc != 0x2A1230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A0EF0_0x2a0ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1230u; }
        if (ctx->pc != 0x2A1230u) { return; }
    }
    ctx->pc = 0x2A1230u;
label_2a1230:
    // 0x2a1230: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_2a1234:
    if (ctx->pc == 0x2A1234u) {
        ctx->pc = 0x2A1234u;
            // 0x2a1234: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A1238u;
        goto label_2a1238;
    }
    ctx->pc = 0x2A1230u;
    {
        const bool branch_taken_0x2a1230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1230u;
            // 0x2a1234: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1230) {
            ctx->pc = 0x2A1274u;
            goto label_2a1274;
        }
    }
    ctx->pc = 0x2A1238u;
label_2a1238:
    // 0x2a1238: 0xc0a1bdc  jal         func_286F70
label_2a123c:
    if (ctx->pc == 0x2A123Cu) {
        ctx->pc = 0x2A123Cu;
            // 0x2a123c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A1240u;
        goto label_2a1240;
    }
    ctx->pc = 0x2A1238u;
    SET_GPR_U32(ctx, 31, 0x2A1240u);
    ctx->pc = 0x2A123Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1238u;
            // 0x2a123c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286F70u;
    if (runtime->hasFunction(0x286F70u)) {
        auto targetFn = runtime->lookupFunction(0x286F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1240u; }
        if (ctx->pc != 0x2A1240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286F70_0x286f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1240u; }
        if (ctx->pc != 0x2A1240u) { return; }
    }
    ctx->pc = 0x2A1240u;
label_2a1240:
    // 0x2a1240: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x2a1240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2a1244:
    // 0x2a1244: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2a1244u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a1248:
    // 0x2a1248: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a1248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2a124c:
    // 0x2a124c: 0x8fa80040  lw          $t0, 0x40($sp)
    ctx->pc = 0x2a124cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a1250:
    // 0x2a1250: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2a1250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2a1254:
    // 0x2a1254: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x2a1254u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2a1258:
    // 0x2a1258: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2a1258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2a125c:
    // 0x2a125c: 0x40f809  jalr        $v0
label_2a1260:
    if (ctx->pc == 0x2A1260u) {
        ctx->pc = 0x2A1260u;
            // 0x2a1260: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A1264u;
        goto label_2a1264;
    }
    ctx->pc = 0x2A125Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A1264u);
        ctx->pc = 0x2A1260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A125Cu;
            // 0x2a1260: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A1264u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A1264u; }
            if (ctx->pc != 0x2A1264u) { return; }
        }
        }
    }
    ctx->pc = 0x2A1264u;
label_2a1264:
    // 0x2a1264: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2a1268:
    if (ctx->pc == 0x2A1268u) {
        ctx->pc = 0x2A1268u;
            // 0x2a1268: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x2A126Cu;
        goto label_2a126c;
    }
    ctx->pc = 0x2A1264u;
    {
        const bool branch_taken_0x2a1264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1264u;
            // 0x2a1268: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1264) {
            ctx->pc = 0x2A1274u;
            goto label_2a1274;
        }
    }
    ctx->pc = 0x2A126Cu;
label_2a126c:
    // 0x2a126c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2a126cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a1270:
    // 0x2a1270: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x2a1270u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_2a1274:
    // 0x2a1274: 0xc0a1a36  jal         func_2868D8
label_2a1278:
    if (ctx->pc == 0x2A1278u) {
        ctx->pc = 0x2A1278u;
            // 0x2a1278: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A127Cu;
        goto label_2a127c;
    }
    ctx->pc = 0x2A1274u;
    SET_GPR_U32(ctx, 31, 0x2A127Cu);
    ctx->pc = 0x2A1278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1274u;
            // 0x2a1278: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2868D8u;
    if (runtime->hasFunction(0x2868D8u)) {
        auto targetFn = runtime->lookupFunction(0x2868D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A127Cu; }
        if (ctx->pc != 0x2A127Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002868D8_0x2868d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A127Cu; }
        if (ctx->pc != 0x2A127Cu) { return; }
    }
    ctx->pc = 0x2A127Cu;
label_2a127c:
    // 0x2a127c: 0xc0a1a36  jal         func_2868D8
label_2a1280:
    if (ctx->pc == 0x2A1280u) {
        ctx->pc = 0x2A1280u;
            // 0x2a1280: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A1284u;
        goto label_2a1284;
    }
    ctx->pc = 0x2A127Cu;
    SET_GPR_U32(ctx, 31, 0x2A1284u);
    ctx->pc = 0x2A1280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A127Cu;
            // 0x2a1280: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2868D8u;
    if (runtime->hasFunction(0x2868D8u)) {
        auto targetFn = runtime->lookupFunction(0x2868D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1284u; }
        if (ctx->pc != 0x2A1284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002868D8_0x2868d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1284u; }
        if (ctx->pc != 0x2A1284u) { return; }
    }
    ctx->pc = 0x2A1284u;
label_2a1284:
    // 0x2a1284: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x2a1284u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2a1288:
    // 0x2a1288: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x2a1288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_2a128c:
    // 0x2a128c: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x2a128cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_2a1290:
    // 0x2a1290: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x2a1290u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_2a1294:
    // 0x2a1294: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x2a1294u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_2a1298:
    // 0x2a1298: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x2a1298u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2a129c:
    // 0x2a129c: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x2a129cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2a12a0:
    // 0x2a12a0: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x2a12a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2a12a4:
    // 0x2a12a4: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2a12a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2a12a8:
    // 0x2a12a8: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x2a12a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2a12ac:
    // 0x2a12ac: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2a12acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2a12b0:
    // 0x2a12b0: 0x3e00008  jr          $ra
label_2a12b4:
    if (ctx->pc == 0x2A12B4u) {
        ctx->pc = 0x2A12B4u;
            // 0x2a12b4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x2A12B8u;
        goto label_fallthrough_0x2a12b0;
    }
    ctx->pc = 0x2A12B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A12B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A12B0u;
            // 0x2a12b4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2a12b0:
    ctx->pc = 0x2A12B8u;
    ctx->pc = 0x2a12b8u;
}
