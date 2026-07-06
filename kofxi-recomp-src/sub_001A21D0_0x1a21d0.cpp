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

// Function: sub_001A21D0
// Address: 0x1a21d0 - 0x1a2570
void sub_001A21D0_0x1a21d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A21D0_0x1a21d0");
#endif

    switch (ctx->pc) {
        case 0x1a2204u: goto label_1a2204;
        case 0x1a2264u: goto label_1a2264;
        case 0x1a2280u: goto label_1a2280;
        case 0x1a22e4u: goto label_1a22e4;
        case 0x1a2304u: goto label_1a2304;
        case 0x1a2354u: goto label_1a2354;
        case 0x1a2370u: goto label_1a2370;
        case 0x1a23c4u: goto label_1a23c4;
        case 0x1a23e8u: goto label_1a23e8;
        case 0x1a2424u: goto label_1a2424;
        case 0x1a2444u: goto label_1a2444;
        case 0x1a2484u: goto label_1a2484;
        case 0x1a2528u: goto label_1a2528;
        case 0x1a2534u: goto label_1a2534;
        default: break;
    }

    ctx->pc = 0x1a21d0u;

    // 0x1a21d0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1a21d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1a21d4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1a21d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1a21d8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1a21d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1a21dc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1a21dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1a21e0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1a21e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1a21e4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1a21e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1a21e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1a21e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1a21ec: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1a21ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a21f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a21f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a21f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a21f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a21f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a21f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a21fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a21fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a2200: 0x32b400ff  andi        $s4, $s5, 0xFF
    ctx->pc = 0x1a2200u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_1a2204:
    // 0x1a2204: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a2204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a2208: 0x2463ea38  addiu       $v1, $v1, -0x15C8
    ctx->pc = 0x1a2208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961720));
    // 0x1a220c: 0x142080  sll         $a0, $s4, 2
    ctx->pc = 0x1a220cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1a2210: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a2210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a2214: 0x64b821  addu        $s7, $v1, $a0
    ctx->pc = 0x1a2214u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a2218: 0x2442ea10  addiu       $v0, $v0, -0x15F0
    ctx->pc = 0x1a2218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961680));
    // 0x1a221c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a221cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a2220: 0x449821  addu        $s3, $v0, $a0
    ctx->pc = 0x1a2220u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a2224: 0x2463ea18  addiu       $v1, $v1, -0x15E8
    ctx->pc = 0x1a2224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961688));
    // 0x1a2228: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a2228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a222c: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x1a222cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a2230: 0x2442ea08  addiu       $v0, $v0, -0x15F8
    ctx->pc = 0x1a2230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961672));
    // 0x1a2234: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a2234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a2238: 0x448821  addu        $s1, $v0, $a0
    ctx->pc = 0x1a2238u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a223c: 0x2463ea00  addiu       $v1, $v1, -0x1600
    ctx->pc = 0x1a223cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961664));
    // 0x1a2240: 0x941021  addu        $v0, $a0, $s4
    ctx->pc = 0x1a2240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x1a2244: 0x64b021  addu        $s6, $v1, $a0
    ctx->pc = 0x1a2244u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a2248: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1a2248u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1a224c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a224cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2250: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a2250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a2254: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a2254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2258: 0x2442e8c0  addiu       $v0, $v0, -0x1740
    ctx->pc = 0x1a2258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961344));
    // 0x1a225c: 0xc0474fc  jal         func_11D3F0
    ctx->pc = 0x1A225Cu;
    SET_GPR_U32(ctx, 31, 0x1A2264u);
    ctx->pc = 0x1A2260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A225Cu;
    // 0x1a2260: 0x43f021  addu        $fp, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D3F0u, 0x1A225Cu, 0x1A2264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2264u;
label_1a2264:
    // 0x1a2264: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a2264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2268: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A2268u;
    {
        const bool branch_taken_0x1a2268 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2268u;
        // 0x1a226c: 0xaef00000  sw          $s0, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2268) {
            ctx->pc = 0x1A2280u;
            goto label_1a2280;
        }
    }
    ctx->pc = 0x1A2270u;
    // 0x1a2270: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a2270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2274: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x1a2274u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2278: 0xc068c4c  jal         func_1A3130
    ctx->pc = 0x1A2278u;
    SET_GPR_U32(ctx, 31, 0x1A2280u);
    ctx->pc = 0x1A227Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2278u;
    // 0x1a227c: 0xa2400000  sb          $zero, 0x0($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3130u, 0x1A2278u, 0x1A2280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2280u;
label_1a2280:
    // 0x1a2280: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x1a2280u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1a2284: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a2284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a2288: 0x10820075  beq         $a0, $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x1A2288u;
    {
        const bool branch_taken_0x1a2288 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a2288) {
            ctx->pc = 0x1A2460u;
            goto label_1a2460;
        }
    }
    ctx->pc = 0x1A2290u;
    // 0x1a2290: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a2290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a2294: 0x1083005a  beq         $a0, $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x1A2294u;
    {
        const bool branch_taken_0x1a2294 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a2294) {
            ctx->pc = 0x1A2400u;
            goto label_1a2400;
        }
    }
    ctx->pc = 0x1A229Cu;
    // 0x1a229c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a229cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a22a0: 0x1082003d  beq         $a0, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x1A22A0u;
    {
        const bool branch_taken_0x1a22a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a22a0) {
            ctx->pc = 0x1A2398u;
            goto label_1a2398;
        }
    }
    ctx->pc = 0x1A22A8u;
    // 0x1a22a8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A22A8u;
    {
        const bool branch_taken_0x1a22a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a22a8) {
            ctx->pc = 0x1A22B8u;
            goto label_1a22b8;
        }
    }
    ctx->pc = 0x1A22B0u;
    // 0x1a22b0: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x1A22B0u;
    {
        const bool branch_taken_0x1a22b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a22b0) {
            ctx->pc = 0x1A2460u;
            goto label_1a2460;
        }
    }
    ctx->pc = 0x1A22B8u;
label_1a22b8:
    // 0x1a22b8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1a22b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a22bc: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A22BCu;
    {
        const bool branch_taken_0x1a22bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a22bc) {
            ctx->pc = 0x1A22D0u;
            goto label_1a22d0;
        }
    }
    ctx->pc = 0x1A22C4u;
    // 0x1a22c4: 0x16030076  bne         $s0, $v1, . + 4 + (0x76 << 2)
    ctx->pc = 0x1A22C4u;
    {
        const bool branch_taken_0x1a22c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a22c4) {
            ctx->pc = 0x1A24A0u;
            goto label_1a24a0;
        }
    }
    ctx->pc = 0x1A22CCu;
    // 0x1a22cc: 0x0  nop
    ctx->pc = 0x1a22ccu;
    // NOP
label_1a22d0:
    // 0x1a22d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a22d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a22d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a22d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a22d8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a22d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a22dc: 0xc047606  jal         func_11D818
    ctx->pc = 0x1A22DCu;
    SET_GPR_U32(ctx, 31, 0x1A22E4u);
    ctx->pc = 0x1A22E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A22DCu;
    // 0x1a22e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D818u, 0x1A22DCu, 0x1A22E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A22E4u;
label_1a22e4:
    // 0x1a22e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a22e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a22e8: 0x1200006d  beqz        $s0, . + 4 + (0x6D << 2)
    ctx->pc = 0x1A22E8u;
    {
        const bool branch_taken_0x1a22e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a22e8) {
            ctx->pc = 0x1A24A0u;
            goto label_1a24a0;
        }
    }
    ctx->pc = 0x1A22F0u;
    // 0x1a22f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a22f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a22f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a22f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a22f8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a22f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a22fc: 0xc047606  jal         func_11D818
    ctx->pc = 0x1A22FCu;
    SET_GPR_U32(ctx, 31, 0x1A2304u);
    ctx->pc = 0x1A2300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A22FCu;
    // 0x1a2300: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D818u, 0x1A22FCu, 0x1A2304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2304u;
label_1a2304:
    // 0x1a2304: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A2304u;
    {
        const bool branch_taken_0x1a2304 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a2304) {
            ctx->pc = 0x1A2310u;
            goto label_1a2310;
        }
    }
    ctx->pc = 0x1A230Cu;
    // 0x1a230c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a230cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a2310:
    // 0x1a2310: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1a2310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a2314: 0xa2300000  sb          $s0, 0x0($s1)
    ctx->pc = 0x1a2314u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x1a2318: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A2318u;
    {
        const bool branch_taken_0x1a2318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A231Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2318u;
        // 0x1a231c: 0xa2c00000  sb          $zero, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2318) {
            ctx->pc = 0x1A2340u;
            goto label_1a2340;
        }
    }
    ctx->pc = 0x1A2320u;
    // 0x1a2320: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1a2320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a2324: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A2324u;
    {
        const bool branch_taken_0x1a2324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a2324) {
            ctx->pc = 0x1A2340u;
            goto label_1a2340;
        }
    }
    ctx->pc = 0x1A232Cu;
    // 0x1a232c: 0x0  nop
    ctx->pc = 0x1a232cu;
    // NOP
    // 0x1a2330: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a2330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a2334: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x1A2334u;
    {
        const bool branch_taken_0x1a2334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2334u;
        // 0x1a2338: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2334) {
            ctx->pc = 0x1A24A0u;
            goto label_1a24a0;
        }
    }
    ctx->pc = 0x1A233Cu;
    // 0x1a233c: 0x0  nop
    ctx->pc = 0x1a233cu;
    // NOP
label_1a2340:
    // 0x1a2340: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a2340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2344: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a2344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2348: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1a2348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a234c: 0xc047606  jal         func_11D818
    ctx->pc = 0x1A234Cu;
    SET_GPR_U32(ctx, 31, 0x1A2354u);
    ctx->pc = 0x1A2350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A234Cu;
    // 0x1a2350: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D818u, 0x1A234Cu, 0x1A2354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2354u;
label_1a2354:
    // 0x1a2354: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A2354u;
    {
        const bool branch_taken_0x1a2354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2354) {
            ctx->pc = 0x1A2388u;
            goto label_1a2388;
        }
    }
    ctx->pc = 0x1A235Cu;
    // 0x1a235c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a235cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2360: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a2360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2364: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a2364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2368: 0xc047654  jal         func_11D950
    ctx->pc = 0x1A2368u;
    SET_GPR_U32(ctx, 31, 0x1A2370u);
    ctx->pc = 0x1A236Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2368u;
    // 0x1a236c: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D950u, 0x1A2368u, 0x1A2370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2370u;
label_1a2370:
    // 0x1a2370: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a2370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2374: 0x1443004a  bne         $v0, $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x1A2374u;
    {
        const bool branch_taken_0x1a2374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a2374) {
            ctx->pc = 0x1A24A0u;
            goto label_1a24a0;
        }
    }
    ctx->pc = 0x1A237Cu;
    // 0x1a237c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1a237cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a2380: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x1a2380u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a2384: 0x0  nop
    ctx->pc = 0x1a2384u;
    // NOP
label_1a2388:
    // 0x1a2388: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a2388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a238c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x1A238Cu;
    {
        const bool branch_taken_0x1a238c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A238Cu;
        // 0x1a2390: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a238c) {
            ctx->pc = 0x1A24A0u;
            goto label_1a24a0;
        }
    }
    ctx->pc = 0x1A2394u;
    // 0x1a2394: 0x0  nop
    ctx->pc = 0x1a2394u;
    // NOP
label_1a2398:
    // 0x1a2398: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1a2398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a239c: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A239Cu;
    {
        const bool branch_taken_0x1a239c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a239c) {
            ctx->pc = 0x1A23B0u;
            goto label_1a23b0;
        }
    }
    ctx->pc = 0x1A23A4u;
    // 0x1a23a4: 0x1603003e  bne         $s0, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x1A23A4u;
    {
        const bool branch_taken_0x1a23a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a23a4) {
            ctx->pc = 0x1A24A0u;
            goto label_1a24a0;
        }
    }
    ctx->pc = 0x1A23ACu;
    // 0x1a23ac: 0x0  nop
    ctx->pc = 0x1a23acu;
    // NOP
label_1a23b0:
    // 0x1a23b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a23b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a23b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a23b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a23b8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1a23b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a23bc: 0xc04757a  jal         func_11D5E8
    ctx->pc = 0x1A23BCu;
    SET_GPR_U32(ctx, 31, 0x1A23C4u);
    ctx->pc = 0x1A23C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A23BCu;
    // 0x1a23c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D5E8u, 0x1A23BCu, 0x1A23C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A23C4u;
label_1a23c4:
    // 0x1a23c4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A23C4u;
    {
        const bool branch_taken_0x1a23c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a23c4) {
            ctx->pc = 0x1A23D8u;
            goto label_1a23d8;
        }
    }
    ctx->pc = 0x1A23CCu;
    // 0x1a23cc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a23ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a23d0: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x1a23d0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a23d4: 0x0  nop
    ctx->pc = 0x1a23d4u;
    // NOP
label_1a23d8:
    // 0x1a23d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a23d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a23dc: 0x27c60005  addiu       $a2, $fp, 0x5
    ctx->pc = 0x1a23dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 5));
    // 0x1a23e0: 0xc0476b4  jal         func_11DAD0
    ctx->pc = 0x1A23E0u;
    SET_GPR_U32(ctx, 31, 0x1A23E8u);
    ctx->pc = 0x1A23E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A23E0u;
    // 0x1a23e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DAD0u, 0x1A23E0u, 0x1A23E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A23E8u;
label_1a23e8:
    // 0x1a23e8: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1A23E8u;
    {
        const bool branch_taken_0x1a23e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a23e8) {
            ctx->pc = 0x1A24A0u;
            goto label_1a24a0;
        }
    }
    ctx->pc = 0x1A23F0u;
    // 0x1a23f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a23f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a23f4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1A23F4u;
    {
        const bool branch_taken_0x1a23f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A23F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A23F4u;
        // 0x1a23f8: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a23f4) {
            ctx->pc = 0x1A24A0u;
            goto label_1a24a0;
        }
    }
    ctx->pc = 0x1A23FCu;
    // 0x1a23fc: 0x0  nop
    ctx->pc = 0x1a23fcu;
    // NOP
label_1a2400:
    // 0x1a2400: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1a2400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a2404: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2404u;
    {
        const bool branch_taken_0x1a2404 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a2404) {
            ctx->pc = 0x1A2418u;
            goto label_1a2418;
        }
    }
    ctx->pc = 0x1A240Cu;
    // 0x1a240c: 0x16030024  bne         $s0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1A240Cu;
    {
        const bool branch_taken_0x1a240c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a240c) {
            ctx->pc = 0x1A24A0u;
            goto label_1a24a0;
        }
    }
    ctx->pc = 0x1A2414u;
    // 0x1a2414: 0x0  nop
    ctx->pc = 0x1a2414u;
    // NOP
label_1a2418:
    // 0x1a2418: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a2418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a241c: 0xc047556  jal         func_11D558
    ctx->pc = 0x1A241Cu;
    SET_GPR_U32(ctx, 31, 0x1A2424u);
    ctx->pc = 0x1A2420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A241Cu;
    // 0x1a2420: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D558u, 0x1A241Cu, 0x1A2424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2424u;
label_1a2424:
    // 0x1a2424: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a2424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2428: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A2428u;
    {
        const bool branch_taken_0x1a2428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a2428) {
            ctx->pc = 0x1A2438u;
            goto label_1a2438;
        }
    }
    ctx->pc = 0x1A2430u;
    // 0x1a2430: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x1a2430u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a2434: 0x0  nop
    ctx->pc = 0x1a2434u;
    // NOP
label_1a2438:
    // 0x1a2438: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a2438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a243c: 0xc047556  jal         func_11D558
    ctx->pc = 0x1A243Cu;
    SET_GPR_U32(ctx, 31, 0x1A2444u);
    ctx->pc = 0x1A2440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A243Cu;
    // 0x1a2440: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D558u, 0x1A243Cu, 0x1A2444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2444u;
label_1a2444:
    // 0x1a2444: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1A2444u;
    {
        const bool branch_taken_0x1a2444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2444) {
            ctx->pc = 0x1A24A0u;
            goto label_1a24a0;
        }
    }
    ctx->pc = 0x1A244Cu;
    // 0x1a244c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a244cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a2450: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a2450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2454: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x1a2454u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a2458: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1A2458u;
    {
        const bool branch_taken_0x1a2458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2458u;
        // 0x1a245c: 0xa2c20000  sb          $v0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2458) {
            ctx->pc = 0x1A24A0u;
            goto label_1a24a0;
        }
    }
    ctx->pc = 0x1A2460u;
label_1a2460:
    // 0x1a2460: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1a2460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a2464: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2464u;
    {
        const bool branch_taken_0x1a2464 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a2464) {
            ctx->pc = 0x1A2478u;
            goto label_1a2478;
        }
    }
    ctx->pc = 0x1A246Cu;
    // 0x1a246c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a246cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a2470: 0x1602000b  bne         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A2470u;
    {
        const bool branch_taken_0x1a2470 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a2470) {
            ctx->pc = 0x1A24A0u;
            goto label_1a24a0;
        }
    }
    ctx->pc = 0x1A2478u;
label_1a2478:
    // 0x1a2478: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a2478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a247c: 0xc06895c  jal         func_1A2570
    ctx->pc = 0x1A247Cu;
    SET_GPR_U32(ctx, 31, 0x1A2484u);
    ctx->pc = 0x1A2480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A247Cu;
    // 0x1a2480: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2570u, 0x1A247Cu, 0x1A2484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2484u;
label_1a2484:
    // 0x1a2484: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2484u;
    {
        const bool branch_taken_0x1a2484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2484) {
            ctx->pc = 0x1A2498u;
            goto label_1a2498;
        }
    }
    ctx->pc = 0x1A248Cu;
    // 0x1a248c: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x1a248cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2490: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A2490u;
    {
        const bool branch_taken_0x1a2490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2490u;
        // 0x1a2494: 0xa2400000  sb          $zero, 0x0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2490) {
            ctx->pc = 0x1A24A0u;
            goto label_1a24a0;
        }
    }
    ctx->pc = 0x1A2498u;
label_1a2498:
    // 0x1a2498: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a2498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a249c: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x1a249cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
label_1a24a0:
    // 0x1a24a0: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x1a24a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1a24a4: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x1a24a4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a24a8: 0x2aa20002  slti        $v0, $s5, 0x2
    ctx->pc = 0x1a24a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a24ac: 0x5440ff55  bnel        $v0, $zero, . + 4 + (-0xAB << 2)
    ctx->pc = 0x1A24ACu;
    {
        const bool branch_taken_0x1a24ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a24ac) {
            ctx->pc = 0x1A24B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A24ACu;
            // 0x1a24b0: 0x32b400ff  andi        $s4, $s5, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2204u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a2204;
        }
    }
    ctx->pc = 0x1A24B4u;
    // 0x1a24b4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a24b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a24b8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a24b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a24bc: 0x9042ea10  lbu         $v0, -0x15F0($v0)
    ctx->pc = 0x1a24bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961680)));
    // 0x1a24c0: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A24C0u;
    {
        const bool branch_taken_0x1a24c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a24c0) {
            ctx->pc = 0x1A24E8u;
            goto label_1a24e8;
        }
    }
    ctx->pc = 0x1A24C8u;
    // 0x1a24c8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a24c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a24cc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a24ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a24d0: 0xa460ea20  sh          $zero, -0x15E0($v1)
    ctx->pc = 0x1a24d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294961696), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a24d4: 0xa440ea22  sh          $zero, -0x15DE($v0)
    ctx->pc = 0x1a24d4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294961698), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a24d8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a24d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a24dc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a24dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a24e0: 0xa460ea24  sh          $zero, -0x15DC($v1)
    ctx->pc = 0x1a24e0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294961700), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a24e4: 0xa440ea26  sh          $zero, -0x15DA($v0)
    ctx->pc = 0x1a24e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294961702), (uint16_t)GPR_U32(ctx, 0));
label_1a24e8:
    // 0x1a24e8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a24e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a24ec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a24ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a24f0: 0x9042ea14  lbu         $v0, -0x15EC($v0)
    ctx->pc = 0x1a24f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961684)));
    // 0x1a24f4: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A24F4u;
    {
        const bool branch_taken_0x1a24f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a24f4) {
            ctx->pc = 0x1A251Cu;
            goto label_1a251c;
        }
    }
    ctx->pc = 0x1A24FCu;
    // 0x1a24fc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a24fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a2500: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a2500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a2504: 0xa460ea2c  sh          $zero, -0x15D4($v1)
    ctx->pc = 0x1a2504u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294961708), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a2508: 0xa440ea2e  sh          $zero, -0x15D2($v0)
    ctx->pc = 0x1a2508u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294961710), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a250c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a250cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a2510: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a2510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a2514: 0xa460ea30  sh          $zero, -0x15D0($v1)
    ctx->pc = 0x1a2514u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294961712), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a2518: 0xa440ea32  sh          $zero, -0x15CE($v0)
    ctx->pc = 0x1a2518u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294961714), (uint16_t)GPR_U32(ctx, 0));
label_1a251c:
    // 0x1a251c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1a251cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1a2520: 0xc068bd4  jal         func_1A2F50
    ctx->pc = 0x1A2520u;
    SET_GPR_U32(ctx, 31, 0x1A2528u);
    ctx->pc = 0x1A2524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2520u;
    // 0x1a2524: 0x2484e8c0  addiu       $a0, $a0, -0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2F50u, 0x1A2520u, 0x1A2528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2528u;
label_1a2528:
    // 0x1a2528: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1a2528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1a252c: 0xc068bd4  jal         func_1A2F50
    ctx->pc = 0x1A252Cu;
    SET_GPR_U32(ctx, 31, 0x1A2534u);
    ctx->pc = 0x1A2530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A252Cu;
    // 0x1a2530: 0x2484e960  addiu       $a0, $a0, -0x16A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2F50u, 0x1A252Cu, 0x1A2534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2534u;
label_1a2534:
    // 0x1a2534: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1a2534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a2538: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1a2538u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a253c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1a253cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a2540: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1a2540u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a2544: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1a2544u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a2548: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a2548u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a254c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a254cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a2550: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a2550u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a2554: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a2554u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2558: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a2558u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a255c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A255Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A255Cu;
        // 0x1a2560: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A255Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2564u;
    // 0x1a2564: 0x0  nop
    ctx->pc = 0x1a2564u;
    // NOP
    // 0x1a2568: 0x0  nop
    ctx->pc = 0x1a2568u;
    // NOP
    // 0x1a256c: 0x0  nop
    ctx->pc = 0x1a256cu;
    // NOP
}
