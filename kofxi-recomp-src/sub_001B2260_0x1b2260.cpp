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

// Function: sub_001B2260
// Address: 0x1b2260 - 0x1b2350
void sub_001B2260_0x1b2260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2260_0x1b2260");
#endif

    switch (ctx->pc) {
        case 0x1b2260u: goto label_1b2260;
        case 0x1b2264u: goto label_1b2264;
        case 0x1b2268u: goto label_1b2268;
        case 0x1b226cu: goto label_1b226c;
        case 0x1b2270u: goto label_1b2270;
        case 0x1b2274u: goto label_1b2274;
        case 0x1b2278u: goto label_1b2278;
        case 0x1b227cu: goto label_1b227c;
        case 0x1b2280u: goto label_1b2280;
        case 0x1b2284u: goto label_1b2284;
        case 0x1b2288u: goto label_1b2288;
        case 0x1b228cu: goto label_1b228c;
        case 0x1b2290u: goto label_1b2290;
        case 0x1b2294u: goto label_1b2294;
        case 0x1b2298u: goto label_1b2298;
        case 0x1b229cu: goto label_1b229c;
        case 0x1b22a0u: goto label_1b22a0;
        case 0x1b22a4u: goto label_1b22a4;
        case 0x1b22a8u: goto label_1b22a8;
        case 0x1b22acu: goto label_1b22ac;
        case 0x1b22b0u: goto label_1b22b0;
        case 0x1b22b4u: goto label_1b22b4;
        case 0x1b22b8u: goto label_1b22b8;
        case 0x1b22bcu: goto label_1b22bc;
        case 0x1b22c0u: goto label_1b22c0;
        case 0x1b22c4u: goto label_1b22c4;
        case 0x1b22c8u: goto label_1b22c8;
        case 0x1b22ccu: goto label_1b22cc;
        case 0x1b22d0u: goto label_1b22d0;
        case 0x1b22d4u: goto label_1b22d4;
        case 0x1b22d8u: goto label_1b22d8;
        case 0x1b22dcu: goto label_1b22dc;
        case 0x1b22e0u: goto label_1b22e0;
        case 0x1b22e4u: goto label_1b22e4;
        case 0x1b22e8u: goto label_1b22e8;
        case 0x1b22ecu: goto label_1b22ec;
        case 0x1b22f0u: goto label_1b22f0;
        case 0x1b22f4u: goto label_1b22f4;
        case 0x1b22f8u: goto label_1b22f8;
        case 0x1b22fcu: goto label_1b22fc;
        case 0x1b2300u: goto label_1b2300;
        case 0x1b2304u: goto label_1b2304;
        case 0x1b2308u: goto label_1b2308;
        case 0x1b230cu: goto label_1b230c;
        case 0x1b2310u: goto label_1b2310;
        case 0x1b2314u: goto label_1b2314;
        case 0x1b2318u: goto label_1b2318;
        case 0x1b231cu: goto label_1b231c;
        case 0x1b2320u: goto label_1b2320;
        case 0x1b2324u: goto label_1b2324;
        case 0x1b2328u: goto label_1b2328;
        case 0x1b232cu: goto label_1b232c;
        case 0x1b2330u: goto label_1b2330;
        case 0x1b2334u: goto label_1b2334;
        case 0x1b2338u: goto label_1b2338;
        case 0x1b233cu: goto label_1b233c;
        case 0x1b2340u: goto label_1b2340;
        case 0x1b2344u: goto label_1b2344;
        case 0x1b2348u: goto label_1b2348;
        case 0x1b234cu: goto label_1b234c;
        default: break;
    }

    ctx->pc = 0x1b2260u;

label_1b2260:
    // 0x1b2260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b2260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1b2264:
    // 0x1b2264: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b2264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1b2268:
    // 0x1b2268: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b2268u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b226c:
    // 0x1b226c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b226cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1b2270:
    // 0x1b2270: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b2270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1b2274:
    // 0x1b2274: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_1b2278:
    if (ctx->pc == 0x1B2278u) {
        ctx->pc = 0x1B2278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2274u;
        // 0x1b2278: 0x8e110094  lw          $s1, 0x94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B227Cu;
        goto label_1b227c;
    }
    ctx->pc = 0x1B2274u;
    {
        const bool branch_taken_0x1b2274 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2274u;
        // 0x1b2278: 0x8e110094  lw          $s1, 0x94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2274) {
            ctx->pc = 0x1B2298u;
            goto label_1b2298;
        }
    }
    ctx->pc = 0x1B227Cu;
label_1b227c:
    // 0x1b227c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1b227cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_1b2280:
    // 0x1b2280: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2280u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b2284:
    // 0x1b2284: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b2284u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1b2288:
    // 0x1b2288: 0x24847c98  addiu       $a0, $a0, 0x7C98
    ctx->pc = 0x1b2288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31896));
label_1b228c:
    // 0x1b228c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b228cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b2290:
    // 0x1b2290: 0x806ba0a  j           func_1AE828
label_1b2294:
    if (ctx->pc == 0x1B2294u) {
        ctx->pc = 0x1B2294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2290u;
        // 0x1b2294: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2298u;
        goto label_1b2298;
    }
    ctx->pc = 0x1B2290u;
    ctx->pc = 0x1B2294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2290u;
    // 0x1b2294: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    sub_001AE828_0x1ae828(rdram, ctx, runtime); return;
    ctx->pc = 0x1B2298u;
label_1b2298:
    // 0x1b2298: 0xc06e46c  jal         func_1B91B0
label_1b229c:
    if (ctx->pc == 0x1B229Cu) {
        ctx->pc = 0x1B22A0u;
        goto label_1b22a0;
    }
    ctx->pc = 0x1B2298u;
    SET_GPR_U32(ctx, 31, 0x1B22A0u);
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1B2298u, 0x1B22A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B22A0u;
label_1b22a0:
    // 0x1b22a0: 0xc06b48e  jal         func_1AD238
label_1b22a4:
    if (ctx->pc == 0x1B22A4u) {
        ctx->pc = 0x1B22A8u;
        goto label_1b22a8;
    }
    ctx->pc = 0x1B22A0u;
    SET_GPR_U32(ctx, 31, 0x1B22A8u);
    ctx->pc = 0x1AD238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD238u, 0x1B22A0u, 0x1B22A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B22A8u;
label_1b22a8:
    // 0x1b22a8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b22a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b22ac:
    // 0x1b22ac: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1b22acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1b22b0:
    // 0x1b22b0: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x1b22b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_1b22b4:
    // 0x1b22b4: 0xc06e3c4  jal         func_1B8F10
label_1b22b8:
    if (ctx->pc == 0x1B22B8u) {
        ctx->pc = 0x1B22B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B22B4u;
        // 0x1b22b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B22BCu;
        goto label_1b22bc;
    }
    ctx->pc = 0x1B22B4u;
    SET_GPR_U32(ctx, 31, 0x1B22BCu);
    ctx->pc = 0x1B22B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B22B4u;
    // 0x1b22b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8F10u, 0x1B22B4u, 0x1B22BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B22BCu;
label_1b22bc:
    // 0x1b22bc: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1b22bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1b22c0:
    // 0x1b22c0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b22c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b22c4:
    // 0x1b22c4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1b22c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1b22c8:
    // 0x1b22c8: 0x40f809  jalr        $v0
label_1b22cc:
    if (ctx->pc == 0x1B22CCu) {
        ctx->pc = 0x1B22D0u;
        goto label_1b22d0;
    }
    ctx->pc = 0x1B22C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B22D0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B22C8u, 0x1B22D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B22D0u;
label_1b22d0:
    // 0x1b22d0: 0x8605003e  lh          $a1, 0x3E($s0)
    ctx->pc = 0x1b22d0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 62)));
label_1b22d4:
    // 0x1b22d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b22d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b22d8:
    // 0x1b22d8: 0xc071a30  jal         func_1C68C0
label_1b22dc:
    if (ctx->pc == 0x1B22DCu) {
        ctx->pc = 0x1B22DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B22D8u;
        // 0x1b22dc: 0x52ac0  sll         $a1, $a1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B22E0u;
        goto label_1b22e0;
    }
    ctx->pc = 0x1B22D8u;
    SET_GPR_U32(ctx, 31, 0x1B22E0u);
    ctx->pc = 0x1B22DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B22D8u;
    // 0x1b22dc: 0x52ac0  sll         $a1, $a1, 11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C68C0u, 0x1B22D8u, 0x1B22E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B22E0u;
label_1b22e0:
    // 0x1b22e0: 0xc06b494  jal         func_1AD250
label_1b22e4:
    if (ctx->pc == 0x1B22E4u) {
        ctx->pc = 0x1B22E8u;
        goto label_1b22e8;
    }
    ctx->pc = 0x1B22E0u;
    SET_GPR_U32(ctx, 31, 0x1B22E8u);
    ctx->pc = 0x1AD250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD250u, 0x1B22E0u, 0x1B22E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B22E8u;
label_1b22e8:
    // 0x1b22e8: 0xc071888  jal         func_1C6220
label_1b22ec:
    if (ctx->pc == 0x1B22ECu) {
        ctx->pc = 0x1B22ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B22E8u;
        // 0x1b22ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B22F0u;
        goto label_1b22f0;
    }
    ctx->pc = 0x1B22E8u;
    SET_GPR_U32(ctx, 31, 0x1B22F0u);
    ctx->pc = 0x1B22ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B22E8u;
    // 0x1b22ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6220u, 0x1B22E8u, 0x1B22F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B22F0u;
label_1b22f0:
    // 0x1b22f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b22f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b22f4:
    // 0x1b22f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b22f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1b22f8:
    // 0x1b22f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b22f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b22fc:
    // 0x1b22fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b22fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b2300:
    // 0x1b2300: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b2300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b2304:
    // 0x1b2304: 0x806ed86  j           func_1BB618
label_1b2308:
    if (ctx->pc == 0x1B2308u) {
        ctx->pc = 0x1B2308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2304u;
        // 0x1b2308: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B230Cu;
        goto label_1b230c;
    }
    ctx->pc = 0x1B2304u;
    ctx->pc = 0x1B2308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2304u;
    // 0x1b2308: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB618u;
    sub_001BB618_0x1bb618(rdram, ctx, runtime); return;
    ctx->pc = 0x1B230Cu;
label_1b230c:
    // 0x1b230c: 0x0  nop
    ctx->pc = 0x1b230cu;
    // NOP
label_1b2310:
    // 0x1b2310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b2310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1b2314:
    // 0x1b2314: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b2314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1b2318:
    // 0x1b2318: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b2318u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b231c:
    // 0x1b231c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b231cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1b2320:
    // 0x1b2320: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b2320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1b2324:
    // 0x1b2324: 0xc06b49a  jal         func_1AD268
label_1b2328:
    if (ctx->pc == 0x1B2328u) {
        ctx->pc = 0x1B2328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2324u;
        // 0x1b2328: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B232Cu;
        goto label_1b232c;
    }
    ctx->pc = 0x1B2324u;
    SET_GPR_U32(ctx, 31, 0x1B232Cu);
    ctx->pc = 0x1B2328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2324u;
    // 0x1b2328: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1B2324u, 0x1B232Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B232Cu;
label_1b232c:
    // 0x1b232c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b232cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b2330:
    // 0x1b2330: 0xc06c8d4  jal         func_1B2350
label_1b2334:
    if (ctx->pc == 0x1B2334u) {
        ctx->pc = 0x1B2334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2330u;
        // 0x1b2334: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2338u;
        goto label_1b2338;
    }
    ctx->pc = 0x1B2330u;
    SET_GPR_U32(ctx, 31, 0x1B2338u);
    ctx->pc = 0x1B2334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2330u;
    // 0x1b2334: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2350u, 0x1B2330u, 0x1B2338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2338u;
label_1b2338:
    // 0x1b2338: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2338u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b233c:
    // 0x1b233c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b233cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1b2340:
    // 0x1b2340: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b2340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b2344:
    // 0x1b2344: 0x806b49c  j           func_1AD270
label_1b2348:
    if (ctx->pc == 0x1B2348u) {
        ctx->pc = 0x1B2348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2344u;
        // 0x1b2348: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B234Cu;
        goto label_1b234c;
    }
    ctx->pc = 0x1B2344u;
    ctx->pc = 0x1B2348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2344u;
    // 0x1b2348: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    ctx->pc = 0x1B234Cu;
label_1b234c:
    // 0x1b234c: 0x0  nop
    ctx->pc = 0x1b234cu;
    // NOP
    if (ctx->pc == 0x1b234cu) { ctx->pc = 0x1b2350u; }
}
