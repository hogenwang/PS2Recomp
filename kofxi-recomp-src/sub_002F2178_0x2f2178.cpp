#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F2178
// Address: 0x2f2178 - 0x2f2630
void sub_002F2178_0x2f2178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2178_0x2f2178");
#endif

    switch (ctx->pc) {
        case 0x2f21b0u: goto label_2f21b0;
        case 0x2f21e0u: goto label_2f21e0;
        case 0x2f2224u: goto label_2f2224;
        case 0x2f2240u: goto label_2f2240;
        case 0x2f2284u: goto label_2f2284;
        case 0x2f22a0u: goto label_2f22a0;
        case 0x2f22e4u: goto label_2f22e4;
        case 0x2f2300u: goto label_2f2300;
        case 0x2f2348u: goto label_2f2348;
        case 0x2f2374u: goto label_2f2374;
        case 0x2f23b8u: goto label_2f23b8;
        case 0x2f23d4u: goto label_2f23d4;
        case 0x2f23ecu: goto label_2f23ec;
        case 0x2f2420u: goto label_2f2420;
        case 0x2f244cu: goto label_2f244c;
        case 0x2f2458u: goto label_2f2458;
        case 0x2f24c0u: goto label_2f24c0;
        case 0x2f24e8u: goto label_2f24e8;
        case 0x2f2520u: goto label_2f2520;
        case 0x2f2538u: goto label_2f2538;
        case 0x2f2550u: goto label_2f2550;
        case 0x2f2560u: goto label_2f2560;
        case 0x2f25acu: goto label_2f25ac;
        case 0x2f25c4u: goto label_2f25c4;
        case 0x2f260cu: goto label_2f260c;
        default: break;
    }

    ctx->pc = 0x2f2178u;

    // 0x2f2178: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f2178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f217c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2f217cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2f2180: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2f2180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2f2184: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2f2184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2f2188: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2f2188u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f218c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f218cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f2190: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f2190u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2194: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2f2194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2f2198: 0x24501bd0  addiu       $s0, $v0, 0x1BD0
    ctx->pc = 0x2f2198u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 7120));
    // 0x2f219c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2f219cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2f21a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f21a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f21a4: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x2f21a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x2f21a8: 0xc0bc7c2  jal         func_2F1F08
    ctx->pc = 0x2F21A8u;
    SET_GPR_U32(ctx, 31, 0x2F21B0u);
    ctx->pc = 0x2F21ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F21A8u;
            // 0x2f21ac: 0x8e2400bc  lw          $a0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1F08u;
    if (runtime->hasFunction(0x2F1F08u)) {
        auto targetFn = runtime->lookupFunction(0x2F1F08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F21B0u; }
        if (ctx->pc != 0x2F21B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1F08_0x2f1f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F21B0u; }
        if (ctx->pc != 0x2F21B0u) { return; }
    }
    ctx->pc = 0x2F21B0u;
label_2f21b0:
    // 0x2f21b0: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2F21B0u;
    {
        const bool branch_taken_0x2f21b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f21b0) {
            ctx->pc = 0x2F21B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F21B0u;
            // 0x2f21b4: 0x8e2300d8  lw          $v1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F2208u;
            goto label_2f2208;
        }
    }
    ctx->pc = 0x2F21B8u;
    // 0x2f21b8: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x2f21b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x2f21bc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2f21bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2f21c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F21C0u;
    {
        const bool branch_taken_0x2f21c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F21C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F21C0u;
            // 0x2f21c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f21c0) {
            ctx->pc = 0x2F21D0u;
            goto label_2f21d0;
        }
    }
    ctx->pc = 0x2F21C8u;
    // 0x2f21c8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2f21c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2f21cc: 0x24451bd8  addiu       $a1, $v0, 0x1BD8
    ctx->pc = 0x2f21ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 7128));
label_2f21d0:
    // 0x2f21d0: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x2f21d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x2f21d4: 0x8e2400bc  lw          $a0, 0xBC($s1)
    ctx->pc = 0x2f21d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x2f21d8: 0xc0bd55c  jal         func_2F5570
    ctx->pc = 0x2F21D8u;
    SET_GPR_U32(ctx, 31, 0x2F21E0u);
    ctx->pc = 0x2F21DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F21D8u;
            // 0x2f21dc: 0x8c46000c  lw          $a2, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5570u;
    if (runtime->hasFunction(0x2F5570u)) {
        auto targetFn = runtime->lookupFunction(0x2F5570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F21E0u; }
        if (ctx->pc != 0x2F21E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5570_0x2f5570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F21E0u; }
        if (ctx->pc != 0x2F21E0u) { return; }
    }
    ctx->pc = 0x2F21E0u;
label_2f21e0:
    // 0x2f21e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f21e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f21e4: 0x1200010a  beqz        $s0, . + 4 + (0x10A << 2)
    ctx->pc = 0x2F21E4u;
    {
        const bool branch_taken_0x2f21e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F21E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F21E4u;
            // 0x2f21e8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f21e4) {
            ctx->pc = 0x2F2610u;
            goto label_2f2610;
        }
    }
    ctx->pc = 0x2F21ECu;
    // 0x2f21ec: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x2f21ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x2f21f0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F21F0u;
    {
        const bool branch_taken_0x2f21f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f21f0) {
            ctx->pc = 0x2F21F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F21F0u;
            // 0x2f21f4: 0xae3000bc  sw          $s0, 0xBC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F21F8u;
            goto label_2f21f8;
        }
    }
    ctx->pc = 0x2F21F8u;
label_2f21f8:
    // 0x2f21f8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2f21f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2f21fc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2f21fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2f2200: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2f2200u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2f2204: 0x8e2300d8  lw          $v1, 0xD8($s1)
    ctx->pc = 0x2f2204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_2f2208:
    // 0x2f2208: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2f2208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2f220c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2F220Cu;
    {
        const bool branch_taken_0x2f220c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F220Cu;
            // 0x2f2210: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f220c) {
            ctx->pc = 0x2F2268u;
            goto label_2f2268;
        }
    }
    ctx->pc = 0x2F2214u;
    // 0x2f2214: 0x8e2400bc  lw          $a0, 0xBC($s1)
    ctx->pc = 0x2f2214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x2f2218: 0x24501be0  addiu       $s0, $v0, 0x1BE0
    ctx->pc = 0x2f2218u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 7136));
    // 0x2f221c: 0xc0bc7c2  jal         func_2F1F08
    ctx->pc = 0x2F221Cu;
    SET_GPR_U32(ctx, 31, 0x2F2224u);
    ctx->pc = 0x2F2220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F221Cu;
            // 0x2f2220: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1F08u;
    if (runtime->hasFunction(0x2F1F08u)) {
        auto targetFn = runtime->lookupFunction(0x2F1F08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2224u; }
        if (ctx->pc != 0x2F2224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1F08_0x2f1f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2224u; }
        if (ctx->pc != 0x2F2224u) { return; }
    }
    ctx->pc = 0x2F2224u;
label_2f2224:
    // 0x2f2224: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F2224u;
    {
        const bool branch_taken_0x2f2224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2224) {
            ctx->pc = 0x2F2228u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2224u;
            // 0x2f2228: 0x8e2300d8  lw          $v1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F2268u;
            goto label_2f2268;
        }
    }
    ctx->pc = 0x2F222Cu;
    // 0x2f222c: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2f222cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2f2230: 0x8e2400bc  lw          $a0, 0xBC($s1)
    ctx->pc = 0x2f2230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x2f2234: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f2234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2238: 0xc0bd55c  jal         func_2F5570
    ctx->pc = 0x2F2238u;
    SET_GPR_U32(ctx, 31, 0x2F2240u);
    ctx->pc = 0x2F223Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2238u;
            // 0x2f223c: 0x24c61be8  addiu       $a2, $a2, 0x1BE8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5570u;
    if (runtime->hasFunction(0x2F5570u)) {
        auto targetFn = runtime->lookupFunction(0x2F5570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2240u; }
        if (ctx->pc != 0x2F2240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5570_0x2f5570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2240u; }
        if (ctx->pc != 0x2F2240u) { return; }
    }
    ctx->pc = 0x2F2240u;
label_2f2240:
    // 0x2f2240: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f2240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2244: 0x120000f2  beqz        $s0, . + 4 + (0xF2 << 2)
    ctx->pc = 0x2F2244u;
    {
        const bool branch_taken_0x2f2244 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2244u;
            // 0x2f2248: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2244) {
            ctx->pc = 0x2F2610u;
            goto label_2f2610;
        }
    }
    ctx->pc = 0x2F224Cu;
    // 0x2f224c: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x2f224cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x2f2250: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F2250u;
    {
        const bool branch_taken_0x2f2250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2250) {
            ctx->pc = 0x2F2254u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2250u;
            // 0x2f2254: 0xae3000bc  sw          $s0, 0xBC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F2258u;
            goto label_2f2258;
        }
    }
    ctx->pc = 0x2F2258u;
label_2f2258:
    // 0x2f2258: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2f2258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2f225c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2f225cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2f2260: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2f2260u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2f2264: 0x8e2300d8  lw          $v1, 0xD8($s1)
    ctx->pc = 0x2f2264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_2f2268:
    // 0x2f2268: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x2f2268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2f226c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2F226Cu;
    {
        const bool branch_taken_0x2f226c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F226Cu;
            // 0x2f2270: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f226c) {
            ctx->pc = 0x2F22C8u;
            goto label_2f22c8;
        }
    }
    ctx->pc = 0x2F2274u;
    // 0x2f2274: 0x8e2400bc  lw          $a0, 0xBC($s1)
    ctx->pc = 0x2f2274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x2f2278: 0x24501bf8  addiu       $s0, $v0, 0x1BF8
    ctx->pc = 0x2f2278u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 7160));
    // 0x2f227c: 0xc0bc7c2  jal         func_2F1F08
    ctx->pc = 0x2F227Cu;
    SET_GPR_U32(ctx, 31, 0x2F2284u);
    ctx->pc = 0x2F2280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F227Cu;
            // 0x2f2280: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1F08u;
    if (runtime->hasFunction(0x2F1F08u)) {
        auto targetFn = runtime->lookupFunction(0x2F1F08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2284u; }
        if (ctx->pc != 0x2F2284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1F08_0x2f1f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2284u; }
        if (ctx->pc != 0x2F2284u) { return; }
    }
    ctx->pc = 0x2F2284u;
label_2f2284:
    // 0x2f2284: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F2284u;
    {
        const bool branch_taken_0x2f2284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2284) {
            ctx->pc = 0x2F2288u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2284u;
            // 0x2f2288: 0x8e2300d8  lw          $v1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F22C8u;
            goto label_2f22c8;
        }
    }
    ctx->pc = 0x2F228Cu;
    // 0x2f228c: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2f228cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2f2290: 0x8e2400bc  lw          $a0, 0xBC($s1)
    ctx->pc = 0x2f2290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x2f2294: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f2294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2298: 0xc0bd55c  jal         func_2F5570
    ctx->pc = 0x2F2298u;
    SET_GPR_U32(ctx, 31, 0x2F22A0u);
    ctx->pc = 0x2F229Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2298u;
            // 0x2f229c: 0x24c61c08  addiu       $a2, $a2, 0x1C08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5570u;
    if (runtime->hasFunction(0x2F5570u)) {
        auto targetFn = runtime->lookupFunction(0x2F5570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F22A0u; }
        if (ctx->pc != 0x2F22A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5570_0x2f5570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F22A0u; }
        if (ctx->pc != 0x2F22A0u) { return; }
    }
    ctx->pc = 0x2F22A0u;
label_2f22a0:
    // 0x2f22a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f22a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f22a4: 0x120000da  beqz        $s0, . + 4 + (0xDA << 2)
    ctx->pc = 0x2F22A4u;
    {
        const bool branch_taken_0x2f22a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F22A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F22A4u;
            // 0x2f22a8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f22a4) {
            ctx->pc = 0x2F2610u;
            goto label_2f2610;
        }
    }
    ctx->pc = 0x2F22ACu;
    // 0x2f22ac: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x2f22acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x2f22b0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F22B0u;
    {
        const bool branch_taken_0x2f22b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f22b0) {
            ctx->pc = 0x2F22B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F22B0u;
            // 0x2f22b4: 0xae3000bc  sw          $s0, 0xBC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F22B8u;
            goto label_2f22b8;
        }
    }
    ctx->pc = 0x2F22B8u;
label_2f22b8:
    // 0x2f22b8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2f22b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2f22bc: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x2f22bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x2f22c0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2f22c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2f22c4: 0x8e2300d8  lw          $v1, 0xD8($s1)
    ctx->pc = 0x2f22c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_2f22c8:
    // 0x2f22c8: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2f22c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2f22cc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2F22CCu;
    {
        const bool branch_taken_0x2f22cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F22D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F22CCu;
            // 0x2f22d0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f22cc) {
            ctx->pc = 0x2F2324u;
            goto label_2f2324;
        }
    }
    ctx->pc = 0x2F22D4u;
    // 0x2f22d4: 0x8e2400bc  lw          $a0, 0xBC($s1)
    ctx->pc = 0x2f22d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x2f22d8: 0x24501c10  addiu       $s0, $v0, 0x1C10
    ctx->pc = 0x2f22d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 7184));
    // 0x2f22dc: 0xc0bc7c2  jal         func_2F1F08
    ctx->pc = 0x2F22DCu;
    SET_GPR_U32(ctx, 31, 0x2F22E4u);
    ctx->pc = 0x2F22E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F22DCu;
            // 0x2f22e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1F08u;
    if (runtime->hasFunction(0x2F1F08u)) {
        auto targetFn = runtime->lookupFunction(0x2F1F08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F22E4u; }
        if (ctx->pc != 0x2F22E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1F08_0x2f1f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F22E4u; }
        if (ctx->pc != 0x2F22E4u) { return; }
    }
    ctx->pc = 0x2F22E4u;
label_2f22e4:
    // 0x2f22e4: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F22E4u;
    {
        const bool branch_taken_0x2f22e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f22e4) {
            ctx->pc = 0x2F22E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F22E4u;
            // 0x2f22e8: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F2328u;
            goto label_2f2328;
        }
    }
    ctx->pc = 0x2F22ECu;
    // 0x2f22ec: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2f22ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2f22f0: 0x8e2400bc  lw          $a0, 0xBC($s1)
    ctx->pc = 0x2f22f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x2f22f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f22f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f22f8: 0xc0bd55c  jal         func_2F5570
    ctx->pc = 0x2F22F8u;
    SET_GPR_U32(ctx, 31, 0x2F2300u);
    ctx->pc = 0x2F22FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F22F8u;
            // 0x2f22fc: 0x24c61c20  addiu       $a2, $a2, 0x1C20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5570u;
    if (runtime->hasFunction(0x2F5570u)) {
        auto targetFn = runtime->lookupFunction(0x2F5570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2300u; }
        if (ctx->pc != 0x2F2300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5570_0x2f5570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2300u; }
        if (ctx->pc != 0x2F2300u) { return; }
    }
    ctx->pc = 0x2F2300u;
label_2f2300:
    // 0x2f2300: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f2300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2304: 0x120000c2  beqz        $s0, . + 4 + (0xC2 << 2)
    ctx->pc = 0x2F2304u;
    {
        const bool branch_taken_0x2f2304 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2304u;
            // 0x2f2308: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2304) {
            ctx->pc = 0x2F2610u;
            goto label_2f2610;
        }
    }
    ctx->pc = 0x2F230Cu;
    // 0x2f230c: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x2f230cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x2f2310: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F2310u;
    {
        const bool branch_taken_0x2f2310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2310) {
            ctx->pc = 0x2F2314u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2310u;
            // 0x2f2314: 0xae3000bc  sw          $s0, 0xBC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F2318u;
            goto label_2f2318;
        }
    }
    ctx->pc = 0x2F2318u;
label_2f2318:
    // 0x2f2318: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2f2318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2f231c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2f231cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2f2320: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2f2320u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2f2324:
    // 0x2f2324: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x2f2324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2f2328:
    // 0x2f2328: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2F2328u;
    {
        const bool branch_taken_0x2f2328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F232Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2328u;
            // 0x2f232c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2328) {
            ctx->pc = 0x2F2398u;
            goto label_2f2398;
        }
    }
    ctx->pc = 0x2F2330u;
    // 0x2f2330: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2f2330u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2f2334: 0x24521c40  addiu       $s2, $v0, 0x1C40
    ctx->pc = 0x2f2334u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 7232));
    // 0x2f2338: 0x8e2400bc  lw          $a0, 0xBC($s1)
    ctx->pc = 0x2f2338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x2f233c: 0x24a51c38  addiu       $a1, $a1, 0x1C38
    ctx->pc = 0x2f233cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7224));
    // 0x2f2340: 0xc0bd55c  jal         func_2F5570
    ctx->pc = 0x2F2340u;
    SET_GPR_U32(ctx, 31, 0x2F2348u);
    ctx->pc = 0x2F2344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2340u;
            // 0x2f2344: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5570u;
    if (runtime->hasFunction(0x2F5570u)) {
        auto targetFn = runtime->lookupFunction(0x2F5570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2348u; }
        if (ctx->pc != 0x2F2348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5570_0x2f5570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2348u; }
        if (ctx->pc != 0x2F2348u) { return; }
    }
    ctx->pc = 0x2F2348u;
label_2f2348:
    // 0x2f2348: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f2348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f234c: 0x120000b0  beqz        $s0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x2F234Cu;
    {
        const bool branch_taken_0x2f234c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F234Cu;
            // 0x2f2350: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f234c) {
            ctx->pc = 0x2F2610u;
            goto label_2f2610;
        }
    }
    ctx->pc = 0x2F2354u;
    // 0x2f2354: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x2f2354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x2f2358: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F2358u;
    {
        const bool branch_taken_0x2f2358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2358) {
            ctx->pc = 0x2F235Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2358u;
            // 0x2f235c: 0xae3000bc  sw          $s0, 0xBC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F2360u;
            goto label_2f2360;
        }
    }
    ctx->pc = 0x2F2360u;
label_2f2360:
    // 0x2f2360: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2f2360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2f2364: 0x8e2400bc  lw          $a0, 0xBC($s1)
    ctx->pc = 0x2f2364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x2f2368: 0x24a51c50  addiu       $a1, $a1, 0x1C50
    ctx->pc = 0x2f2368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7248));
    // 0x2f236c: 0xc0bd55c  jal         func_2F5570
    ctx->pc = 0x2F236Cu;
    SET_GPR_U32(ctx, 31, 0x2F2374u);
    ctx->pc = 0x2F2370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F236Cu;
            // 0x2f2370: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5570u;
    if (runtime->hasFunction(0x2F5570u)) {
        auto targetFn = runtime->lookupFunction(0x2F5570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2374u; }
        if (ctx->pc != 0x2F2374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5570_0x2f5570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2374u; }
        if (ctx->pc != 0x2F2374u) { return; }
    }
    ctx->pc = 0x2F2374u;
label_2f2374:
    // 0x2f2374: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f2374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2378: 0x120000a5  beqz        $s0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x2F2378u;
    {
        const bool branch_taken_0x2f2378 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F237Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2378u;
            // 0x2f237c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2378) {
            ctx->pc = 0x2F2610u;
            goto label_2f2610;
        }
    }
    ctx->pc = 0x2F2380u;
    // 0x2f2380: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x2f2380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x2f2384: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F2384u;
    {
        const bool branch_taken_0x2f2384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2384) {
            ctx->pc = 0x2F2388u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2384u;
            // 0x2f2388: 0xae3000bc  sw          $s0, 0xBC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F238Cu;
            goto label_2f238c;
        }
    }
    ctx->pc = 0x2F238Cu;
label_2f238c:
    // 0x2f238c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2f238cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2f2390: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2f2390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2f2394: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2f2394u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2f2398:
    // 0x2f2398: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x2f2398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x2f239c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2f239cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2f23a0: 0x50400036  beql        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x2F23A0u;
    {
        const bool branch_taken_0x2f23a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f23a0) {
            ctx->pc = 0x2F23A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F23A0u;
            // 0x2f23a4: 0x8e2200b4  lw          $v0, 0xB4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F247Cu;
            goto label_2f247c;
        }
    }
    ctx->pc = 0x2F23A8u;
    // 0x2f23a8: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2f23a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x2f23ac: 0x8e2400bc  lw          $a0, 0xBC($s1)
    ctx->pc = 0x2f23acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x2f23b0: 0xc0bc7c2  jal         func_2F1F08
    ctx->pc = 0x2F23B0u;
    SET_GPR_U32(ctx, 31, 0x2F23B8u);
    ctx->pc = 0x2F23B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F23B0u;
            // 0x2f23b4: 0x26051c60  addiu       $a1, $s0, 0x1C60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 7264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1F08u;
    if (runtime->hasFunction(0x2F1F08u)) {
        auto targetFn = runtime->lookupFunction(0x2F1F08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F23B8u; }
        if (ctx->pc != 0x2F23B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1F08_0x2f1f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F23B8u; }
        if (ctx->pc != 0x2F23B8u) { return; }
    }
    ctx->pc = 0x2F23B8u;
label_2f23b8:
    // 0x2f23b8: 0x54400030  bnel        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x2F23B8u;
    {
        const bool branch_taken_0x2f23b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f23b8) {
            ctx->pc = 0x2F23BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F23B8u;
            // 0x2f23bc: 0x8e2200b4  lw          $v0, 0xB4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F247Cu;
            goto label_2f247c;
        }
    }
    ctx->pc = 0x2F23C0u;
    // 0x2f23c0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2f23c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f23c4: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x2F23C4u;
    {
        const bool branch_taken_0x2f23c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F23C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F23C4u;
            // 0x2f23c8: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f23c4) {
            ctx->pc = 0x2F2400u;
            goto label_2f2400;
        }
    }
    ctx->pc = 0x2F23CCu;
    // 0x2f23cc: 0xc0bc7b2  jal         func_2F1EC8
    ctx->pc = 0x2F23CCu;
    SET_GPR_U32(ctx, 31, 0x2F23D4u);
    ctx->pc = 0x2F1EC8u;
    if (runtime->hasFunction(0x2F1EC8u)) {
        auto targetFn = runtime->lookupFunction(0x2F1EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F23D4u; }
        if (ctx->pc != 0x2F23D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1EC8_0x2f1ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F23D4u; }
        if (ctx->pc != 0x2F23D4u) { return; }
    }
    ctx->pc = 0x2F23D4u;
label_2f23d4:
    // 0x2f23d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f23d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f23d8: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x2f23d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f23dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F23DCu;
    {
        const bool branch_taken_0x2f23dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F23E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F23DCu;
            // 0x2f23e0: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f23dc) {
            ctx->pc = 0x2F2400u;
            goto label_2f2400;
        }
    }
    ctx->pc = 0x2F23E4u;
    // 0x2f23e4: 0xc0bd944  jal         func_2F6510
    ctx->pc = 0x2F23E4u;
    SET_GPR_U32(ctx, 31, 0x2F23ECu);
    ctx->pc = 0x2F6510u;
    if (runtime->hasFunction(0x2F6510u)) {
        auto targetFn = runtime->lookupFunction(0x2F6510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F23ECu; }
        if (ctx->pc != 0x2F23ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F6510_0x2f6510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F23ECu; }
        if (ctx->pc != 0x2F23ECu) { return; }
    }
    ctx->pc = 0x2F23ECu;
label_2f23ec:
    // 0x2f23ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f23ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f23f0: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2F23F0u;
    {
        const bool branch_taken_0x2f23f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F23F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F23F0u;
            // 0x2f23f4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f23f0) {
            ctx->pc = 0x2F2438u;
            goto label_2f2438;
        }
    }
    ctx->pc = 0x2F23F8u;
    // 0x2f23f8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2F23F8u;
    {
        const bool branch_taken_0x2f23f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f23f8) {
            ctx->pc = 0x2F2424u;
            goto label_2f2424;
        }
    }
    ctx->pc = 0x2F2400u;
label_2f2400:
    // 0x2f2400: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2f2400u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2f2404: 0x8c460650  lw          $a2, 0x650($v0)
    ctx->pc = 0x2f2404u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1616)));
    // 0x2f2408: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2f2408u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2f240c: 0x24a51c70  addiu       $a1, $a1, 0x1C70
    ctx->pc = 0x2f240cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7280));
    // 0x2f2410: 0x24e71c88  addiu       $a3, $a3, 0x1C88
    ctx->pc = 0x2f2410u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7304));
    // 0x2f2414: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f2414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2418: 0xc0bd9b0  jal         func_2F66C0
    ctx->pc = 0x2F2418u;
    SET_GPR_U32(ctx, 31, 0x2F2420u);
    ctx->pc = 0x2F241Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2418u;
            // 0x2f241c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F66C0u;
    if (runtime->hasFunction(0x2F66C0u)) {
        auto targetFn = runtime->lookupFunction(0x2F66C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2420u; }
        if (ctx->pc != 0x2F2420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F66C0_0x2f66c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2420u; }
        if (ctx->pc != 0x2F2420u) { return; }
    }
    ctx->pc = 0x2F2420u;
label_2f2420:
    // 0x2f2420: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2f2420u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f2424:
    // 0x2f2424: 0x56400006  bnel        $s2, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F2424u;
    {
        const bool branch_taken_0x2f2424 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2424) {
            ctx->pc = 0x2F2428u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2424u;
            // 0x2f2428: 0x8e2400bc  lw          $a0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F2440u;
            goto label_2f2440;
        }
    }
    ctx->pc = 0x2F242Cu;
    // 0x2f242c: 0x2402fc16  addiu       $v0, $zero, -0x3EA
    ctx->pc = 0x2f242cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966294));
    // 0x2f2430: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x2f2430u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x2f2434: 0x0  nop
    ctx->pc = 0x2f2434u;
    // NOP
label_2f2438:
    // 0x2f2438: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x2F2438u;
    {
        const bool branch_taken_0x2f2438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F243Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2438u;
            // 0x2f243c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2438) {
            ctx->pc = 0x2F2610u;
            goto label_2f2610;
        }
    }
    ctx->pc = 0x2F2440u;
label_2f2440:
    // 0x2f2440: 0x26051c60  addiu       $a1, $s0, 0x1C60
    ctx->pc = 0x2f2440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 7264));
    // 0x2f2444: 0xc0bd55c  jal         func_2F5570
    ctx->pc = 0x2F2444u;
    SET_GPR_U32(ctx, 31, 0x2F244Cu);
    ctx->pc = 0x2F2448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2444u;
            // 0x2f2448: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5570u;
    if (runtime->hasFunction(0x2F5570u)) {
        auto targetFn = runtime->lookupFunction(0x2F5570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F244Cu; }
        if (ctx->pc != 0x2F244Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5570_0x2f5570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F244Cu; }
        if (ctx->pc != 0x2F244Cu) { return; }
    }
    ctx->pc = 0x2F244Cu;
label_2f244c:
    // 0x2f244c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f244cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2450: 0xc0be45e  jal         func_2F9178
    ctx->pc = 0x2F2450u;
    SET_GPR_U32(ctx, 31, 0x2F2458u);
    ctx->pc = 0x2F2454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2450u;
            // 0x2f2454: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9178u;
    if (runtime->hasFunction(0x2F9178u)) {
        auto targetFn = runtime->lookupFunction(0x2F9178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2458u; }
        if (ctx->pc != 0x2F2458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F9178_0x2f9178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2458u; }
        if (ctx->pc != 0x2F2458u) { return; }
    }
    ctx->pc = 0x2F2458u;
label_2f2458:
    // 0x2f2458: 0x1200006d  beqz        $s0, . + 4 + (0x6D << 2)
    ctx->pc = 0x2F2458u;
    {
        const bool branch_taken_0x2f2458 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F245Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2458u;
            // 0x2f245c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2458) {
            ctx->pc = 0x2F2610u;
            goto label_2f2610;
        }
    }
    ctx->pc = 0x2F2460u;
    // 0x2f2460: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x2f2460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x2f2464: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F2464u;
    {
        const bool branch_taken_0x2f2464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2464) {
            ctx->pc = 0x2F2468u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2464u;
            // 0x2f2468: 0xae3000bc  sw          $s0, 0xBC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F246Cu;
            goto label_2f246c;
        }
    }
    ctx->pc = 0x2F246Cu;
label_2f246c:
    // 0x2f246c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2f246cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2f2470: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x2f2470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x2f2474: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2f2474u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2f2478: 0x8e2200b4  lw          $v0, 0xB4($s1)
    ctx->pc = 0x2f2478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
label_2f247c:
    // 0x2f247c: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x2f247cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x2f2480: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2f2480u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2f2484: 0x50400040  beql        $v0, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x2F2484u;
    {
        const bool branch_taken_0x2f2484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2484) {
            ctx->pc = 0x2F2488u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2484u;
            // 0x2f2488: 0x8e220090  lw          $v0, 0x90($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F2588u;
            goto label_2f2588;
        }
    }
    ctx->pc = 0x2F248Cu;
    // 0x2f248c: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x2f248cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x2f2490: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F2490u;
    {
        const bool branch_taken_0x2f2490 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2f2490) {
            ctx->pc = 0x2F24A4u;
            goto label_2f24a4;
        }
    }
    ctx->pc = 0x2F2498u;
    // 0x2f2498: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x2f2498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x2f249c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F249Cu;
    {
        const bool branch_taken_0x2f249c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F24A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F249Cu;
            // 0x2f24a0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f249c) {
            ctx->pc = 0x2F24B0u;
            goto label_2f24b0;
        }
    }
    ctx->pc = 0x2F24A4u;
label_2f24a4:
    // 0x2f24a4: 0x54600038  bnel        $v1, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x2F24A4u;
    {
        const bool branch_taken_0x2f24a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f24a4) {
            ctx->pc = 0x2F24A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F24A4u;
            // 0x2f24a8: 0x8e220090  lw          $v0, 0x90($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F2588u;
            goto label_2f2588;
        }
    }
    ctx->pc = 0x2F24ACu;
    // 0x2f24ac: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2f24acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2f24b0:
    // 0x2f24b0: 0x8e2400bc  lw          $a0, 0xBC($s1)
    ctx->pc = 0x2f24b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x2f24b4: 0x24501c90  addiu       $s0, $v0, 0x1C90
    ctx->pc = 0x2f24b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 7312));
    // 0x2f24b8: 0xc0bc7c2  jal         func_2F1F08
    ctx->pc = 0x2F24B8u;
    SET_GPR_U32(ctx, 31, 0x2F24C0u);
    ctx->pc = 0x2F24BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F24B8u;
            // 0x2f24bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1F08u;
    if (runtime->hasFunction(0x2F1F08u)) {
        auto targetFn = runtime->lookupFunction(0x2F1F08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F24C0u; }
        if (ctx->pc != 0x2F24C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1F08_0x2f1f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F24C0u; }
        if (ctx->pc != 0x2F24C0u) { return; }
    }
    ctx->pc = 0x2F24C0u;
label_2f24c0:
    // 0x2f24c0: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F24C0u;
    {
        const bool branch_taken_0x2f24c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F24C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F24C0u;
            // 0x2f24c4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f24c0) {
            ctx->pc = 0x2F2510u;
            goto label_2f2510;
        }
    }
    ctx->pc = 0x2F24C8u;
    // 0x2f24c8: 0x8e2200c8  lw          $v0, 0xC8($s1)
    ctx->pc = 0x2f24c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x2f24cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f24ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f24d0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2F24D0u;
    {
        const bool branch_taken_0x2f24d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F24D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F24D0u;
            // 0x2f24d4: 0x3c060040  lui         $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f24d0) {
            ctx->pc = 0x2F250Cu;
            goto label_2f250c;
        }
    }
    ctx->pc = 0x2F24D8u;
    // 0x2f24d8: 0x8e2400bc  lw          $a0, 0xBC($s1)
    ctx->pc = 0x2f24d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x2f24dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f24dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f24e0: 0xc0bd55c  jal         func_2F5570
    ctx->pc = 0x2F24E0u;
    SET_GPR_U32(ctx, 31, 0x2F24E8u);
    ctx->pc = 0x2F24E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F24E0u;
            // 0x2f24e4: 0x24c61ca0  addiu       $a2, $a2, 0x1CA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5570u;
    if (runtime->hasFunction(0x2F5570u)) {
        auto targetFn = runtime->lookupFunction(0x2F5570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F24E8u; }
        if (ctx->pc != 0x2F24E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5570_0x2f5570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F24E8u; }
        if (ctx->pc != 0x2F24E8u) { return; }
    }
    ctx->pc = 0x2F24E8u;
label_2f24e8:
    // 0x2f24e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f24e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f24ec: 0x12000048  beqz        $s0, . + 4 + (0x48 << 2)
    ctx->pc = 0x2F24ECu;
    {
        const bool branch_taken_0x2f24ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F24F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F24ECu;
            // 0x2f24f0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f24ec) {
            ctx->pc = 0x2F2610u;
            goto label_2f2610;
        }
    }
    ctx->pc = 0x2F24F4u;
    // 0x2f24f4: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x2f24f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x2f24f8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F24F8u;
    {
        const bool branch_taken_0x2f24f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f24f8) {
            ctx->pc = 0x2F24FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F24F8u;
            // 0x2f24fc: 0xae3000bc  sw          $s0, 0xBC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F2500u;
            goto label_2f2500;
        }
    }
    ctx->pc = 0x2F2500u;
label_2f2500:
    // 0x2f2500: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2f2500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2f2504: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x2f2504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x2f2508: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2f2508u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2f250c:
    // 0x2f250c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2f250cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2f2510:
    // 0x2f2510: 0x8e2400bc  lw          $a0, 0xBC($s1)
    ctx->pc = 0x2f2510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x2f2514: 0x24501cc8  addiu       $s0, $v0, 0x1CC8
    ctx->pc = 0x2f2514u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 7368));
    // 0x2f2518: 0xc0bc7c2  jal         func_2F1F08
    ctx->pc = 0x2F2518u;
    SET_GPR_U32(ctx, 31, 0x2F2520u);
    ctx->pc = 0x2F251Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2518u;
            // 0x2f251c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1F08u;
    if (runtime->hasFunction(0x2F1F08u)) {
        auto targetFn = runtime->lookupFunction(0x2F1F08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2520u; }
        if (ctx->pc != 0x2F2520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1F08_0x2f1f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2520u; }
        if (ctx->pc != 0x2F2520u) { return; }
    }
    ctx->pc = 0x2F2520u;
label_2f2520:
    // 0x2f2520: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x2F2520u;
    {
        const bool branch_taken_0x2f2520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2520) {
            ctx->pc = 0x2F2524u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2520u;
            // 0x2f2524: 0x8e220090  lw          $v0, 0x90($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F2588u;
            goto label_2f2588;
        }
    }
    ctx->pc = 0x2F2528u;
    // 0x2f2528: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f2528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f252c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f252cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2530: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2F2530u;
    SET_GPR_U32(ctx, 31, 0x2F2538u);
    ctx->pc = 0x2F2534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2530u;
            // 0x2f2534: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2538u; }
        if (ctx->pc != 0x2F2538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2538u; }
        if (ctx->pc != 0x2F2538u) { return; }
    }
    ctx->pc = 0x2F2538u;
label_2f2538:
    // 0x2f2538: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2f2538u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2f253c: 0x8e2700c4  lw          $a3, 0xC4($s1)
    ctx->pc = 0x2f253cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x2f2540: 0x24c61cd8  addiu       $a2, $a2, 0x1CD8
    ctx->pc = 0x2f2540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7384));
    // 0x2f2544: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f2544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2548: 0xc043e24  jal         func_10F890
    ctx->pc = 0x2F2548u;
    SET_GPR_U32(ctx, 31, 0x2F2550u);
    ctx->pc = 0x2F254Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2548u;
            // 0x2f254c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F890u;
    if (runtime->hasFunction(0x10F890u)) {
        auto targetFn = runtime->lookupFunction(0x10F890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2550u; }
        if (ctx->pc != 0x2F2550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F890_0x10f890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2550u; }
        if (ctx->pc != 0x2F2550u) { return; }
    }
    ctx->pc = 0x2F2550u;
label_2f2550:
    // 0x2f2550: 0x8e2400bc  lw          $a0, 0xBC($s1)
    ctx->pc = 0x2f2550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x2f2554: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f2554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2558: 0xc0bd55c  jal         func_2F5570
    ctx->pc = 0x2F2558u;
    SET_GPR_U32(ctx, 31, 0x2F2560u);
    ctx->pc = 0x2F255Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2558u;
            // 0x2f255c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5570u;
    if (runtime->hasFunction(0x2F5570u)) {
        auto targetFn = runtime->lookupFunction(0x2F5570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2560u; }
        if (ctx->pc != 0x2F2560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5570_0x2f5570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2560u; }
        if (ctx->pc != 0x2F2560u) { return; }
    }
    ctx->pc = 0x2F2560u;
label_2f2560:
    // 0x2f2560: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f2560u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2564: 0x1200002a  beqz        $s0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2F2564u;
    {
        const bool branch_taken_0x2f2564 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2564u;
            // 0x2f2568: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2564) {
            ctx->pc = 0x2F2610u;
            goto label_2f2610;
        }
    }
    ctx->pc = 0x2F256Cu;
    // 0x2f256c: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x2f256cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x2f2570: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F2570u;
    {
        const bool branch_taken_0x2f2570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2570) {
            ctx->pc = 0x2F2574u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2570u;
            // 0x2f2574: 0xae3000bc  sw          $s0, 0xBC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F2578u;
            goto label_2f2578;
        }
    }
    ctx->pc = 0x2F2578u;
label_2f2578:
    // 0x2f2578: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2f2578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2f257c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x2f257cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x2f2580: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2f2580u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2f2584: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x2f2584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_2f2588:
    // 0x2f2588: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2F2588u;
    {
        const bool branch_taken_0x2f2588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F258Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2588u;
            // 0x2f258c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2588) {
            ctx->pc = 0x2F2610u;
            goto label_2f2610;
        }
    }
    ctx->pc = 0x2F2590u;
    // 0x2f2590: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2f2590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2f2594: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2F2594u;
    {
        const bool branch_taken_0x2f2594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2594u;
            // 0x2f2598: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2594) {
            ctx->pc = 0x2F2610u;
            goto label_2f2610;
        }
    }
    ctx->pc = 0x2F259Cu;
    // 0x2f259c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2f259cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2f25a0: 0x8e2400bc  lw          $a0, 0xBC($s1)
    ctx->pc = 0x2f25a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x2f25a4: 0xc0bc7c2  jal         func_2F1F08
    ctx->pc = 0x2F25A4u;
    SET_GPR_U32(ctx, 31, 0x2F25ACu);
    ctx->pc = 0x2F25A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F25A4u;
            // 0x2f25a8: 0x24a51ce0  addiu       $a1, $a1, 0x1CE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1F08u;
    if (runtime->hasFunction(0x2F1F08u)) {
        auto targetFn = runtime->lookupFunction(0x2F1F08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F25ACu; }
        if (ctx->pc != 0x2F25ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1F08_0x2f1f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F25ACu; }
        if (ctx->pc != 0x2F25ACu) { return; }
    }
    ctx->pc = 0x2F25ACu;
label_2f25ac:
    // 0x2f25ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f25acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f25b0: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2F25B0u;
    {
        const bool branch_taken_0x2f25b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F25B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F25B0u;
            // 0x2f25b4: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f25b0) {
            ctx->pc = 0x2F260Cu;
            goto label_2f260c;
        }
    }
    ctx->pc = 0x2F25B8u;
    // 0x2f25b8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2f25b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2f25bc: 0xc0bd9e4  jal         func_2F6790
    ctx->pc = 0x2F25BCu;
    SET_GPR_U32(ctx, 31, 0x2F25C4u);
    ctx->pc = 0x2F25C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F25BCu;
            // 0x2f25c0: 0x24a51cf0  addiu       $a1, $a1, 0x1CF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6790u;
    if (runtime->hasFunction(0x2F6790u)) {
        auto targetFn = runtime->lookupFunction(0x2F6790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F25C4u; }
        if (ctx->pc != 0x2F25C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F6790_0x2f6790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F25C4u; }
        if (ctx->pc != 0x2F25C4u) { return; }
    }
    ctx->pc = 0x2F25C4u;
label_2f25c4:
    // 0x2f25c4: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2F25C4u;
    {
        const bool branch_taken_0x2f25c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F25C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F25C4u;
            // 0x2f25c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f25c4) {
            ctx->pc = 0x2F2610u;
            goto label_2f2610;
        }
    }
    ctx->pc = 0x2F25CCu;
    // 0x2f25cc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2f25ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f25d0: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F25D0u;
    {
        const bool branch_taken_0x2f25d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f25d0) {
            ctx->pc = 0x2F25D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F25D0u;
            // 0x2f25d4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F25E8u;
            goto label_2f25e8;
        }
    }
    ctx->pc = 0x2F25D8u;
    // 0x2f25d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f25d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f25dc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2f25dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2f25e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F25E0u;
    {
        const bool branch_taken_0x2f25e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F25E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F25E0u;
            // 0x2f25e4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f25e0) {
            ctx->pc = 0x2F25ECu;
            goto label_2f25ec;
        }
    }
    ctx->pc = 0x2F25E8u;
label_2f25e8:
    // 0x2f25e8: 0xae2300bc  sw          $v1, 0xBC($s1)
    ctx->pc = 0x2f25e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 3));
label_2f25ec:
    // 0x2f25ec: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F25ECu;
    {
        const bool branch_taken_0x2f25ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f25ec) {
            ctx->pc = 0x2F25F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F25ECu;
            // 0x2f25f0: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F2600u;
            goto label_2f2600;
        }
    }
    ctx->pc = 0x2F25F4u;
    // 0x2f25f4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2f25f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f25f8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2f25f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2f25fc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2f25fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2f2600:
    // 0x2f2600: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f2600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2604: 0xc0bd594  jal         func_2F5650
    ctx->pc = 0x2F2604u;
    SET_GPR_U32(ctx, 31, 0x2F260Cu);
    ctx->pc = 0x2F2608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2604u;
            // 0x2f2608: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5650u;
    if (runtime->hasFunction(0x2F5650u)) {
        auto targetFn = runtime->lookupFunction(0x2F5650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F260Cu; }
        if (ctx->pc != 0x2F260Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5650_0x2f5650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F260Cu; }
        if (ctx->pc != 0x2F260Cu) { return; }
    }
    ctx->pc = 0x2F260Cu;
label_2f260c:
    // 0x2f260c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f260cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2610:
    // 0x2f2610: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2f2610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f2614: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2f2614u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f2618: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2f2618u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f261c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2f261cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f2620: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f2620u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f2624: 0x3e00008  jr          $ra
    ctx->pc = 0x2F2624u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2624u;
            // 0x2f2628: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F262Cu;
    // 0x2f262c: 0x0  nop
    ctx->pc = 0x2f262cu;
    // NOP
    ctx->pc = 0x2f2630u;
}
