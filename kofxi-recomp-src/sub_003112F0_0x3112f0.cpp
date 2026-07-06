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

// Function: sub_003112F0
// Address: 0x3112f0 - 0x3114d0
void sub_003112F0_0x3112f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003112F0_0x3112f0");
#endif

    switch (ctx->pc) {
        case 0x311334u: goto label_311334;
        case 0x31133cu: goto label_31133c;
        case 0x311360u: goto label_311360;
        case 0x311390u: goto label_311390;
        case 0x3113b8u: goto label_3113b8;
        case 0x3113c4u: goto label_3113c4;
        case 0x3113ccu: goto label_3113cc;
        case 0x31142cu: goto label_31142c;
        case 0x311470u: goto label_311470;
        case 0x31148cu: goto label_31148c;
        case 0x3114b8u: goto label_3114b8;
        default: break;
    }

    ctx->pc = 0x3112f0u;

    // 0x3112f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3112f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3112f4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3112f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3112f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3112f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3112fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3112fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x311300: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x311300u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x311304: 0x9064db10  lbu         $a0, -0x24F0($v1)
    ctx->pc = 0x311304u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957840)));
    // 0x311308: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x311308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31130c: 0x30860003  andi        $a2, $a0, 0x3
    ctx->pc = 0x31130cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x311310: 0x50c3006a  beql        $a2, $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x311310u;
    {
        const bool branch_taken_0x311310 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x311310) {
            ctx->pc = 0x311314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311310u;
            // 0x311314: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3114BCu;
            goto label_3114bc;
        }
    }
    ctx->pc = 0x311318u;
    // 0x311318: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x311318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x31131c: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x31131cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x311320: 0x90659780  lbu         $a1, -0x6880($v1)
    ctx->pc = 0x311320u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x311324: 0x54a40010  bnel        $a1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x311324u;
    {
        const bool branch_taken_0x311324 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x311324) {
            ctx->pc = 0x311328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311324u;
            // 0x311328: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311368u;
            goto label_311368;
        }
    }
    ctx->pc = 0x31132Cu;
    // 0x31132c: 0xc066e00  jal         func_19B800
    ctx->pc = 0x31132Cu;
    SET_GPR_U32(ctx, 31, 0x311334u);
    ctx->pc = 0x311330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31132Cu;
    // 0x311330: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B800u, 0x31132Cu, 0x311334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311334u;
label_311334:
    // 0x311334: 0xc0d0b94  jal         func_342E50
    ctx->pc = 0x311334u;
    SET_GPR_U32(ctx, 31, 0x31133Cu);
    ctx->pc = 0x342E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342E50u, 0x311334u, 0x31133Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31133Cu;
label_31133c:
    // 0x31133c: 0x24490001  addiu       $t1, $v0, 0x1
    ctx->pc = 0x31133cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x311340: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x311340u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x311344: 0x3c02402f  lui         $v0, 0x402F
    ctx->pc = 0x311344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16431 << 16));
    // 0x311348: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x311348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x31134c: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x31134cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x311350: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x311350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x311354: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x311354u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x311358: 0xc066e30  jal         func_19B8C0
    ctx->pc = 0x311358u;
    SET_GPR_U32(ctx, 31, 0x311360u);
    ctx->pc = 0x31135Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311358u;
    // 0x31135c: 0x25083730  addiu       $t0, $t0, 0x3730 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 14128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B8C0u, 0x311358u, 0x311360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311360u;
label_311360:
    // 0x311360: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x311360u;
    {
        const bool branch_taken_0x311360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x311360) {
            ctx->pc = 0x3114B8u;
            goto label_3114b8;
        }
    }
    ctx->pc = 0x311368u;
label_311368:
    // 0x311368: 0x10a30053  beq         $a1, $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x311368u;
    {
        const bool branch_taken_0x311368 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x311368) {
            ctx->pc = 0x3114B8u;
            goto label_3114b8;
        }
    }
    ctx->pc = 0x311370u;
    // 0x311370: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x311370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x311374: 0x10a30050  beq         $a1, $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x311374u;
    {
        const bool branch_taken_0x311374 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x311374) {
            ctx->pc = 0x3114B8u;
            goto label_3114b8;
        }
    }
    ctx->pc = 0x31137Cu;
    // 0x31137c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x31137cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x311380: 0x54a3003d  bnel        $a1, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x311380u;
    {
        const bool branch_taken_0x311380 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x311380) {
            ctx->pc = 0x311384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311380u;
            // 0x311384: 0x24c3ffff  addiu       $v1, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311478u;
            goto label_311478;
        }
    }
    ctx->pc = 0x311388u;
    // 0x311388: 0xc066e00  jal         func_19B800
    ctx->pc = 0x311388u;
    SET_GPR_U32(ctx, 31, 0x311390u);
    ctx->pc = 0x31138Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311388u;
    // 0x31138c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B800u, 0x311388u, 0x311390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311390u;
label_311390:
    // 0x311390: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x311390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x311394: 0x9063bed8  lbu         $v1, -0x4128($v1)
    ctx->pc = 0x311394u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950616)));
    // 0x311398: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x311398u;
    {
        const bool branch_taken_0x311398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x311398) {
            ctx->pc = 0x311434u;
            goto label_311434;
        }
    }
    ctx->pc = 0x3113A0u;
    // 0x3113a0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3113a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3113a4: 0x3c034059  lui         $v1, 0x4059
    ctx->pc = 0x3113a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16473 << 16));
    // 0x3113a8: 0xc454bed4  lwc1        $f20, -0x412C($v0)
    ctx->pc = 0x3113a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294950612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3113ac: 0x3803c  dsll32      $s0, $v1, 0
    ctx->pc = 0x3113acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3113b0: 0xc048930  jal         func_1224C0
    ctx->pc = 0x3113B0u;
    SET_GPR_U32(ctx, 31, 0x3113B8u);
    ctx->pc = 0x3113B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3113B0u;
    // 0x3113b4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1224C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1224C0u, 0x3113B0u, 0x3113B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3113B8u;
label_3113b8:
    // 0x3113b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3113b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3113bc: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x3113BCu;
    SET_GPR_U32(ctx, 31, 0x3113C4u);
    ctx->pc = 0x3113C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3113BCu;
    // 0x3113c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1229D8u, 0x3113BCu, 0x3113C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3113C4u;
label_3113c4:
    // 0x3113c4: 0xc048bde  jal         func_122F78
    ctx->pc = 0x3113C4u;
    SET_GPR_U32(ctx, 31, 0x3113CCu);
    ctx->pc = 0x3113C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3113C4u;
    // 0x3113c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122F78u, 0x3113C4u, 0x3113CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3113CCu;
label_3113cc:
    // 0x3113cc: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x3113ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3113d0: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x3113d0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x3113d4: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x3113d4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3113d8: 0x2409003c  addiu       $t1, $zero, 0x3C
    ctx->pc = 0x3113d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x3113dc: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3113dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3113e0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x3113e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3113e4: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x3113e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3113e8: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x3113e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3113ec: 0x25083740  addiu       $t0, $t0, 0x3740
    ctx->pc = 0x3113ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 14144));
    // 0x3113f0: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x3113f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x3113f4: 0x3c02402f  lui         $v0, 0x402F
    ctx->pc = 0x3113f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16431 << 16));
    // 0x3113f8: 0xa1fc2  srl         $v1, $t2, 31
    ctx->pc = 0x3113f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
    // 0x3113fc: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x3113fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x311400: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x311400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x311404: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x311404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x311408: 0x5810  mfhi        $t3
    ctx->pc = 0x311408u;
    SET_GPR_U64(ctx, 11, ctx->hi);
    // 0x31140c: 0x4a0018  mult        $zero, $v0, $t2
    ctx->pc = 0x31140cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x311410: 0x1010  mfhi        $v0
    ctx->pc = 0x311410u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x311414: 0x149001a  div         $zero, $t2, $t1
    ctx->pc = 0x311414u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 10);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x311418: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x311418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x31141c: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x31141cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x311420: 0x5010  mfhi        $t2
    ctx->pc = 0x311420u;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x311424: 0xc066e30  jal         func_19B8C0
    ctx->pc = 0x311424u;
    SET_GPR_U32(ctx, 31, 0x31142Cu);
    ctx->pc = 0x311428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311424u;
    // 0x311428: 0x434821  addu        $t1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B8C0u, 0x311424u, 0x31142Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31142Cu;
label_31142c:
    // 0x31142c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x31142Cu;
    {
        const bool branch_taken_0x31142c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31142c) {
            ctx->pc = 0x3114B8u;
            goto label_3114b8;
        }
    }
    ctx->pc = 0x311434u;
label_311434:
    // 0x311434: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x311434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x311438: 0x9063bed9  lbu         $v1, -0x4127($v1)
    ctx->pc = 0x311438u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950617)));
    // 0x31143c: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x31143Cu;
    {
        const bool branch_taken_0x31143c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31143c) {
            ctx->pc = 0x3114B8u;
            goto label_3114b8;
        }
    }
    ctx->pc = 0x311444u;
    // 0x311444: 0x3c02402f  lui         $v0, 0x402F
    ctx->pc = 0x311444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16431 << 16));
    // 0x311448: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x311448u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x31144c: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x31144cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x311450: 0x306a00ff  andi        $t2, $v1, 0xFF
    ctx->pc = 0x311450u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x311454: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x311454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x311458: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x311458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x31145c: 0x8c49bef4  lw          $t1, -0x410C($v0)
    ctx->pc = 0x31145cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950644)));
    // 0x311460: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x311460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x311464: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x311464u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x311468: 0xc066e30  jal         func_19B8C0
    ctx->pc = 0x311468u;
    SET_GPR_U32(ctx, 31, 0x311470u);
    ctx->pc = 0x31146Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311468u;
    // 0x31146c: 0x25083750  addiu       $t0, $t0, 0x3750 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 14160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B8C0u, 0x311468u, 0x311470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311470u;
label_311470:
    // 0x311470: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x311470u;
    {
        const bool branch_taken_0x311470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x311470) {
            ctx->pc = 0x3114B8u;
            goto label_3114b8;
        }
    }
    ctx->pc = 0x311478u;
label_311478:
    // 0x311478: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x311478u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x31147c: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x31147Cu;
    {
        const bool branch_taken_0x31147c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31147c) {
            ctx->pc = 0x3114B8u;
            goto label_3114b8;
        }
    }
    ctx->pc = 0x311484u;
    // 0x311484: 0xc066e00  jal         func_19B800
    ctx->pc = 0x311484u;
    SET_GPR_U32(ctx, 31, 0x31148Cu);
    ctx->pc = 0x311488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311484u;
    // 0x311488: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B800u, 0x311484u, 0x31148Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31148Cu;
label_31148c:
    // 0x31148c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x31148cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x311490: 0x3c03402f  lui         $v1, 0x402F
    ctx->pc = 0x311490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16431 << 16));
    // 0x311494: 0x8042d9f8  lb          $v0, -0x2608($v0)
    ctx->pc = 0x311494u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957560)));
    // 0x311498: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x311498u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x31149c: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x31149cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3114a0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x3114a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3114a4: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x3114a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3114a8: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x3114a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3114ac: 0x25083760  addiu       $t0, $t0, 0x3760
    ctx->pc = 0x3114acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 14176));
    // 0x3114b0: 0xc066e30  jal         func_19B8C0
    ctx->pc = 0x3114B0u;
    SET_GPR_U32(ctx, 31, 0x3114B8u);
    ctx->pc = 0x3114B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3114B0u;
    // 0x3114b4: 0x24490001  addiu       $t1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B8C0u, 0x3114B0u, 0x3114B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3114B8u;
label_3114b8:
    // 0x3114b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3114b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3114bc:
    // 0x3114bc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3114bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3114c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3114c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3114c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3114C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3114C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3114C4u;
        // 0x3114c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3114C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3114CCu;
    // 0x3114cc: 0x0  nop
    ctx->pc = 0x3114ccu;
    // NOP
    if (ctx->pc == 0x3114ccu) { ctx->pc = 0x3114d0u; }
}
