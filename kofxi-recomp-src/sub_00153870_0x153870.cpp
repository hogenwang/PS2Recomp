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

// Function: sub_00153870
// Address: 0x153870 - 0x1541c0
void sub_00153870_0x153870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153870_0x153870");
#endif

    switch (ctx->pc) {
        case 0x153880u: goto label_153880;
        case 0x15388cu: goto label_15388c;
        case 0x1538e0u: goto label_1538e0;
        case 0x1538ecu: goto label_1538ec;
        case 0x1538f8u: goto label_1538f8;
        case 0x153910u: goto label_153910;
        case 0x15391cu: goto label_15391c;
        case 0x1539c4u: goto label_1539c4;
        case 0x153ad0u: goto label_153ad0;
        case 0x153c18u: goto label_153c18;
        case 0x153c20u: goto label_153c20;
        case 0x153c38u: goto label_153c38;
        case 0x153e70u: goto label_153e70;
        case 0x153f00u: goto label_153f00;
        case 0x153f18u: goto label_153f18;
        case 0x153f50u: goto label_153f50;
        case 0x153fc8u: goto label_153fc8;
        case 0x153ff8u: goto label_153ff8;
        case 0x154028u: goto label_154028;
        case 0x1540dcu: goto label_1540dc;
        case 0x1540f4u: goto label_1540f4;
        case 0x154170u: goto label_154170;
        case 0x1541b4u: goto label_1541b4;
        default: break;
    }

    ctx->pc = 0x153870u;

    // 0x153870: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x153870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x153874: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x153874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x153878: 0xc0cb238  jal         func_32C8E0
    ctx->pc = 0x153878u;
    SET_GPR_U32(ctx, 31, 0x153880u);
    ctx->pc = 0x15387Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153878u;
    // 0x15387c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C8E0u, 0x153878u, 0x153880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153880u;
label_153880:
    // 0x153880: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x153880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x153884: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x153884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153888: 0x2463ef90  addiu       $v1, $v1, -0x1070
    ctx->pc = 0x153888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963088));
label_15388c:
    // 0x15388c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15388cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x153890: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x153890u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x153894: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x153894u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x153898: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x153898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x15389c: 0x0  nop
    ctx->pc = 0x15389cu;
    // NOP
    // 0x1538a0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1538A0u;
    {
        const bool branch_taken_0x1538a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1538a0) {
            ctx->pc = 0x15388Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15388c;
        }
    }
    ctx->pc = 0x1538A8u;
    // 0x1538a8: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x1538a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x1538ac: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x1538acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x1538b0: 0xac60ef68  sw          $zero, -0x1098($v1)
    ctx->pc = 0x1538b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963048), GPR_U32(ctx, 0));
    // 0x1538b4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1538b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1538b8: 0xac40ef60  sw          $zero, -0x10A0($v0)
    ctx->pc = 0x1538b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294963040), GPR_U32(ctx, 0));
    // 0x1538bc: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x1538bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x1538c0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x1538c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x1538c4: 0xac60ef70  sw          $zero, -0x1090($v1)
    ctx->pc = 0x1538c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963056), GPR_U32(ctx, 0));
    // 0x1538c8: 0xac40ef88  sw          $zero, -0x1078($v0)
    ctx->pc = 0x1538c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294963080), GPR_U32(ctx, 0));
    // 0x1538cc: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x1538ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x1538d0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x1538d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x1538d4: 0xac60ef80  sw          $zero, -0x1080($v1)
    ctx->pc = 0x1538d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963072), GPR_U32(ctx, 0));
    // 0x1538d8: 0xc063cac  jal         func_18F2B0
    ctx->pc = 0x1538D8u;
    SET_GPR_U32(ctx, 31, 0x1538E0u);
    ctx->pc = 0x1538DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1538D8u;
    // 0x1538dc: 0xac40ef78  sw          $zero, -0x1088($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294963064), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F2B0u, 0x1538D8u, 0x1538E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1538E0u;
label_1538e0:
    // 0x1538e0: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1538e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1538e4: 0xc067cc0  jal         func_19F300
    ctx->pc = 0x1538E4u;
    SET_GPR_U32(ctx, 31, 0x1538ECu);
    ctx->pc = 0x1538E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1538E4u;
    // 0x1538e8: 0x2484e7b8  addiu       $a0, $a0, -0x1848 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F300u, 0x1538E4u, 0x1538ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1538ECu;
label_1538ec:
    // 0x1538ec: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1538ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1538f0: 0xc067cc0  jal         func_19F300
    ctx->pc = 0x1538F0u;
    SET_GPR_U32(ctx, 31, 0x1538F8u);
    ctx->pc = 0x1538F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1538F0u;
    // 0x1538f4: 0x2484e7c0  addiu       $a0, $a0, -0x1840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F300u, 0x1538F0u, 0x1538F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1538F8u;
label_1538f8:
    // 0x1538f8: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x1538f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x1538fc: 0x8c441e50  lw          $a0, 0x1E50($v0)
    ctx->pc = 0x1538fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7760)));
    // 0x153900: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x153900u;
    {
        const bool branch_taken_0x153900 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x153900) {
            ctx->pc = 0x153910u;
            goto label_153910;
        }
    }
    ctx->pc = 0x153908u;
    // 0x153908: 0xc06936c  jal         func_1A4DB0
    ctx->pc = 0x153908u;
    SET_GPR_U32(ctx, 31, 0x153910u);
    ctx->pc = 0x1A4DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4DB0u, 0x153908u, 0x153910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153910u;
label_153910:
    // 0x153910: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x153910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x153914: 0xc0c25cc  jal         func_309730
    ctx->pc = 0x153914u;
    SET_GPR_U32(ctx, 31, 0x15391Cu);
    ctx->pc = 0x153918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153914u;
    // 0x153918: 0xac401e50  sw          $zero, 0x1E50($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 7760), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309730u, 0x153914u, 0x15391Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15391Cu;
label_15391c:
    // 0x15391c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15391cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153920: 0x3e00008  jr          $ra
    ctx->pc = 0x153920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153920u;
        // 0x153924: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153928u;
    // 0x153928: 0x0  nop
    ctx->pc = 0x153928u;
    // NOP
    // 0x15392c: 0x0  nop
    ctx->pc = 0x15392cu;
    // NOP
    // 0x153930: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x153930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x153934: 0x3c080036  lui         $t0, 0x36
    ctx->pc = 0x153934u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)54 << 16));
    // 0x153938: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x153938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x15393c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x15393cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x153940: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x153940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x153944: 0x2508e880  addiu       $t0, $t0, -0x1780
    ctx->pc = 0x153944u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294961280));
    // 0x153948: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x153948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x15394c: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x15394cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x153950: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x153950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x153954: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x153954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x153958: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x153958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x15395c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x15395cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x153960: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x153960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x153964: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x153964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x153968: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x153968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x15396c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15396cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x153970: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x153970u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x153974: 0xc461e860  lwc1        $f1, -0x17A0($v1)
    ctx->pc = 0x153974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294961248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153978: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x153978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x15397c: 0xc462e864  lwc1        $f2, -0x179C($v1)
    ctx->pc = 0x15397cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294961252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x153980: 0xe7a100f0  swc1        $f1, 0xF0($sp)
    ctx->pc = 0x153980u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x153984: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x153984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x153988: 0xc460e868  lwc1        $f0, -0x1798($v1)
    ctx->pc = 0x153988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294961256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15398c: 0xe7a200f4  swc1        $f2, 0xF4($sp)
    ctx->pc = 0x15398cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x153990: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x153990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x153994: 0xc461e86c  lwc1        $f1, -0x1794($v1)
    ctx->pc = 0x153994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294961260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153998: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x153998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x15399c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x15399cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x1539a0: 0xc460e870  lwc1        $f0, -0x1790($v1)
    ctx->pc = 0x1539a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294961264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1539a4: 0xe7a100fc  swc1        $f1, 0xFC($sp)
    ctx->pc = 0x1539a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x1539a8: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1539a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x1539ac: 0xc461e874  lwc1        $f1, -0x178C($v1)
    ctx->pc = 0x1539acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294961268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1539b0: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x1539b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x1539b4: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1539b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x1539b8: 0xc460e878  lwc1        $f0, -0x1788($v1)
    ctx->pc = 0x1539b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294961272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1539bc: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x1539bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x1539c0: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x1539c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_1539c4:
    // 0x1539c4: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x1539c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1539c8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1539c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1539cc: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x1539ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1539d0: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x1539d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x1539d4: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x1539d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x1539d8: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x1539d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x1539dc: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1539DCu;
    {
        const bool branch_taken_0x1539dc = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x1539E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1539DCu;
        // 0x1539e0: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1539dc) {
            ctx->pc = 0x1539C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1539c4;
        }
    }
    ctx->pc = 0x1539E4u;
    // 0x1539e4: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x1539e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x1539e8: 0x3c05413c  lui         $a1, 0x413C
    ctx->pc = 0x1539e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16700 << 16));
    // 0x1539ec: 0x9463f348  lhu         $v1, -0xCB8($v1)
    ctx->pc = 0x1539ecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294964040)));
    // 0x1539f0: 0x34a5cccd  ori         $a1, $a1, 0xCCCD
    ctx->pc = 0x1539f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
    // 0x1539f4: 0x4485a000  mtc1        $a1, $f20
    ctx->pc = 0x1539f4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1539f8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1539f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1539fc: 0x54600123  bnel        $v1, $zero, . + 4 + (0x123 << 2)
    ctx->pc = 0x1539FCu;
    {
        const bool branch_taken_0x1539fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1539fc) {
            ctx->pc = 0x153A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1539FCu;
            // 0x153a00: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153E8Cu;
            goto label_153e8c;
        }
    }
    ctx->pc = 0x153A04u;
    // 0x153a04: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x153a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x153a08: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x153a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x153a0c: 0x8c51e820  lw          $s1, -0x17E0($v0)
    ctx->pc = 0x153a0cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961184)));
    // 0x153a10: 0x3c0a0036  lui         $t2, 0x36
    ctx->pc = 0x153a10u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)54 << 16));
    // 0x153a14: 0x8c76e824  lw          $s6, -0x17DC($v1)
    ctx->pc = 0x153a14u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961188)));
    // 0x153a18: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x153a18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x153a1c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x153a1cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153a20: 0x254ae834  addiu       $t2, $t2, -0x17CC
    ctx->pc = 0x153a20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294961204));
    // 0x153a24: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x153a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x153a28: 0x8446db30  lh          $a2, -0x24D0($v0)
    ctx->pc = 0x153a28u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957872)));
    // 0x153a2c: 0x3c034460  lui         $v1, 0x4460
    ctx->pc = 0x153a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17504 << 16));
    // 0x153a30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x153a30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153a34: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x153a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x153a38: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x153a38u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x153a3c: 0x8c65e810  lw          $a1, -0x17F0($v1)
    ctx->pc = 0x153a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961168)));
    // 0x153a40: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x153a40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x153a44: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x153a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x153a48: 0x8c43e818  lw          $v1, -0x17E8($v0)
    ctx->pc = 0x153a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961176)));
    // 0x153a4c: 0xc54021  addu        $t0, $a2, $a1
    ctx->pc = 0x153a4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x153a50: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x153a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x153a54: 0x654823  subu        $t1, $v1, $a1
    ctx->pc = 0x153a54u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x153a58: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x153a58u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[3] = ctx->f[1] / ctx->f[0];
    // 0x153a5c: 0x8c46e814  lw          $a2, -0x17EC($v0)
    ctx->pc = 0x153a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961172)));
    // 0x153a60: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x153a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x153a64: 0x8c45e81c  lw          $a1, -0x17E4($v0)
    ctx->pc = 0x153a64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961180)));
    // 0x153a68: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x153a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x153a6c: 0xa63823  subu        $a3, $a1, $a2
    ctx->pc = 0x153a6cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x153a70: 0x8443db2c  lh          $v1, -0x24D4($v0)
    ctx->pc = 0x153a70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957868)));
    // 0x153a74: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x153a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x153a78: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x153a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x153a7c: 0x8446db20  lh          $a2, -0x24E0($v0)
    ctx->pc = 0x153a7cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957856)));
    // 0x153a80: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x153a80u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153a84: 0x0  nop
    ctx->pc = 0x153a84u;
    // NOP
    // 0x153a88: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x153a88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x153a8c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x153a8cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153a90: 0x0  nop
    ctx->pc = 0x153a90u;
    // NOP
    // 0x153a94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x153a94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x153a98: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x153a98u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[2], ctx->f[0]));
    // 0x153a9c: 0x4601181c  madd.s      $f0, $f3, $f1
    ctx->pc = 0x153a9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x153aa0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x153aa0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x153aa4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x153aa4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x153aa8: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x153aa8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153aac: 0x0  nop
    ctx->pc = 0x153aacu;
    // NOP
    // 0x153ab0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x153ab0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x153ab4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x153ab4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153ab8: 0x0  nop
    ctx->pc = 0x153ab8u;
    // NOP
    // 0x153abc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x153abcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x153ac0: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x153ac0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[2], ctx->f[0]));
    // 0x153ac4: 0x4601181c  madd.s      $f0, $f3, $f1
    ctx->pc = 0x153ac4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x153ac8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x153ac8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x153acc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x153accu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_153ad0:
    // 0x153ad0: 0x85450000  lh          $a1, 0x0($t2)
    ctx->pc = 0x153ad0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x153ad4: 0xa6082a  slt         $at, $a1, $a2
    ctx->pc = 0x153ad4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x153ad8: 0x54200041  bnel        $at, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x153AD8u;
    {
        const bool branch_taken_0x153ad8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x153ad8) {
            ctx->pc = 0x153ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153AD8u;
            // 0x153adc: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153BE0u;
            goto label_153be0;
        }
    }
    ctx->pc = 0x153AE0u;
    // 0x153ae0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x153ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x153ae4: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x153ae4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x153ae8: 0xb4080  sll         $t0, $t3, 2
    ctx->pc = 0x153ae8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x153aec: 0x24a5e82c  addiu       $a1, $a1, -0x17D4
    ctx->pc = 0x153aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961196));
    // 0x153af0: 0xa83821  addu        $a3, $a1, $t0
    ctx->pc = 0x153af0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x153af4: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x153af4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x153af8: 0x84e70000  lh          $a3, 0x0($a3)
    ctx->pc = 0x153af8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x153afc: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x153afcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x153b00: 0x2484e830  addiu       $a0, $a0, -0x17D0
    ctx->pc = 0x153b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961200));
    // 0x153b04: 0x882821  addu        $a1, $a0, $t0
    ctx->pc = 0x153b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x153b08: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x153b08u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x153b0c: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x153b0cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x153b10: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x153b10u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153b14: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x153b14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x153b18: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x153b18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x153b1c: 0x2484e832  addiu       $a0, $a0, -0x17CE
    ctx->pc = 0x153b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961202));
    // 0x153b20: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x153b20u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x153b24: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x153b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x153b28: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x153b28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x153b2c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x153b2cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153b30: 0x0  nop
    ctx->pc = 0x153b30u;
    // NOP
    // 0x153b34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x153b34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x153b38: 0x46000903  div.s       $f4, $f1, $f0
    ctx->pc = 0x153b38u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[4] = ctx->f[1] / ctx->f[0];
    // 0x153b3c: 0x0  nop
    ctx->pc = 0x153b3cu;
    // NOP
    // 0x153b40: 0x0  nop
    ctx->pc = 0x153b40u;
    // NOP
    // 0x153b44: 0x4810024  bgez        $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x153B44u;
    {
        const bool branch_taken_0x153b44 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x153b44) {
            ctx->pc = 0x153BD8u;
            goto label_153bd8;
        }
    }
    ctx->pc = 0x153B4Cu;
    // 0x153b4c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x153b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x153b50: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x153b50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x153b54: 0x24a5e82e  addiu       $a1, $a1, -0x17D2
    ctx->pc = 0x153b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961198));
    // 0x153b58: 0x2484e836  addiu       $a0, $a0, -0x17CA
    ctx->pc = 0x153b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961206));
    // 0x153b5c: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x153b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x153b60: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x153b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x153b64: 0x84a60000  lh          $a2, 0x0($a1)
    ctx->pc = 0x153b64u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x153b68: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x153b68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x153b6c: 0x84850000  lh          $a1, 0x0($a0)
    ctx->pc = 0x153b6cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x153b70: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x153b70u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x153b74: 0x0  nop
    ctx->pc = 0x153b74u;
    // NOP
    // 0x153b78: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x153b78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x153b7c: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x153b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
    // 0x153b80: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x153b80u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153b84: 0xa62023  subu        $a0, $a1, $a2
    ctx->pc = 0x153b84u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x153b88: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x153b88u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x153b8c: 0x0  nop
    ctx->pc = 0x153b8cu;
    // NOP
    // 0x153b90: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x153b90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x153b94: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x153b94u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
    // 0x153b98: 0x4603205c  madd.s      $f1, $f4, $f3
    ctx->pc = 0x153b98u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x153b9c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x153b9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153ba0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x153BA0u;
    {
        const bool branch_taken_0x153ba0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x153ba0) {
            ctx->pc = 0x153BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153BA0u;
            // 0x153ba4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x153BB8u;
            goto label_153bb8;
        }
    }
    ctx->pc = 0x153BA8u;
    // 0x153ba8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x153ba8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x153bac: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x153bacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x153bb0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x153BB0u;
    {
        const bool branch_taken_0x153bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153BB0u;
        // 0x153bb4: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x153bb0) {
            ctx->pc = 0x153BD0u;
            goto label_153bd0;
        }
    }
    ctx->pc = 0x153BB8u;
label_153bb8:
    // 0x153bb8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x153bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x153bbc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x153bbcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x153bc0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x153bc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x153bc4: 0x0  nop
    ctx->pc = 0x153bc4u;
    // NOP
    // 0x153bc8: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x153bc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x153bcc: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x153bccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_153bd0:
    // 0x153bd0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x153BD0u;
    {
        const bool branch_taken_0x153bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153BD0u;
        // 0x153bd4: 0x30a400ff  andi        $a0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x153bd0) {
            ctx->pc = 0x153BF0u;
            goto label_153bf0;
        }
    }
    ctx->pc = 0x153BD8u;
label_153bd8:
    // 0x153bd8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x153BD8u;
    {
        const bool branch_taken_0x153bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153BD8u;
        // 0x153bdc: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x153bd8) {
            ctx->pc = 0x153BF0u;
            goto label_153bf0;
        }
    }
    ctx->pc = 0x153BE0u;
label_153be0:
    // 0x153be0: 0x2965000a  slti        $a1, $t3, 0xA
    ctx->pc = 0x153be0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x153be4: 0x14a0ffba  bnez        $a1, . + 4 + (-0x46 << 2)
    ctx->pc = 0x153BE4u;
    {
        const bool branch_taken_0x153be4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x153BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153BE4u;
        // 0x153be8: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153be4) {
            ctx->pc = 0x153AD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_153ad0;
        }
    }
    ctx->pc = 0x153BECu;
    // 0x153bec: 0x0  nop
    ctx->pc = 0x153becu;
    // NOP
label_153bf0:
    // 0x153bf0: 0x56f023  subu        $fp, $v0, $s6
    ctx->pc = 0x153bf0u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x153bf4: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x153bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x153bf8: 0x71b823  subu        $s7, $v1, $s1
    ctx->pc = 0x153bf8u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x153bfc: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x153bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x153c00: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x153c00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x153c04: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x153c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x153c08: 0x2484e7c0  addiu       $a0, $a0, -0x1840
    ctx->pc = 0x153c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961088));
    // 0x153c0c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x153c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x153c10: 0xc067cd0  jal         func_19F340
    ctx->pc = 0x153C10u;
    SET_GPR_U32(ctx, 31, 0x153C18u);
    ctx->pc = 0x153C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153C10u;
    // 0x153c14: 0x628025  or          $s0, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F340u, 0x153C10u, 0x153C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153C18u;
label_153c18:
    // 0x153c18: 0xc067ca4  jal         func_19F290
    ctx->pc = 0x153C18u;
    SET_GPR_U32(ctx, 31, 0x153C20u);
    ctx->pc = 0x153C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153C18u;
    // 0x153c1c: 0x24042000  addiu       $a0, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F290u, 0x153C18u, 0x153C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153C20u;
label_153c20:
    // 0x153c20: 0x3c150036  lui         $s5, 0x36
    ctx->pc = 0x153c20u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)54 << 16));
    // 0x153c24: 0x3c130036  lui         $s3, 0x36
    ctx->pc = 0x153c24u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)54 << 16));
    // 0x153c28: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x153c28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153c2c: 0x26b5e7d0  addiu       $s5, $s5, -0x1830
    ctx->pc = 0x153c2cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961104));
    // 0x153c30: 0x27b400f0  addiu       $s4, $sp, 0xF0
    ctx->pc = 0x153c30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x153c34: 0x2673e7f0  addiu       $s3, $s3, -0x1810
    ctx->pc = 0x153c34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961136));
label_153c38:
    // 0x153c38: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x153c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x153c3c: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x153c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x153c40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x153c40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153c44: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x153c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x153c48: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x153c48u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x153c4c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x153c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x153c50: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x153c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x153c54: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x153c54u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153c58: 0x244500b0  addiu       $a1, $v0, 0xB0
    ctx->pc = 0x153c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x153c5c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x153c5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x153c60: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x153c60u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153c64: 0x0  nop
    ctx->pc = 0x153c64u;
    // NOP
    // 0x153c68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x153c68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x153c6c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x153c6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x153c70: 0xc6a30000  lwc1        $f3, 0x0($s5)
    ctx->pc = 0x153c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x153c74: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x153c74u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[2], ctx->f[0]));
    // 0x153c78: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x153c78u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[3]));
    // 0x153c7c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x153c7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x153c80: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x153c80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x153c84: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x153c84u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153c88: 0x0  nop
    ctx->pc = 0x153c88u;
    // NOP
    // 0x153c8c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x153c8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x153c90: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x153c90u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153c94: 0x0  nop
    ctx->pc = 0x153c94u;
    // NOP
    // 0x153c98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x153c98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x153c9c: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x153c9cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[2], ctx->f[0]));
    // 0x153ca0: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x153ca0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[3]));
    // 0x153ca4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x153ca4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x153ca8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x153ca8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x153cac: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x153cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153cb0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x153cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153cb4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x153cb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x153cb8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x153cb8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x153cbc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x153cbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x153cc0: 0x0  nop
    ctx->pc = 0x153cc0u;
    // NOP
    // 0x153cc4: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x153cc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x153cc8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x153cc8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x153ccc: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x153CCCu;
    {
        const bool branch_taken_0x153ccc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x153CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153CCCu;
        // 0x153cd0: 0x41043  sra         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153ccc) {
            ctx->pc = 0x153CDCu;
            goto label_153cdc;
        }
    }
    ctx->pc = 0x153CD4u;
    // 0x153cd4: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x153cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x153cd8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x153cd8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_153cdc:
    // 0x153cdc: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x153cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153ce0: 0xc22023  subu        $a0, $a2, $v0
    ctx->pc = 0x153ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x153ce4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x153ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x153ce8: 0x4343c  dsll32      $a2, $a0, 16
    ctx->pc = 0x153ce8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 16));
    // 0x153cec: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x153cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x153cf0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x153cf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x153cf4: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x153cf4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x153cf8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x153cf8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x153cfc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x153cfcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x153d00: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x153d00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x153d04: 0x0  nop
    ctx->pc = 0x153d04u;
    // NOP
    // 0x153d08: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x153d08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x153d0c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x153d0cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x153d10: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x153D10u;
    {
        const bool branch_taken_0x153d10 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x153D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153D10u;
        // 0x153d14: 0x42843  sra         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153d10) {
            ctx->pc = 0x153D20u;
            goto label_153d20;
        }
    }
    ctx->pc = 0x153D18u;
    // 0x153d18: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x153d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x153d1c: 0x42843  sra         $a1, $a0, 1
    ctx->pc = 0x153d1cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 1));
label_153d20:
    // 0x153d20: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x153d20u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153d24: 0x652023  subu        $a0, $v1, $a1
    ctx->pc = 0x153d24u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x153d28: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x153d28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x153d2c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x153d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x153d30: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x153d30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
    // 0x153d34: 0x35c3c  dsll32      $t3, $v1, 16
    ctx->pc = 0x153d34u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) << (32 + 16));
    // 0x153d38: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x153d38u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x153d3c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x153d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x153d40: 0x8463db2c  lh          $v1, -0x24D4($v1)
    ctx->pc = 0x153d40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957868)));
    // 0x153d44: 0xb5c3f  dsra32      $t3, $t3, 16
    ctx->pc = 0x153d44u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
    // 0x153d48: 0xafa0011c  sw          $zero, 0x11C($sp)
    ctx->pc = 0x153d48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
    // 0x153d4c: 0x3c0a3f80  lui         $t2, 0x3F80
    ctx->pc = 0x153d4cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16256 << 16));
    // 0x153d50: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x153d50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
    // 0x153d54: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x153d54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x153d58: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x153d58u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153d5c: 0x246800f0  addiu       $t0, $v1, 0xF0
    ctx->pc = 0x153d5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    // 0x153d60: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x153d60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x153d64: 0x8485db30  lh          $a1, -0x24D0($a0)
    ctx->pc = 0x153d64u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294957872)));
    // 0x153d68: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x153d68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x153d6c: 0xafb00124  sw          $s0, 0x124($sp)
    ctx->pc = 0x153d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 16));
    // 0x153d70: 0xafa00128  sw          $zero, 0x128($sp)
    ctx->pc = 0x153d70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 0));
    // 0x153d74: 0x24a90140  addiu       $t1, $a1, 0x140
    ctx->pc = 0x153d74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x153d78: 0x8c66ef60  lw          $a2, -0x10A0($v1)
    ctx->pc = 0x153d78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963040)));
    // 0x153d7c: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x153d7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x153d80: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x153d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x153d84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x153d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153d88: 0x448b0000  mtc1        $t3, $f0
    ctx->pc = 0x153d88u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153d8c: 0x0  nop
    ctx->pc = 0x153d8cu;
    // NOP
    // 0x153d90: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x153d90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x153d94: 0xe7b40118  swc1        $f20, 0x118($sp)
    ctx->pc = 0x153d94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x153d98: 0xe7a10110  swc1        $f1, 0x110($sp)
    ctx->pc = 0x153d98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x153d9c: 0xe7a30114  swc1        $f3, 0x114($sp)
    ctx->pc = 0x153d9cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x153da0: 0xe7a1012c  swc1        $f1, 0x12C($sp)
    ctx->pc = 0x153da0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x153da4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x153da4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153da8: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x153da8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x153dac: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x153dacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x153db0: 0xe7b40134  swc1        $f20, 0x134($sp)
    ctx->pc = 0x153db0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x153db4: 0xafa00138  sw          $zero, 0x138($sp)
    ctx->pc = 0x153db4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 0));
    // 0x153db8: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x153db8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153dbc: 0xafaa013c  sw          $t2, 0x13C($sp)
    ctx->pc = 0x153dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 10));
    // 0x153dc0: 0x46800220  cvt.s.w     $f8, $f0
    ctx->pc = 0x153dc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
    // 0x153dc4: 0xafb00140  sw          $s0, 0x140($sp)
    ctx->pc = 0x153dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 16));
    // 0x153dc8: 0xafa00144  sw          $zero, 0x144($sp)
    ctx->pc = 0x153dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 0));
    // 0x153dcc: 0xe7a10148  swc1        $f1, 0x148($sp)
    ctx->pc = 0x153dccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x153dd0: 0xe7a3014c  swc1        $f3, 0x14C($sp)
    ctx->pc = 0x153dd0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x153dd4: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x153dd4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x153dd8: 0xafaa0154  sw          $t2, 0x154($sp)
    ctx->pc = 0x153dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 10));
    // 0x153ddc: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x153ddcu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153de0: 0xafa00158  sw          $zero, 0x158($sp)
    ctx->pc = 0x153de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 0));
    // 0x153de4: 0x468001e0  cvt.s.w     $f7, $f0
    ctx->pc = 0x153de4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x153de8: 0xafb0015c  sw          $s0, 0x15C($sp)
    ctx->pc = 0x153de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 16));
    // 0x153dec: 0xafa00160  sw          $zero, 0x160($sp)
    ctx->pc = 0x153decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 0));
    // 0x153df0: 0xe7a10164  swc1        $f1, 0x164($sp)
    ctx->pc = 0x153df0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
    // 0x153df4: 0xe7a20168  swc1        $f2, 0x168($sp)
    ctx->pc = 0x153df4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x153df8: 0xe7b4016c  swc1        $f20, 0x16C($sp)
    ctx->pc = 0x153df8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
    // 0x153dfc: 0xafaa0170  sw          $t2, 0x170($sp)
    ctx->pc = 0x153dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 10));
    // 0x153e00: 0xafaa0174  sw          $t2, 0x174($sp)
    ctx->pc = 0x153e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 10));
    // 0x153e04: 0xafb00178  sw          $s0, 0x178($sp)
    ctx->pc = 0x153e04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 16));
    // 0x153e08: 0xafa0017c  sw          $zero, 0x17C($sp)
    ctx->pc = 0x153e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 0));
    // 0x153e0c: 0xc7a10110  lwc1        $f1, 0x110($sp)
    ctx->pc = 0x153e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153e10: 0xc7a5012c  lwc1        $f5, 0x12C($sp)
    ctx->pc = 0x153e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x153e14: 0xc7a40130  lwc1        $f4, 0x130($sp)
    ctx->pc = 0x153e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x153e18: 0x46080981  sub.s       $f6, $f1, $f8
    ctx->pc = 0x153e18u;
    ctx->f[6] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x153e1c: 0xc7a10164  lwc1        $f1, 0x164($sp)
    ctx->pc = 0x153e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153e20: 0xc7a30148  lwc1        $f3, 0x148($sp)
    ctx->pc = 0x153e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x153e24: 0x46082941  sub.s       $f5, $f5, $f8
    ctx->pc = 0x153e24u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[8]);
    // 0x153e28: 0x46080841  sub.s       $f1, $f1, $f8
    ctx->pc = 0x153e28u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x153e2c: 0x46072101  sub.s       $f4, $f4, $f7
    ctx->pc = 0x153e2cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[7]);
    // 0x153e30: 0x460818c1  sub.s       $f3, $f3, $f8
    ctx->pc = 0x153e30u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[8]);
    // 0x153e34: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x153e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153e38: 0xe7a60110  swc1        $f6, 0x110($sp)
    ctx->pc = 0x153e38u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x153e3c: 0xc7a2014c  lwc1        $f2, 0x14C($sp)
    ctx->pc = 0x153e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x153e40: 0x46070181  sub.s       $f6, $f0, $f7
    ctx->pc = 0x153e40u;
    ctx->f[6] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x153e44: 0xc7a00168  lwc1        $f0, 0x168($sp)
    ctx->pc = 0x153e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153e48: 0xe7a10164  swc1        $f1, 0x164($sp)
    ctx->pc = 0x153e48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
    // 0x153e4c: 0x46071041  sub.s       $f1, $f2, $f7
    ctx->pc = 0x153e4cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
    // 0x153e50: 0x46070001  sub.s       $f0, $f0, $f7
    ctx->pc = 0x153e50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x153e54: 0xe7a60114  swc1        $f6, 0x114($sp)
    ctx->pc = 0x153e54u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x153e58: 0xe7a5012c  swc1        $f5, 0x12C($sp)
    ctx->pc = 0x153e58u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x153e5c: 0xe7a40130  swc1        $f4, 0x130($sp)
    ctx->pc = 0x153e5cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x153e60: 0xe7a30148  swc1        $f3, 0x148($sp)
    ctx->pc = 0x153e60u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x153e64: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x153e64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x153e68: 0xc0c6cc4  jal         func_31B310
    ctx->pc = 0x153E68u;
    SET_GPR_U32(ctx, 31, 0x153E70u);
    ctx->pc = 0x153E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153E68u;
    // 0x153e6c: 0xe7a00168  swc1        $f0, 0x168($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B310u, 0x153E68u, 0x153E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153E70u;
label_153e70:
    // 0x153e70: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x153e70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x153e74: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x153e74u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x153e78: 0x2a430007  slti        $v1, $s2, 0x7
    ctx->pc = 0x153e78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x153e7c: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x153e7cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x153e80: 0x1460ff6d  bnez        $v1, . + 4 + (-0x93 << 2)
    ctx->pc = 0x153E80u;
    {
        const bool branch_taken_0x153e80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x153E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153E80u;
        // 0x153e84: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153e80) {
            ctx->pc = 0x153C38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_153c38;
        }
    }
    ctx->pc = 0x153E88u;
    // 0x153e88: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x153e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_153e8c:
    // 0x153e8c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x153e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x153e90: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x153e90u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x153e94: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x153e94u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x153e98: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x153e98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x153e9c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x153e9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x153ea0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x153ea0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x153ea4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x153ea4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x153ea8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x153ea8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x153eac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x153eacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153eb0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x153eb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x153EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153EB4u;
        // 0x153eb8: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153EBCu;
    // 0x153ebc: 0x0  nop
    ctx->pc = 0x153ebcu;
    // NOP
    // 0x153ec0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x153ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x153ec4: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x153ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x153ec8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x153ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x153ecc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x153eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x153ed0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x153ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x153ed4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x153ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x153ed8: 0x9463f348  lhu         $v1, -0xCB8($v1)
    ctx->pc = 0x153ed8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294964040)));
    // 0x153edc: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x153edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x153ee0: 0x146000a3  bnez        $v1, . + 4 + (0xA3 << 2)
    ctx->pc = 0x153EE0u;
    {
        const bool branch_taken_0x153ee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x153EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153EE0u;
        // 0x153ee4: 0x8c910010  lw          $s1, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153ee0) {
            ctx->pc = 0x154170u;
            goto label_154170;
        }
    }
    ctx->pc = 0x153EE8u;
    // 0x153ee8: 0x8e2307d4  lw          $v1, 0x7D4($s1)
    ctx->pc = 0x153ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2004)));
    // 0x153eec: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x153eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x153ef0: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x153EF0u;
    {
        const bool branch_taken_0x153ef0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x153EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153EF0u;
        // 0x153ef4: 0xae2207d4  sw          $v0, 0x7D4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2004), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153ef0) {
            ctx->pc = 0x153F48u;
            goto label_153f48;
        }
    }
    ctx->pc = 0x153EF8u;
    // 0x153ef8: 0xc067c8c  jal         func_19F230
    ctx->pc = 0x153EF8u;
    SET_GPR_U32(ctx, 31, 0x153F00u);
    ctx->pc = 0x19F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F230u, 0x153EF8u, 0x153F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153F00u;
label_153f00:
    // 0x153f00: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x153f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x153f04: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x153f04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x153f08: 0x0  nop
    ctx->pc = 0x153f08u;
    // NOP
    // 0x153f0c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x153f0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x153f10: 0xc067c8c  jal         func_19F230
    ctx->pc = 0x153F10u;
    SET_GPR_U32(ctx, 31, 0x153F18u);
    ctx->pc = 0x153F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153F10u;
    // 0x153f14: 0xe62007d0  swc1        $f0, 0x7D0($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2000), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F230u, 0x153F10u, 0x153F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153F18u;
label_153f18:
    // 0x153f18: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x153f18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x153f1c: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x153f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x153f20: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x153f20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x153f24: 0x0  nop
    ctx->pc = 0x153f24u;
    // NOP
    // 0x153f28: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x153f28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x153f2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x153f2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153f30: 0x0  nop
    ctx->pc = 0x153f30u;
    // NOP
    // 0x153f34: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x153f34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x153f38: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x153f38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x153f3c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x153f3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x153f40: 0x0  nop
    ctx->pc = 0x153f40u;
    // NOP
    // 0x153f44: 0xae2207d4  sw          $v0, 0x7D4($s1)
    ctx->pc = 0x153f44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2004), GPR_U32(ctx, 2));
label_153f48:
    // 0x153f48: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x153f48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153f4c: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x153f4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_153f50:
    // 0x153f50: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x153f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x153f54: 0x9442f348  lhu         $v0, -0xCB8($v0)
    ctx->pc = 0x153f54u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294964040)));
    // 0x153f58: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x153f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x153f5c: 0x14400078  bnez        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x153F5Cu;
    {
        const bool branch_taken_0x153f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x153f5c) {
            ctx->pc = 0x154140u;
            goto label_154140;
        }
    }
    ctx->pc = 0x153F64u;
    // 0x153f64: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x153f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153f68: 0x2a420046  slti        $v0, $s2, 0x46
    ctx->pc = 0x153f68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)70) ? 1 : 0);
    // 0x153f6c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x153f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153f70: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x153f70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x153f74: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x153f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x153f78: 0xc62107d0  lwc1        $f1, 0x7D0($s1)
    ctx->pc = 0x153f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153f7c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x153f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153f80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x153f80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x153f84: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x153F84u;
    {
        const bool branch_taken_0x153f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x153F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153F84u;
        // 0x153f88: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x153f84) {
            ctx->pc = 0x154070u;
            goto label_154070;
        }
    }
    ctx->pc = 0x153F8Cu;
    // 0x153f8c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x153f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153f90: 0x3c024430  lui         $v0, 0x4430
    ctx->pc = 0x153f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17456 << 16));
    // 0x153f94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x153f94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153f98: 0x0  nop
    ctx->pc = 0x153f98u;
    // NOP
    // 0x153f9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x153f9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153fa0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x153FA0u;
    {
        const bool branch_taken_0x153fa0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x153fa0) {
            ctx->pc = 0x153FC0u;
            goto label_153fc0;
        }
    }
    ctx->pc = 0x153FA8u;
    // 0x153fa8: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x153fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153fac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x153facu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153fb0: 0x0  nop
    ctx->pc = 0x153fb0u;
    // NOP
    // 0x153fb4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x153fb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153fb8: 0x45000061  bc1f        . + 4 + (0x61 << 2)
    ctx->pc = 0x153FB8u;
    {
        const bool branch_taken_0x153fb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x153fb8) {
            ctx->pc = 0x154140u;
            goto label_154140;
        }
    }
    ctx->pc = 0x153FC0u;
label_153fc0:
    // 0x153fc0: 0xc067c8c  jal         func_19F230
    ctx->pc = 0x153FC0u;
    SET_GPR_U32(ctx, 31, 0x153FC8u);
    ctx->pc = 0x19F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F230u, 0x153FC0u, 0x153FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153FC8u;
label_153fc8:
    // 0x153fc8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x153fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x153fcc: 0x3c0343f0  lui         $v1, 0x43F0
    ctx->pc = 0x153fccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17392 << 16));
    // 0x153fd0: 0x8442db2c  lh          $v0, -0x24D4($v0)
    ctx->pc = 0x153fd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957868)));
    // 0x153fd4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x153fd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x153fd8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x153fd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x153fdc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x153fdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x153fe0: 0x0  nop
    ctx->pc = 0x153fe0u;
    // NOP
    // 0x153fe4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x153fe4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x153fe8: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x153fe8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
    // 0x153fec: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x153fecu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x153ff0: 0xc067c8c  jal         func_19F230
    ctx->pc = 0x153FF0u;
    SET_GPR_U32(ctx, 31, 0x153FF8u);
    ctx->pc = 0x153FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153FF0u;
    // 0x153ff4: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F230u, 0x153FF0u, 0x153FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153FF8u;
label_153ff8:
    // 0x153ff8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x153ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x153ffc: 0x3c034320  lui         $v1, 0x4320
    ctx->pc = 0x153ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17184 << 16));
    // 0x154000: 0x8442db32  lh          $v0, -0x24CE($v0)
    ctx->pc = 0x154000u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957874)));
    // 0x154004: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x154004u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x154008: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x154008u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x15400c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x15400cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x154010: 0x0  nop
    ctx->pc = 0x154010u;
    // NOP
    // 0x154014: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x154014u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x154018: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x154018u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
    // 0x15401c: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x15401cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x154020: 0xc067c8c  jal         func_19F230
    ctx->pc = 0x154020u;
    SET_GPR_U32(ctx, 31, 0x154028u);
    ctx->pc = 0x154024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154020u;
    // 0x154024: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F230u, 0x154020u, 0x154028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154028u;
label_154028:
    // 0x154028: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x154028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x15402c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15402cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x154030: 0x0  nop
    ctx->pc = 0x154030u;
    // NOP
    // 0x154034: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x154034u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x154038: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x154038u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x15403c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15403cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x154040: 0x0  nop
    ctx->pc = 0x154040u;
    // NOP
    // 0x154044: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x154044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x154048: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x154048u;
    {
        const bool branch_taken_0x154048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154048) {
            ctx->pc = 0x154060u;
            goto label_154060;
        }
    }
    ctx->pc = 0x154050u;
    // 0x154050: 0x3c024026  lui         $v0, 0x4026
    ctx->pc = 0x154050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16422 << 16));
    // 0x154054: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x154054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x154058: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x154058u;
    {
        const bool branch_taken_0x154058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154058u;
        // 0x15405c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154058) {
            ctx->pc = 0x154140u;
            goto label_154140;
        }
    }
    ctx->pc = 0x154060u;
label_154060:
    // 0x154060: 0x3c02413c  lui         $v0, 0x413C
    ctx->pc = 0x154060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16700 << 16));
    // 0x154064: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x154064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x154068: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x154068u;
    {
        const bool branch_taken_0x154068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15406Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154068u;
        // 0x15406c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154068) {
            ctx->pc = 0x154140u;
            goto label_154140;
        }
    }
    ctx->pc = 0x154070u;
label_154070:
    // 0x154070: 0x3c024430  lui         $v0, 0x4430
    ctx->pc = 0x154070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17456 << 16));
    // 0x154074: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x154074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x154078: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x154078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15407c: 0x0  nop
    ctx->pc = 0x15407cu;
    // NOP
    // 0x154080: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x154080u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x154084: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x154084u;
    {
        const bool branch_taken_0x154084 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x154084) {
            ctx->pc = 0x1540C0u;
            goto label_1540c0;
        }
    }
    ctx->pc = 0x15408Cu;
    // 0x15408c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x15408cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x154090: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x154090u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154094: 0x0  nop
    ctx->pc = 0x154094u;
    // NOP
    // 0x154098: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x154098u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15409c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x15409Cu;
    {
        const bool branch_taken_0x15409c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15409c) {
            ctx->pc = 0x1540C0u;
            goto label_1540c0;
        }
    }
    ctx->pc = 0x1540A4u;
    // 0x1540a4: 0x3c0244c0  lui         $v0, 0x44C0
    ctx->pc = 0x1540a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17600 << 16));
    // 0x1540a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1540a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1540ac: 0x0  nop
    ctx->pc = 0x1540acu;
    // NOP
    // 0x1540b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1540b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1540b4: 0x45010022  bc1t        . + 4 + (0x22 << 2)
    ctx->pc = 0x1540B4u;
    {
        const bool branch_taken_0x1540b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1540b4) {
            ctx->pc = 0x154140u;
            goto label_154140;
        }
    }
    ctx->pc = 0x1540BCu;
    // 0x1540bc: 0x0  nop
    ctx->pc = 0x1540bcu;
    // NOP
label_1540c0:
    // 0x1540c0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1540c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1540c4: 0x8442db2c  lh          $v0, -0x24D4($v0)
    ctx->pc = 0x1540c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957868)));
    // 0x1540c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1540c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1540cc: 0x0  nop
    ctx->pc = 0x1540ccu;
    // NOP
    // 0x1540d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1540d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1540d4: 0xc067c8c  jal         func_19F230
    ctx->pc = 0x1540D4u;
    SET_GPR_U32(ctx, 31, 0x1540DCu);
    ctx->pc = 0x1540D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1540D4u;
    // 0x1540d8: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F230u, 0x1540D4u, 0x1540DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1540DCu;
label_1540dc:
    // 0x1540dc: 0x3c0244c0  lui         $v0, 0x44C0
    ctx->pc = 0x1540dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17600 << 16));
    // 0x1540e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1540e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1540e4: 0x0  nop
    ctx->pc = 0x1540e4u;
    // NOP
    // 0x1540e8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1540e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1540ec: 0xc067c8c  jal         func_19F230
    ctx->pc = 0x1540ECu;
    SET_GPR_U32(ctx, 31, 0x1540F4u);
    ctx->pc = 0x1540F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1540ECu;
    // 0x1540f0: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F230u, 0x1540ECu, 0x1540F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1540F4u;
label_1540f4:
    // 0x1540f4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1540f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1540f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1540f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1540fc: 0x0  nop
    ctx->pc = 0x1540fcu;
    // NOP
    // 0x154100: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x154100u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x154104: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x154104u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x154108: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x154108u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x15410c: 0x0  nop
    ctx->pc = 0x15410cu;
    // NOP
    // 0x154110: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x154110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x154114: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x154114u;
    {
        const bool branch_taken_0x154114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154114) {
            ctx->pc = 0x154130u;
            goto label_154130;
        }
    }
    ctx->pc = 0x15411Cu;
    // 0x15411c: 0x3c024026  lui         $v0, 0x4026
    ctx->pc = 0x15411cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16422 << 16));
    // 0x154120: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x154120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x154124: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x154124u;
    {
        const bool branch_taken_0x154124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154124u;
        // 0x154128: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154124) {
            ctx->pc = 0x154140u;
            goto label_154140;
        }
    }
    ctx->pc = 0x15412Cu;
    // 0x15412c: 0x0  nop
    ctx->pc = 0x15412cu;
    // NOP
label_154130:
    // 0x154130: 0x3c02413c  lui         $v0, 0x413C
    ctx->pc = 0x154130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16700 << 16));
    // 0x154134: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x154134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x154138: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x154138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x15413c: 0x0  nop
    ctx->pc = 0x15413cu;
    // NOP
label_154140:
    // 0x154140: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x154140u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x154144: 0x2a420064  slti        $v0, $s2, 0x64
    ctx->pc = 0x154144u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x154148: 0x1440ff81  bnez        $v0, . + 4 + (-0x7F << 2)
    ctx->pc = 0x154148u;
    {
        const bool branch_taken_0x154148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154148u;
        // 0x15414c: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154148) {
            ctx->pc = 0x153F50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_153f50;
        }
    }
    ctx->pc = 0x154150u;
    // 0x154150: 0x3c024026  lui         $v0, 0x4026
    ctx->pc = 0x154150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16422 << 16));
    // 0x154154: 0x34436666  ori         $v1, $v0, 0x6666
    ctx->pc = 0x154154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x154158: 0x3c02413c  lui         $v0, 0x413C
    ctx->pc = 0x154158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16700 << 16));
    // 0x15415c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x15415cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x154160: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x154160u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x154164: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x154164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x154168: 0xc0c77e4  jal         func_31DF90
    ctx->pc = 0x154168u;
    SET_GPR_U32(ctx, 31, 0x154170u);
    ctx->pc = 0x15416Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154168u;
    // 0x15416c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DF90u, 0x154168u, 0x154170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154170u;
label_154170:
    // 0x154170: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x154170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x154174: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x154174u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x154178: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x154178u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15417c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15417cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154180: 0x3e00008  jr          $ra
    ctx->pc = 0x154180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154180u;
        // 0x154184: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154188u;
    // 0x154188: 0x0  nop
    ctx->pc = 0x154188u;
    // NOP
    // 0x15418c: 0x0  nop
    ctx->pc = 0x15418cu;
    // NOP
    // 0x154190: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x154190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x154194: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x154194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x154198: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x154198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15419c: 0x9463f348  lhu         $v1, -0xCB8($v1)
    ctx->pc = 0x15419cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294964040)));
    // 0x1541a0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1541a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1541a4: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1541A4u;
    {
        const bool branch_taken_0x1541a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1541a4) {
            ctx->pc = 0x1541A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1541A4u;
            // 0x1541a8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1541B8u;
            goto label_1541b8;
        }
    }
    ctx->pc = 0x1541ACu;
    // 0x1541ac: 0xc0c353c  jal         func_30D4F0
    ctx->pc = 0x1541ACu;
    SET_GPR_U32(ctx, 31, 0x1541B4u);
    ctx->pc = 0x30D4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D4F0u, 0x1541ACu, 0x1541B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1541B4u;
label_1541b4:
    // 0x1541b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1541b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1541b8:
    // 0x1541b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1541B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1541BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1541B8u;
        // 0x1541bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1541B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1541C0u;
}
