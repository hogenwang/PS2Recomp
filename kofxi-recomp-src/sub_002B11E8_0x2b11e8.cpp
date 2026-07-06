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

// Function: sub_002B11E8
// Address: 0x2b11e8 - 0x2b1278
void sub_002B11E8_0x2b11e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B11E8_0x2b11e8");
#endif

    switch (ctx->pc) {
        case 0x2b11e8u: goto label_2b11e8;
        case 0x2b11ecu: goto label_2b11ec;
        case 0x2b11f0u: goto label_2b11f0;
        case 0x2b11f4u: goto label_2b11f4;
        case 0x2b11f8u: goto label_2b11f8;
        case 0x2b11fcu: goto label_2b11fc;
        case 0x2b1200u: goto label_2b1200;
        case 0x2b1204u: goto label_2b1204;
        case 0x2b1208u: goto label_2b1208;
        case 0x2b120cu: goto label_2b120c;
        case 0x2b1210u: goto label_2b1210;
        case 0x2b1214u: goto label_2b1214;
        case 0x2b1218u: goto label_2b1218;
        case 0x2b121cu: goto label_2b121c;
        case 0x2b1220u: goto label_2b1220;
        case 0x2b1224u: goto label_2b1224;
        case 0x2b1228u: goto label_2b1228;
        case 0x2b122cu: goto label_2b122c;
        case 0x2b1230u: goto label_2b1230;
        case 0x2b1234u: goto label_2b1234;
        case 0x2b1238u: goto label_2b1238;
        case 0x2b123cu: goto label_2b123c;
        case 0x2b1240u: goto label_2b1240;
        case 0x2b1244u: goto label_2b1244;
        case 0x2b1248u: goto label_2b1248;
        case 0x2b124cu: goto label_2b124c;
        case 0x2b1250u: goto label_2b1250;
        case 0x2b1254u: goto label_2b1254;
        case 0x2b1258u: goto label_2b1258;
        case 0x2b125cu: goto label_2b125c;
        case 0x2b1260u: goto label_2b1260;
        case 0x2b1264u: goto label_2b1264;
        case 0x2b1268u: goto label_2b1268;
        case 0x2b126cu: goto label_2b126c;
        case 0x2b1270u: goto label_2b1270;
        case 0x2b1274u: goto label_2b1274;
        default: break;
    }

    ctx->pc = 0x2b11e8u;

label_2b11e8:
    // 0x2b11e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b11e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2b11ec:
    // 0x2b11ec: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b11ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2b11f0:
    // 0x2b11f0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b11f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2b11f4:
    // 0x2b11f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b11f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2b11f8:
    // 0x2b11f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b11f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b11fc:
    // 0x2b11fc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b11fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2b1200:
    // 0x2b1200: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b1200u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b1204:
    // 0x2b1204: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2b1204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2b1208:
    // 0x2b1208: 0x10910010  beq         $a0, $s1, . + 4 + (0x10 << 2)
label_2b120c:
    if (ctx->pc == 0x2B120Cu) {
        ctx->pc = 0x2B120Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1208u;
        // 0x2b120c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1210u;
        goto label_2b1210;
    }
    ctx->pc = 0x2B1208u;
    {
        const bool branch_taken_0x2b1208 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        ctx->pc = 0x2B120Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1208u;
        // 0x2b120c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1208) {
            ctx->pc = 0x2B124Cu;
            goto label_2b124c;
        }
    }
    ctx->pc = 0x2B1210u;
label_2b1210:
    // 0x2b1210: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2b1210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b1214:
    // 0x2b1214: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2b1214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b1218:
    // 0x2b1218: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_2b121c:
    if (ctx->pc == 0x2B121Cu) {
        ctx->pc = 0x2B121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1218u;
        // 0x2b121c: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1220u;
        goto label_2b1220;
    }
    ctx->pc = 0x2B1218u;
    {
        const bool branch_taken_0x2b1218 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b1218) {
            ctx->pc = 0x2B121Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1218u;
            // 0x2b121c: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B122Cu;
            goto label_2b122c;
        }
    }
    ctx->pc = 0x2B1220u;
label_2b1220:
    // 0x2b1220: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b1220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b1224:
    // 0x2b1224: 0x10000009  b           . + 4 + (0x9 << 2)
label_2b1228:
    if (ctx->pc == 0x2B1228u) {
        ctx->pc = 0x2B1228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1224u;
        // 0x2b1228: 0xae110008  sw          $s1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B122Cu;
        goto label_2b122c;
    }
    ctx->pc = 0x2B1224u;
    {
        const bool branch_taken_0x2b1224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1224u;
        // 0x2b1228: 0xae110008  sw          $s1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1224) {
            ctx->pc = 0x2B124Cu;
            goto label_2b124c;
        }
    }
    ctx->pc = 0x2B122Cu;
label_2b122c:
    // 0x2b122c: 0x40f809  jalr        $v0
label_2b1230:
    if (ctx->pc == 0x2B1230u) {
        ctx->pc = 0x2B1230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B122Cu;
        // 0x2b1230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1234u;
        goto label_2b1234;
    }
    ctx->pc = 0x2B122Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B1234u);
        ctx->pc = 0x2B1230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B122Cu;
        // 0x2b1230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B122Cu, 0x2B1234u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B1234u;
label_2b1234:
    // 0x2b1234: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x2b1234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
label_2b1238:
    // 0x2b1238: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2b1238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2b123c:
    // 0x2b123c: 0x40f809  jalr        $v0
label_2b1240:
    if (ctx->pc == 0x2B1240u) {
        ctx->pc = 0x2B1240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B123Cu;
        // 0x2b1240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1244u;
        goto label_2b1244;
    }
    ctx->pc = 0x2B123Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B1244u);
        ctx->pc = 0x2B1240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B123Cu;
        // 0x2b1240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B123Cu, 0x2B1244u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B1244u;
label_2b1244:
    // 0x2b1244: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2b1244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2b1248:
    // 0x2b1248: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b1248u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b124c:
    // 0x2b124c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2b124cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2b1250:
    // 0x2b1250: 0x40f809  jalr        $v0
label_2b1254:
    if (ctx->pc == 0x2B1254u) {
        ctx->pc = 0x2B1254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1250u;
        // 0x2b1254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1258u;
        goto label_2b1258;
    }
    ctx->pc = 0x2B1250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B1258u);
        ctx->pc = 0x2B1254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1250u;
        // 0x2b1254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1250u, 0x2B1258u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B1258u;
label_2b1258:
    // 0x2b1258: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2b1258u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b125c:
    // 0x2b125c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b125cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2b1260:
    // 0x2b1260: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b1260u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b1264:
    // 0x2b1264: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b1264u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b1268:
    // 0x2b1268: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b1268u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b126c:
    // 0x2b126c: 0x3e00008  jr          $ra
label_2b1270:
    if (ctx->pc == 0x2B1270u) {
        ctx->pc = 0x2B1270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B126Cu;
        // 0x2b1270: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1274u;
        goto label_2b1274;
    }
    ctx->pc = 0x2B126Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B1270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B126Cu;
        // 0x2b1270: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B126Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1274u;
label_2b1274:
    // 0x2b1274: 0x0  nop
    ctx->pc = 0x2b1274u;
    // NOP
}
