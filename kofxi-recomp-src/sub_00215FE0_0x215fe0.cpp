#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00215FE0
// Address: 0x215fe0 - 0x2160d8
void sub_00215FE0_0x215fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215FE0_0x215fe0");
#endif

    switch (ctx->pc) {
        case 0x215ffcu: goto label_215ffc;
        case 0x216018u: goto label_216018;
        case 0x21604cu: goto label_21604c;
        case 0x21605cu: goto label_21605c;
        case 0x216078u: goto label_216078;
        case 0x2160acu: goto label_2160ac;
        case 0x2160b4u: goto label_2160b4;
        default: break;
    }

    ctx->pc = 0x215fe0u;

label_215fe0:
    // 0x215fe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x215fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x215fe4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x215fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x215fe8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x215fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x215fec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x215fecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215ff0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x215ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x215ff4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x215FF4u;
    SET_GPR_U32(ctx, 31, 0x215FFCu);
    ctx->pc = 0x215FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215FF4u;
            // 0x215ff8: 0x24840c18  addiu       $a0, $a0, 0xC18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215FFCu; }
        if (ctx->pc != 0x215FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215FFCu; }
        if (ctx->pc != 0x215FFCu) { return; }
    }
    ctx->pc = 0x215FFCu;
label_215ffc:
    // 0x215ffc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x215ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x216000: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x216000u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x216004: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x216004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x216008: 0x24840928  addiu       $a0, $a0, 0x928
    ctx->pc = 0x216008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2344));
    // 0x21600c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21600cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216010: 0x8043e52  j           func_10F948
    ctx->pc = 0x216010u;
    ctx->pc = 0x216014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216010u;
            // 0x216014: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x216018u;
label_216018:
    // 0x216018: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x216018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21601c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21601cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x216020: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x216020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x216024: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x216024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x216028: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x216028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21602c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21602cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216030: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x216030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x216034: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x216034u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216038: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x216038u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x21603c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21603cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x216040: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x216040u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x216044: 0xc0844dc  jal         func_211370
    ctx->pc = 0x216044u;
    SET_GPR_U32(ctx, 31, 0x21604Cu);
    ctx->pc = 0x216048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216044u;
            // 0x216048: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21604Cu; }
        if (ctx->pc != 0x21604Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21604Cu; }
        if (ctx->pc != 0x21604Cu) { return; }
    }
    ctx->pc = 0x21604Cu;
label_21604c:
    // 0x21604c: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x21604cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x216050: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x216050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216054: 0xc0857f8  jal         func_215FE0
    ctx->pc = 0x216054u;
    SET_GPR_U32(ctx, 31, 0x21605Cu);
    ctx->pc = 0x216058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216054u;
            // 0x216058: 0x20f8023  subu        $s0, $s0, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x215FE0u;
    goto label_215fe0;
    ctx->pc = 0x21605Cu;
label_21605c:
    // 0x21605c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21605cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216060: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x216060u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x216064: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x216064u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216068: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x216068u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21606c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21606cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x216070: 0x3e00008  jr          $ra
    ctx->pc = 0x216070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216070u;
            // 0x216074: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x216078u;
label_216078:
    // 0x216078: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x216078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21607c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21607cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x216080: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x216080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x216084: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x216084u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216088: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x216088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21608c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21608cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x216090: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x216090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x216094: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x216094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x216098: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x216098u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21609c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21609cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2160a0: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x2160a0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x2160a4: 0xc084612  jal         func_211848
    ctx->pc = 0x2160A4u;
    SET_GPR_U32(ctx, 31, 0x2160ACu);
    ctx->pc = 0x2160A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2160A4u;
            // 0x2160a8: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2160ACu; }
        if (ctx->pc != 0x2160ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2160ACu; }
        if (ctx->pc != 0x2160ACu) { return; }
    }
    ctx->pc = 0x2160ACu;
label_2160ac:
    // 0x2160ac: 0xc0857f8  jal         func_215FE0
    ctx->pc = 0x2160ACu;
    SET_GPR_U32(ctx, 31, 0x2160B4u);
    ctx->pc = 0x2160B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2160ACu;
            // 0x2160b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x215FE0u;
    goto label_215fe0;
    ctx->pc = 0x2160B4u;
label_2160b4:
    // 0x2160b4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2160b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2160b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2160b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2160bc: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x2160bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2160c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2160c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2160c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2160c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2160c8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2160c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2160cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2160CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2160D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2160CCu;
            // 0x2160d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2160D4u;
    // 0x2160d4: 0x0  nop
    ctx->pc = 0x2160d4u;
    // NOP
    ctx->pc = 0x2160d8u;
}
