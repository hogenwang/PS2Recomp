#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A11F0
// Address: 0x1a11f0 - 0x1a1380
void sub_001A11F0_0x1a11f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A11F0_0x1a11f0");
#endif

    switch (ctx->pc) {
        case 0x1a1220u: goto label_1a1220;
        case 0x1a1354u: goto label_1a1354;
        case 0x1a1360u: goto label_1a1360;
        case 0x1a136cu: goto label_1a136c;
        default: break;
    }

    ctx->pc = 0x1a11f0u;

    // 0x1a11f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a11f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a11f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a11f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a11f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a11f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a11fc: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1a11fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x1a1200: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a1200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a1204: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1a1204u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x1a1208: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a1208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a120c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1a120cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a1210: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1a1210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1a1214: 0x24090030  addiu       $t1, $zero, 0x30
    ctx->pc = 0x1a1214u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1a1218: 0xc04027a  jal         func_1009E8
    ctx->pc = 0x1A1218u;
    SET_GPR_U32(ctx, 31, 0x1A1220u);
    ctx->pc = 0x1A121Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1218u;
    // 0x1a121c: 0x2484e4c0  addiu       $a0, $a0, -0x1B40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1009E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1009E8u, 0x1A1218u, 0x1A1220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1220u;
label_1a1220:
    // 0x1a1220: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a1220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a1224: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x1a1224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1a1228: 0x9047e530  lbu         $a3, -0x1AD0($v0)
    ctx->pc = 0x1a1228u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294960432)));
    // 0x1a122c: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x1a122cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x1a1230: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1a1230u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1a1234: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a1234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a1238: 0x240afff1  addiu       $t2, $zero, -0xF
    ctx->pc = 0x1a1238u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x1a123c: 0x2408f00f  addiu       $t0, $zero, -0xFF1
    ctx->pc = 0x1a123cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963215));
    // 0x1a1240: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x1a1240u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x1a1244: 0x6402000e  daddiu      $v0, $zero, 0xE
    ctx->pc = 0x1a1244u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)14);
    // 0x1a1248: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1a1248u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1a124c: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x1a124cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x1a1250: 0xa085e530  sb          $a1, -0x1AD0($a0)
    ctx->pc = 0x1a1250u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294960432), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a1254: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x1a1254u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x1a1258: 0x906be530  lbu         $t3, -0x1AD0($v1)
    ctx->pc = 0x1a1258u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294960432)));
    // 0x1a125c: 0x300400ff  andi        $a0, $zero, 0xFF
    ctx->pc = 0x1a125cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)255);
    // 0x1a1260: 0x44900  sll         $t1, $a0, 4
    ctx->pc = 0x1a1260u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1a1264: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x1a1264u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x1a1268: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1a1268u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1a126c: 0x16a5024  and         $t2, $t3, $t2
    ctx->pc = 0x1a126cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 10));
    // 0x1a1270: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a1270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a1274: 0x7c80e4b0  sq          $zero, -0x1B50($a0)
    ctx->pc = 0x1a1274u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 4294960304), GPR_VEC(ctx, 0));
    // 0x1a1278: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x1a1278u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1a127c: 0xa0eae530  sb          $t2, -0x1AD0($a3)
    ctx->pc = 0x1a127cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4294960432), (uint8_t)GPR_U32(ctx, 10));
    // 0x1a1280: 0x9464e4b0  lhu         $a0, -0x1B50($v1)
    ctx->pc = 0x1a1280u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294960304)));
    // 0x1a1284: 0x64070008  daddiu      $a3, $zero, 0x8
    ctx->pc = 0x1a1284u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
    // 0x1a1288: 0x94cae530  lhu         $t2, -0x1AD0($a2)
    ctx->pc = 0x1a1288u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4294960432)));
    // 0x1a128c: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x1a128cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1a1290: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1a1290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a1294: 0x673025  or          $a2, $v1, $a3
    ctx->pc = 0x1a1294u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x1a1298: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1a1298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1a129c: 0xa486e4b0  sh          $a2, -0x1B50($a0)
    ctx->pc = 0x1a129cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294960304), (uint16_t)GPR_U32(ctx, 6));
    // 0x1a12a0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a12a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a12a4: 0x9067e4b1  lbu         $a3, -0x1B4F($v1)
    ctx->pc = 0x1a12a4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294960305)));
    // 0x1a12a8: 0x1482024  and         $a0, $t2, $t0
    ctx->pc = 0x1a12a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x1a12ac: 0x892025  or          $a0, $a0, $t1
    ctx->pc = 0x1a12acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 9));
    // 0x1a12b0: 0x64060080  daddiu      $a2, $zero, 0x80
    ctx->pc = 0x1a12b0u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x1a12b4: 0xa4a4e530  sh          $a0, -0x1AD0($a1)
    ctx->pc = 0x1a12b4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294960432), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a12b8: 0x2403ff7f  addiu       $v1, $zero, -0x81
    ctx->pc = 0x1a12b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x1a12bc: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1a12bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1a12c0: 0xe32824  and         $a1, $a3, $v1
    ctx->pc = 0x1a12c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x1a12c4: 0xa63025  or          $a2, $a1, $a2
    ctx->pc = 0x1a12c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1a12c8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a12c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a12cc: 0x9065e4b7  lbu         $a1, -0x1B49($v1)
    ctx->pc = 0x1a12ccu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294960311)));
    // 0x1a12d0: 0xa086e4b1  sb          $a2, -0x1B4F($a0)
    ctx->pc = 0x1a12d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294960305), (uint8_t)GPR_U32(ctx, 6));
    // 0x1a12d4: 0x64060010  daddiu      $a2, $zero, 0x10
    ctx->pc = 0x1a12d4u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x1a12d8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1a12d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1a12dc: 0x2403ff0f  addiu       $v1, $zero, -0xF1
    ctx->pc = 0x1a12dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x1a12e0: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1a12e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1a12e4: 0xa63025  or          $a2, $a1, $a2
    ctx->pc = 0x1a12e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1a12e8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a12e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a12ec: 0x9065e4b8  lbu         $a1, -0x1B48($v1)
    ctx->pc = 0x1a12ecu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294960312)));
    // 0x1a12f0: 0xa086e4b7  sb          $a2, -0x1B49($a0)
    ctx->pc = 0x1a12f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294960311), (uint8_t)GPR_U32(ctx, 6));
    // 0x1a12f4: 0x2404fff0  addiu       $a0, $zero, -0x10
    ctx->pc = 0x1a12f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1a12f8: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x1a12f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x1a12fc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a12fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a1300: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1a1300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a1304: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A1304u;
    {
        const bool branch_taken_0x1a1304 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1304u;
        // 0x1a1308: 0xa062e4b8  sb          $v0, -0x1B48($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294960312), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1304) {
            ctx->pc = 0x1A132Cu;
            goto label_1a132c;
        }
    }
    ctx->pc = 0x1A130Cu;
    // 0x1a130c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a130cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a1310: 0x2403fe00  addiu       $v1, $zero, -0x200
    ctx->pc = 0x1a1310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x1a1314: 0x9445e4c0  lhu         $a1, -0x1B40($v0)
    ctx->pc = 0x1a1314u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294960320)));
    // 0x1a1318: 0x6404008c  daddiu      $a0, $zero, 0x8C
    ctx->pc = 0x1a1318u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)140);
    // 0x1a131c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1a131cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1a1320: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a1320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a1324: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1a1324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1a1328: 0xa443e4c0  sh          $v1, -0x1B40($v0)
    ctx->pc = 0x1a1328u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294960320), (uint16_t)GPR_U32(ctx, 3));
label_1a132c:
    // 0x1a132c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a132cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a1330: 0x2403fe00  addiu       $v1, $zero, -0x200
    ctx->pc = 0x1a1330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x1a1334: 0x9446e4d0  lhu         $a2, -0x1B30($v0)
    ctx->pc = 0x1a1334u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294960336)));
    // 0x1a1338: 0x64050118  daddiu      $a1, $zero, 0x118
    ctx->pc = 0x1a1338u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)280);
    // 0x1a133c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a133cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1340: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x1a1340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1a1344: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a1344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a1348: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1a1348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1a134c: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x1A134Cu;
    SET_GPR_U32(ctx, 31, 0x1A1354u);
    ctx->pc = 0x1A1350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A134Cu;
    // 0x1a1350: 0xa443e4d0  sh          $v1, -0x1B30($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294960336), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x1A134Cu, 0x1A1354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1354u;
label_1a1354:
    // 0x1a1354: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1a1354u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1a1358: 0xc040336  jal         func_100CD8
    ctx->pc = 0x1A1358u;
    SET_GPR_U32(ctx, 31, 0x1A1360u);
    ctx->pc = 0x1A135Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1358u;
    // 0x1a135c: 0x2484e4b0  addiu       $a0, $a0, -0x1B50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100CD8u, 0x1A1358u, 0x1A1360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1360u;
label_1a1360:
    // 0x1a1360: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a1360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1364: 0xc040454  jal         func_101150
    ctx->pc = 0x1A1364u;
    SET_GPR_U32(ctx, 31, 0x1A136Cu);
    ctx->pc = 0x1A1368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1364u;
    // 0x1a1368: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101150u, 0x1A1364u, 0x1A136Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A136Cu;
label_1a136c:
    // 0x1a136c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a136cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1370: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a1370u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1374: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1374u;
        // 0x1a1378: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A137Cu;
    // 0x1a137c: 0x0  nop
    ctx->pc = 0x1a137cu;
    // NOP
}
