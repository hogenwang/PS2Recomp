#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003206D0
// Address: 0x3206d0 - 0x3208a0
void sub_003206D0_0x3206d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003206D0_0x3206d0");
#endif

    switch (ctx->pc) {
        case 0x320748u: goto label_320748;
        case 0x32076cu: goto label_32076c;
        case 0x320778u: goto label_320778;
        case 0x320784u: goto label_320784;
        case 0x320790u: goto label_320790;
        case 0x3207a8u: goto label_3207a8;
        case 0x3207ccu: goto label_3207cc;
        case 0x320800u: goto label_320800;
        case 0x320818u: goto label_320818;
        case 0x320828u: goto label_320828;
        case 0x320830u: goto label_320830;
        case 0x320848u: goto label_320848;
        case 0x320874u: goto label_320874;
        case 0x32087cu: goto label_32087c;
        default: break;
    }

    ctx->pc = 0x3206d0u;

    // 0x3206d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3206d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3206d4: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x3206d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x3206d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3206d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3206dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3206dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3206e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3206e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3206e4: 0x904303f0  lbu         $v1, 0x3F0($v0)
    ctx->pc = 0x3206e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1008)));
    // 0x3206e8: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x3206e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3206ec: 0x50620067  beql        $v1, $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x3206ECu;
    {
        const bool branch_taken_0x3206ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3206ec) {
            ctx->pc = 0x3206F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3206ECu;
            // 0x3206f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32088Cu;
            goto label_32088c;
        }
    }
    ctx->pc = 0x3206F4u;
    // 0x3206f4: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x3206f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3206f8: 0x50620051  beql        $v1, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x3206F8u;
    {
        const bool branch_taken_0x3206f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3206f8) {
            ctx->pc = 0x3206FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3206F8u;
            // 0x3206fc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x320840u;
            goto label_320840;
        }
    }
    ctx->pc = 0x320700u;
    // 0x320700: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x320700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x320704: 0x10620042  beq         $v1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x320704u;
    {
        const bool branch_taken_0x320704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x320704) {
            ctx->pc = 0x320810u;
            goto label_320810;
        }
    }
    ctx->pc = 0x32070Cu;
    // 0x32070c: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x32070cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x320710: 0x10620038  beq         $v1, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x320710u;
    {
        const bool branch_taken_0x320710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x320710) {
            ctx->pc = 0x3207F4u;
            goto label_3207f4;
        }
    }
    ctx->pc = 0x320718u;
    // 0x320718: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x320718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x32071c: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x32071Cu;
    {
        const bool branch_taken_0x32071c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32071c) {
            ctx->pc = 0x3207B8u;
            goto label_3207b8;
        }
    }
    ctx->pc = 0x320724u;
    // 0x320724: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x320724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x320728: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x320728u;
    {
        const bool branch_taken_0x320728 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x320728) {
            ctx->pc = 0x32075Cu;
            goto label_32075c;
        }
    }
    ctx->pc = 0x320730u;
    // 0x320730: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x320730u;
    {
        const bool branch_taken_0x320730 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x320730) {
            ctx->pc = 0x320740u;
            goto label_320740;
        }
    }
    ctx->pc = 0x320738u;
    // 0x320738: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x320738u;
    {
        const bool branch_taken_0x320738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32073Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320738u;
            // 0x32073c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320738) {
            ctx->pc = 0x32088Cu;
            goto label_32088c;
        }
    }
    ctx->pc = 0x320740u;
label_320740:
    // 0x320740: 0xc063d18  jal         func_18F460
    ctx->pc = 0x320740u;
    SET_GPR_U32(ctx, 31, 0x320748u);
    ctx->pc = 0x18F460u;
    if (runtime->hasFunction(0x18F460u)) {
        auto targetFn = runtime->lookupFunction(0x18F460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320748u; }
        if (ctx->pc != 0x320748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F460_0x18f460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320748u; }
        if (ctx->pc != 0x320748u) { return; }
    }
    ctx->pc = 0x320748u;
label_320748:
    // 0x320748: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x320748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x32074c: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x32074cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x320750: 0xa04303f0  sb          $v1, 0x3F0($v0)
    ctx->pc = 0x320750u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1008), (uint8_t)GPR_U32(ctx, 3));
    // 0x320754: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x320754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x320758: 0xac400390  sw          $zero, 0x390($v0)
    ctx->pc = 0x320758u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 912), GPR_U32(ctx, 0));
label_32075c:
    // 0x32075c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x32075cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x320760: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x320760u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x320764: 0xc0cb3c4  jal         func_32CF10
    ctx->pc = 0x320764u;
    SET_GPR_U32(ctx, 31, 0x32076Cu);
    ctx->pc = 0x320768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320764u;
            // 0x320768: 0x24843e00  addiu       $a0, $a0, 0x3E00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32CF10u;
    if (runtime->hasFunction(0x32CF10u)) {
        auto targetFn = runtime->lookupFunction(0x32CF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32076Cu; }
        if (ctx->pc != 0x32076Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032CF10_0x32cf10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32076Cu; }
        if (ctx->pc != 0x32076Cu) { return; }
    }
    ctx->pc = 0x32076Cu;
label_32076c:
    // 0x32076c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32076cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320770: 0xc0cb224  jal         func_32C890
    ctx->pc = 0x320770u;
    SET_GPR_U32(ctx, 31, 0x320778u);
    ctx->pc = 0x320774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320770u;
            // 0x320774: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32C890u;
    if (runtime->hasFunction(0x32C890u)) {
        auto targetFn = runtime->lookupFunction(0x32C890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320778u; }
        if (ctx->pc != 0x320778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032C890_0x32c890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320778u; }
        if (ctx->pc != 0x320778u) { return; }
    }
    ctx->pc = 0x320778u;
label_320778:
    // 0x320778: 0x3c1001dc  lui         $s0, 0x1DC
    ctx->pc = 0x320778u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)476 << 16));
    // 0x32077c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x32077cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320780: 0x261003f8  addiu       $s0, $s0, 0x3F8
    ctx->pc = 0x320780u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1016));
label_320784:
    // 0x320784: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x320784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x320788: 0xc0cb22c  jal         func_32C8B0
    ctx->pc = 0x320788u;
    SET_GPR_U32(ctx, 31, 0x320790u);
    ctx->pc = 0x32078Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320788u;
            // 0x32078c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32C8B0u;
    if (runtime->hasFunction(0x32C8B0u)) {
        auto targetFn = runtime->lookupFunction(0x32C8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320790u; }
        if (ctx->pc != 0x320790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032C8B0_0x32c8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320790u; }
        if (ctx->pc != 0x320790u) { return; }
    }
    ctx->pc = 0x320790u;
label_320790:
    // 0x320790: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x320790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x320794: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x320794u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x320798: 0x1220fffa  beqz        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x320798u;
    {
        const bool branch_taken_0x320798 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x32079Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320798u;
            // 0x32079c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320798) {
            ctx->pc = 0x320784u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_320784;
        }
    }
    ctx->pc = 0x3207A0u;
    // 0x3207a0: 0xc063d68  jal         func_18F5A0
    ctx->pc = 0x3207A0u;
    SET_GPR_U32(ctx, 31, 0x3207A8u);
    ctx->pc = 0x18F5A0u;
    if (runtime->hasFunction(0x18F5A0u)) {
        auto targetFn = runtime->lookupFunction(0x18F5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3207A8u; }
        if (ctx->pc != 0x3207A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F5A0_0x18f5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3207A8u; }
        if (ctx->pc != 0x3207A8u) { return; }
    }
    ctx->pc = 0x3207A8u;
label_3207a8:
    // 0x3207a8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x3207a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3207ac: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x3207acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x3207b0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x3207B0u;
    {
        const bool branch_taken_0x3207b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3207B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3207B0u;
            // 0x3207b4: 0xa04303f0  sb          $v1, 0x3F0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1008), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3207b0) {
            ctx->pc = 0x320888u;
            goto label_320888;
        }
    }
    ctx->pc = 0x3207B8u;
label_3207b8:
    // 0x3207b8: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x3207b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x3207bc: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x3207bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x3207c0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3207c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3207c4: 0x24a503f8  addiu       $a1, $a1, 0x3F8
    ctx->pc = 0x3207c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1016));
    // 0x3207c8: 0x24840400  addiu       $a0, $a0, 0x400
    ctx->pc = 0x3207c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
label_3207cc:
    // 0x3207cc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3207ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3207d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3207d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3207d4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3207d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3207d8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3207d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3207dc: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x3207dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x3207e0: 0x1060fffa  beqz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3207E0u;
    {
        const bool branch_taken_0x3207e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3207e0) {
            ctx->pc = 0x3207CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3207cc;
        }
    }
    ctx->pc = 0x3207E8u;
    // 0x3207e8: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x3207e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x3207ec: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x3207ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x3207f0: 0xa04303f0  sb          $v1, 0x3F0($v0)
    ctx->pc = 0x3207f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1008), (uint8_t)GPR_U32(ctx, 3));
label_3207f4:
    // 0x3207f4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x3207f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x3207f8: 0xc0c0db4  jal         func_3036D0
    ctx->pc = 0x3207F8u;
    SET_GPR_U32(ctx, 31, 0x320800u);
    ctx->pc = 0x3207FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3207F8u;
            // 0x3207fc: 0x24840c60  addiu       $a0, $a0, 0xC60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3036D0u;
    if (runtime->hasFunction(0x3036D0u)) {
        auto targetFn = runtime->lookupFunction(0x3036D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320800u; }
        if (ctx->pc != 0x320800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003036D0_0x3036d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320800u; }
        if (ctx->pc != 0x320800u) { return; }
    }
    ctx->pc = 0x320800u;
label_320800:
    // 0x320800: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x320800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x320804: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x320804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x320808: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x320808u;
    {
        const bool branch_taken_0x320808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32080Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320808u;
            // 0x32080c: 0xa04303f0  sb          $v1, 0x3F0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1008), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320808) {
            ctx->pc = 0x320888u;
            goto label_320888;
        }
    }
    ctx->pc = 0x320810u;
label_320810:
    // 0x320810: 0xc0c0da8  jal         func_3036A0
    ctx->pc = 0x320810u;
    SET_GPR_U32(ctx, 31, 0x320818u);
    ctx->pc = 0x3036A0u;
    if (runtime->hasFunction(0x3036A0u)) {
        auto targetFn = runtime->lookupFunction(0x3036A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320818u; }
        if (ctx->pc != 0x320818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003036A0_0x3036a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320818u; }
        if (ctx->pc != 0x320818u) { return; }
    }
    ctx->pc = 0x320818u;
label_320818:
    // 0x320818: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x320818u;
    {
        const bool branch_taken_0x320818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x320818) {
            ctx->pc = 0x320888u;
            goto label_320888;
        }
    }
    ctx->pc = 0x320820u;
    // 0x320820: 0xc063d18  jal         func_18F460
    ctx->pc = 0x320820u;
    SET_GPR_U32(ctx, 31, 0x320828u);
    ctx->pc = 0x18F460u;
    if (runtime->hasFunction(0x18F460u)) {
        auto targetFn = runtime->lookupFunction(0x18F460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320828u; }
        if (ctx->pc != 0x320828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F460_0x18f460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320828u; }
        if (ctx->pc != 0x320828u) { return; }
    }
    ctx->pc = 0x320828u;
label_320828:
    // 0x320828: 0xc065ffc  jal         func_197FF0
    ctx->pc = 0x320828u;
    SET_GPR_U32(ctx, 31, 0x320830u);
    ctx->pc = 0x197FF0u;
    if (runtime->hasFunction(0x197FF0u)) {
        auto targetFn = runtime->lookupFunction(0x197FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320830u; }
        if (ctx->pc != 0x320830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197FF0_0x197ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320830u; }
        if (ctx->pc != 0x320830u) { return; }
    }
    ctx->pc = 0x320830u;
label_320830:
    // 0x320830: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x320830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x320834: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x320834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x320838: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x320838u;
    {
        const bool branch_taken_0x320838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32083Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320838u;
            // 0x32083c: 0xa04303f0  sb          $v1, 0x3F0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1008), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320838) {
            ctx->pc = 0x320888u;
            goto label_320888;
        }
    }
    ctx->pc = 0x320840u;
label_320840:
    // 0x320840: 0xc0cb22c  jal         func_32C8B0
    ctx->pc = 0x320840u;
    SET_GPR_U32(ctx, 31, 0x320848u);
    ctx->pc = 0x320844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320840u;
            // 0x320844: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32C8B0u;
    if (runtime->hasFunction(0x32C8B0u)) {
        auto targetFn = runtime->lookupFunction(0x32C8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320848u; }
        if (ctx->pc != 0x320848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032C8B0_0x32c8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320848u; }
        if (ctx->pc != 0x320848u) { return; }
    }
    ctx->pc = 0x320848u;
label_320848:
    // 0x320848: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x320848u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x32084c: 0x3c07003d  lui         $a3, 0x3D
    ctx->pc = 0x32084cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)61 << 16));
    // 0x320850: 0x3c08003d  lui         $t0, 0x3D
    ctx->pc = 0x320850u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)61 << 16));
    // 0x320854: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x320854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320858: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x320858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32085c: 0x24c60c60  addiu       $a2, $a2, 0xC60
    ctx->pc = 0x32085cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3168));
    // 0x320860: 0x24e70a20  addiu       $a3, $a3, 0xA20
    ctx->pc = 0x320860u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2592));
    // 0x320864: 0x25080a30  addiu       $t0, $t0, 0xA30
    ctx->pc = 0x320864u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2608));
    // 0x320868: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x320868u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32086c: 0xc0c886c  jal         func_3221B0
    ctx->pc = 0x32086Cu;
    SET_GPR_U32(ctx, 31, 0x320874u);
    ctx->pc = 0x320870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32086Cu;
            // 0x320870: 0x240a0180  addiu       $t2, $zero, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3221B0u;
    if (runtime->hasFunction(0x3221B0u)) {
        auto targetFn = runtime->lookupFunction(0x3221B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320874u; }
        if (ctx->pc != 0x320874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003221B0_0x3221b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320874u; }
        if (ctx->pc != 0x320874u) { return; }
    }
    ctx->pc = 0x320874u;
label_320874:
    // 0x320874: 0xc063d18  jal         func_18F460
    ctx->pc = 0x320874u;
    SET_GPR_U32(ctx, 31, 0x32087Cu);
    ctx->pc = 0x18F460u;
    if (runtime->hasFunction(0x18F460u)) {
        auto targetFn = runtime->lookupFunction(0x18F460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32087Cu; }
        if (ctx->pc != 0x32087Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F460_0x18f460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32087Cu; }
        if (ctx->pc != 0x32087Cu) { return; }
    }
    ctx->pc = 0x32087Cu;
label_32087c:
    // 0x32087c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x32087cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x320880: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x320880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x320884: 0xa04303f0  sb          $v1, 0x3F0($v0)
    ctx->pc = 0x320884u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1008), (uint8_t)GPR_U32(ctx, 3));
label_320888:
    // 0x320888: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x320888u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32088c:
    // 0x32088c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32088cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x320890: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x320890u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x320894: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x320894u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x320898: 0x3e00008  jr          $ra
    ctx->pc = 0x320898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32089Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320898u;
            // 0x32089c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3208A0u;
    ctx->pc = 0x3208a0u;
}
