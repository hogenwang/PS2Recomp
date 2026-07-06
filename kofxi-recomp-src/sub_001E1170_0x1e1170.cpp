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

// Function: sub_001E1170
// Address: 0x1e1170 - 0x1e12b0
void sub_001E1170_0x1e1170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1170_0x1e1170");
#endif

    switch (ctx->pc) {
        case 0x1e1180u: goto label_1e1180;
        case 0x1e1190u: goto label_1e1190;
        case 0x1e119cu: goto label_1e119c;
        case 0x1e11dcu: goto label_1e11dc;
        case 0x1e1260u: goto label_1e1260;
        case 0x1e1284u: goto label_1e1284;
        default: break;
    }

    ctx->pc = 0x1e1170u;

    // 0x1e1170: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e1170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e1174: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e1174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e1178: 0xc07e306  jal         func_1F8C18
    ctx->pc = 0x1E1178u;
    SET_GPR_U32(ctx, 31, 0x1E1180u);
    ctx->pc = 0x1E117Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1178u;
    // 0x1e117c: 0x8c84003c  lw          $a0, 0x3C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8C18u, 0x1E1178u, 0x1E1180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1180u;
label_1e1180:
    // 0x1e1180: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E1180u;
    {
        const bool branch_taken_0x1e1180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1180u;
        // 0x1e1184: 0x2404fecd  addiu       $a0, $zero, -0x133 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966989));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1180) {
            ctx->pc = 0x1E11A0u;
            goto label_1e11a0;
        }
    }
    ctx->pc = 0x1E1188u;
    // 0x1e1188: 0xc078328  jal         func_1E0CA0
    ctx->pc = 0x1E1188u;
    SET_GPR_U32(ctx, 31, 0x1E1190u);
    ctx->pc = 0x1E0CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0CA0u, 0x1E1188u, 0x1E1190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1190u;
label_1e1190:
    // 0x1e1190: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e1190u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e1194: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E1194u;
    SET_GPR_U32(ctx, 31, 0x1E119Cu);
    ctx->pc = 0x1E1198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1194u;
    // 0x1e1198: 0x2484d0f8  addiu       $a0, $a0, -0x2F08 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BE8u, 0x1E1194u, 0x1E119Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E119Cu;
label_1e119c:
    // 0x1e119c: 0x2402fecd  addiu       $v0, $zero, -0x133
    ctx->pc = 0x1e119cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966989));
label_1e11a0:
    // 0x1e11a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e11a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e11a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E11A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E11A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E11A4u;
        // 0x1e11a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E11A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E11ACu;
    // 0x1e11ac: 0x0  nop
    ctx->pc = 0x1e11acu;
    // NOP
    // 0x1e11b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e11b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e11b4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1e11b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1e11b8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1e11b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e11bc: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1e11bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1e11c0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1e11c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e11c4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1e11c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1e11c8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e11c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e11cc: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1e11ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1e11d0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e11d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e11d4: 0xc07e51e  jal         func_1F9478
    ctx->pc = 0x1E11D4u;
    SET_GPR_U32(ctx, 31, 0x1E11DCu);
    ctx->pc = 0x1E11D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E11D4u;
    // 0x1e11d8: 0x8c84003c  lw          $a0, 0x3C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9478u, 0x1E11D4u, 0x1E11DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E11DCu;
label_1e11dc:
    // 0x1e11dc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1e11dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e11e0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1e11e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1e11e4: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1e11e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1e11e8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e11e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1e11ec: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x1e11ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x1e11f0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1e11f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1e11f4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1e11f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e11f8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1e11f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e11fc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1e11fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e1200: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1e1200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1e1204: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1204u;
        // 0x1e1208: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E120Cu;
    // 0x1e120c: 0x0  nop
    ctx->pc = 0x1e120cu;
    // NOP
    // 0x1e1210: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e1210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e1214: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e1214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e1218: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E1218u;
    {
        const bool branch_taken_0x1e1218 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1E121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1218u;
        // 0x1e121c: 0x8c84003c  lw          $a0, 0x3C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1218) {
            ctx->pc = 0x1E1230u;
            goto label_1e1230;
        }
    }
    ctx->pc = 0x1E1220u;
    // 0x1e1220: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e1220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1224: 0x807e53a  j           func_1F94E8
    ctx->pc = 0x1E1224u;
    ctx->pc = 0x1E1228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1224u;
    // 0x1e1228: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F94E8u;
    sub_001F94E8_0x1f94e8(rdram, ctx, runtime); return;
    ctx->pc = 0x1E122Cu;
    // 0x1e122c: 0x0  nop
    ctx->pc = 0x1e122cu;
    // NOP
label_1e1230:
    // 0x1e1230: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e1230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1234: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1234u;
        // 0x1e1238: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E123Cu;
    // 0x1e123c: 0x0  nop
    ctx->pc = 0x1e123cu;
    // NOP
    // 0x1e1240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e1240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e1244: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e1244u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1248: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e1248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e124c: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x1e124cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1e1250: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1E1250u;
    {
        const bool branch_taken_0x1e1250 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1250u;
        // 0x1e1254: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1250) {
            ctx->pc = 0x1E128Cu;
            goto label_1e128c;
        }
    }
    ctx->pc = 0x1E1258u;
    // 0x1e1258: 0xc07dc2c  jal         func_1F70B0
    ctx->pc = 0x1E1258u;
    SET_GPR_U32(ctx, 31, 0x1E1260u);
    ctx->pc = 0x1F70B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F70B0u, 0x1E1258u, 0x1E1260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1260u;
label_1e1260:
    // 0x1e1260: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e1260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e1264: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E1264u;
    {
        const bool branch_taken_0x1e1264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1264u;
        // 0x1e1268: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1264) {
            ctx->pc = 0x1E1288u;
            goto label_1e1288;
        }
    }
    ctx->pc = 0x1E126Cu;
    // 0x1e126c: 0x10440006  beq         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E126Cu;
    {
        const bool branch_taken_0x1e126c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1E1270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E126Cu;
        // 0x1e1270: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e126c) {
            ctx->pc = 0x1E1288u;
            goto label_1e1288;
        }
    }
    ctx->pc = 0x1E1274u;
    // 0x1e1274: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e1274u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e1278: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e1278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e127c: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E127Cu;
    SET_GPR_U32(ctx, 31, 0x1E1284u);
    ctx->pc = 0x1E1280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E127Cu;
    // 0x1e1280: 0x2484d118  addiu       $a0, $a0, -0x2EE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BE8u, 0x1E127Cu, 0x1E1284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1284u;
label_1e1284:
    // 0x1e1284: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e1284u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1288:
    // 0x1e1288: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1e1288u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1e128c:
    // 0x1e128c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e128cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1290: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1290u;
        // 0x1e1294: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1298u;
    // 0x1e1298: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e1298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e129c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e129cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e12a0: 0x8c84003c  lw          $a0, 0x3C($a0)
    ctx->pc = 0x1e12a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1e12a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e12a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e12a8: 0x807e55a  j           func_1F9568
    ctx->pc = 0x1E12A8u;
    ctx->pc = 0x1E12ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E12A8u;
    // 0x1e12ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9568u;
    sub_001F9568_0x1f9568(rdram, ctx, runtime); return;
    ctx->pc = 0x1E12B0u;
}
