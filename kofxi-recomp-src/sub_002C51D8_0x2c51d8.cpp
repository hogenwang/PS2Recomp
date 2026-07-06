#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C51D8
// Address: 0x2c51d8 - 0x2c5390
void sub_002C51D8_0x2c51d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C51D8_0x2c51d8");
#endif

    switch (ctx->pc) {
        case 0x2c5224u: goto label_2c5224;
        case 0x2c526cu: goto label_2c526c;
        case 0x2c5294u: goto label_2c5294;
        case 0x2c52d0u: goto label_2c52d0;
        case 0x2c5300u: goto label_2c5300;
        case 0x2c5340u: goto label_2c5340;
        case 0x2c5350u: goto label_2c5350;
        case 0x2c5374u: goto label_2c5374;
        default: break;
    }

    ctx->pc = 0x2c51d8u;

    // 0x2c51d8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2c51d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2c51dc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2c51dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c51e0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2c51e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2c51e4: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x2c51e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x2c51e8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c51e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c51ec: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2c51ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2c51f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c51f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c51f4: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2c51f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2c51f8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2c51f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c51fc: 0xffa60030  sd          $a2, 0x30($sp)
    ctx->pc = 0x2c51fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 6));
    // 0x2c5200: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2c5200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2c5204: 0xafb20028  sw          $s2, 0x28($sp)
    ctx->pc = 0x2c5204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 18));
    // 0x2c5208: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C5208u;
    {
        const bool branch_taken_0x2c5208 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C520Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5208u;
            // 0x2c520c: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5208) {
            ctx->pc = 0x2C521Cu;
            goto label_2c521c;
        }
    }
    ctx->pc = 0x2C5210u;
    // 0x2c5210: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c5210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c5214: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C5214u;
    {
        const bool branch_taken_0x2c5214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5214u;
            // 0x2c5218: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5214) {
            ctx->pc = 0x2C523Cu;
            goto label_2c523c;
        }
    }
    ctx->pc = 0x2C521Cu;
label_2c521c:
    // 0x2c521c: 0xc0b14e4  jal         func_2C5390
    ctx->pc = 0x2C521Cu;
    SET_GPR_U32(ctx, 31, 0x2C5224u);
    ctx->pc = 0x2C5390u;
    if (runtime->hasFunction(0x2C5390u)) {
        auto targetFn = runtime->lookupFunction(0x2C5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5224u; }
        if (ctx->pc != 0x2C5224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C5390_0x2c5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5224u; }
        if (ctx->pc != 0x2C5224u) { return; }
    }
    ctx->pc = 0x2C5224u;
label_2c5224:
    // 0x2c5224: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c5224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5228: 0x56000004  bnel        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C5228u;
    {
        const bool branch_taken_0x2c5228 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5228) {
            ctx->pc = 0x2C522Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5228u;
            // 0x2c522c: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C523Cu;
            goto label_2c523c;
        }
    }
    ctx->pc = 0x2C5230u;
    // 0x2c5230: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x2c5230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x2c5234: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2C5234u;
    {
        const bool branch_taken_0x2c5234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5234u;
            // 0x2c5238: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5234) {
            ctx->pc = 0x2C5328u;
            goto label_2c5328;
        }
    }
    ctx->pc = 0x2C523Cu;
label_2c523c:
    // 0x2c523c: 0xdfa20030  ld          $v0, 0x30($sp)
    ctx->pc = 0x2c523cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c5240: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C5240u;
    {
        const bool branch_taken_0x2c5240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5240u;
            // 0x2c5244: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5240) {
            ctx->pc = 0x2C5258u;
            goto label_2c5258;
        }
    }
    ctx->pc = 0x2C5248u;
    // 0x2c5248: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2c5248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2c524c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2c524cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2c5250: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C5250u;
    {
        const bool branch_taken_0x2c5250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5250u;
            // 0x2c5254: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5250) {
            ctx->pc = 0x2C525Cu;
            goto label_2c525c;
        }
    }
    ctx->pc = 0x2C5258u;
label_2c5258:
    // 0x2c5258: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c5258u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c525c:
    // 0x2c525c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2c525cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2c5260: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c5260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5264: 0xc0a067c  jal         func_2819F0
    ctx->pc = 0x2C5264u;
    SET_GPR_U32(ctx, 31, 0x2C526Cu);
    ctx->pc = 0x2C5268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5264u;
            // 0x2c5268: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2819F0u;
    if (runtime->hasFunction(0x2819F0u)) {
        auto targetFn = runtime->lookupFunction(0x2819F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C526Cu; }
        if (ctx->pc != 0x2C526Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002819F0_0x2819f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C526Cu; }
        if (ctx->pc != 0x2C526Cu) { return; }
    }
    ctx->pc = 0x2C526Cu;
label_2c526c:
    // 0x2c526c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C526Cu;
    {
        const bool branch_taken_0x2c526c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C526Cu;
            // 0x2c5270: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c526c) {
            ctx->pc = 0x2C5280u;
            goto label_2c5280;
        }
    }
    ctx->pc = 0x2C5274u;
    // 0x2c5274: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x2c5274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x2c5278: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2C5278u;
    {
        const bool branch_taken_0x2c5278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C527Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5278u;
            // 0x2c527c: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5278) {
            ctx->pc = 0x2C5328u;
            goto label_2c5328;
        }
    }
    ctx->pc = 0x2C5280u;
label_2c5280:
    // 0x2c5280: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c5280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5284: 0xdfa60018  ld          $a2, 0x18($sp)
    ctx->pc = 0x2c5284u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c5288: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c5288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c528c: 0xc0a0462  jal         func_281188
    ctx->pc = 0x2C528Cu;
    SET_GPR_U32(ctx, 31, 0x2C5294u);
    ctx->pc = 0x2C5290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C528Cu;
            // 0x2c5290: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281188u;
    if (runtime->hasFunction(0x281188u)) {
        auto targetFn = runtime->lookupFunction(0x281188u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5294u; }
        if (ctx->pc != 0x2C5294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281188_0x281188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5294u; }
        if (ctx->pc != 0x2C5294u) { return; }
    }
    ctx->pc = 0x2C5294u;
label_2c5294:
    // 0x2c5294: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C5294u;
    {
        const bool branch_taken_0x2c5294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5294u;
            // 0x2c5298: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5294) {
            ctx->pc = 0x2C52A8u;
            goto label_2c52a8;
        }
    }
    ctx->pc = 0x2C529Cu;
    // 0x2c529c: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x2c529cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2c52a0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2C52A0u;
    {
        const bool branch_taken_0x2c52a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C52A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C52A0u;
            // 0x2c52a4: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c52a0) {
            ctx->pc = 0x2C5328u;
            goto label_2c5328;
        }
    }
    ctx->pc = 0x2C52A8u;
label_2c52a8:
    // 0x2c52a8: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2c52a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c52ac: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x2c52acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2c52b0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c52b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c52b4: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x2c52b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c52b8: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x2c52b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2c52bc: 0xafa60024  sw          $a2, 0x24($sp)
    ctx->pc = 0x2c52bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
    // 0x2c52c0: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x2c52c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x2c52c4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c52c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c52c8: 0xc0a0462  jal         func_281188
    ctx->pc = 0x2C52C8u;
    SET_GPR_U32(ctx, 31, 0x2C52D0u);
    ctx->pc = 0x2C52CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C52C8u;
            // 0x2c52cc: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281188u;
    if (runtime->hasFunction(0x281188u)) {
        auto targetFn = runtime->lookupFunction(0x281188u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C52D0u; }
        if (ctx->pc != 0x2C52D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281188_0x281188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C52D0u; }
        if (ctx->pc != 0x2C52D0u) { return; }
    }
    ctx->pc = 0x2C52D0u;
label_2c52d0:
    // 0x2c52d0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C52D0u;
    {
        const bool branch_taken_0x2c52d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C52D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C52D0u;
            // 0x2c52d4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c52d0) {
            ctx->pc = 0x2C52E4u;
            goto label_2c52e4;
        }
    }
    ctx->pc = 0x2C52D8u;
    // 0x2c52d8: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x2c52d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x2c52dc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2C52DCu;
    {
        const bool branch_taken_0x2c52dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C52E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C52DCu;
            // 0x2c52e0: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c52dc) {
            ctx->pc = 0x2C5328u;
            goto label_2c5328;
        }
    }
    ctx->pc = 0x2C52E4u;
label_2c52e4:
    // 0x2c52e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c52e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c52e8: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x2c52e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2c52ec: 0xdfa30018  ld          $v1, 0x18($sp)
    ctx->pc = 0x2c52ecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c52f0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2c52f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c52f4: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x2c52f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x2c52f8: 0xc0a065c  jal         func_281970
    ctx->pc = 0x2C52F8u;
    SET_GPR_U32(ctx, 31, 0x2C5300u);
    ctx->pc = 0x2C52FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C52F8u;
            // 0x2c52fc: 0xffa30018  sd          $v1, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281970u;
    if (runtime->hasFunction(0x281970u)) {
        auto targetFn = runtime->lookupFunction(0x281970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5300u; }
        if (ctx->pc != 0x2C5300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281970_0x281970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5300u; }
        if (ctx->pc != 0x2C5300u) { return; }
    }
    ctx->pc = 0x2C5300u;
label_2c5300:
    // 0x2c5300: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C5300u;
    {
        const bool branch_taken_0x2c5300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5300u;
            // 0x2c5304: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5300) {
            ctx->pc = 0x2C5314u;
            goto label_2c5314;
        }
    }
    ctx->pc = 0x2C5308u;
    // 0x2c5308: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x2c5308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x2c530c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C530Cu;
    {
        const bool branch_taken_0x2c530c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C530Cu;
            // 0x2c5310: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c530c) {
            ctx->pc = 0x2C5328u;
            goto label_2c5328;
        }
    }
    ctx->pc = 0x2C5314u;
label_2c5314:
    // 0x2c5314: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C5314u;
    {
        const bool branch_taken_0x2c5314 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5314u;
            // 0x2c5318: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5314) {
            ctx->pc = 0x2C5320u;
            goto label_2c5320;
        }
    }
    ctx->pc = 0x2C531Cu;
    // 0x2c531c: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2c531cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_2c5320:
    // 0x2c5320: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2C5320u;
    {
        const bool branch_taken_0x2c5320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5320u;
            // 0x2c5324: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5320) {
            ctx->pc = 0x2C5378u;
            goto label_2c5378;
        }
    }
    ctx->pc = 0x2C5328u;
label_2c5328:
    // 0x2c5328: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x2c5328u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c532c: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2c532cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2c5330: 0x240500af  addiu       $a1, $zero, 0xAF
    ctx->pc = 0x2c5330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 175));
    // 0x2c5334: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c5334u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5338: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2C5338u;
    SET_GPR_U32(ctx, 31, 0x2C5340u);
    ctx->pc = 0x2C533Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5338u;
            // 0x2c533c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5340u; }
        if (ctx->pc != 0x2C5340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5340u; }
        if (ctx->pc != 0x2C5340u) { return; }
    }
    ctx->pc = 0x2C5340u;
label_2c5340:
    // 0x2c5340: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2c5340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c5344: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x2c5344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2c5348: 0xc0a0738  jal         func_281CE0
    ctx->pc = 0x2C5348u;
    SET_GPR_U32(ctx, 31, 0x2C5350u);
    ctx->pc = 0x2C534Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5348u;
            // 0x2c534c: 0xa42823  subu        $a1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281CE0u;
    if (runtime->hasFunction(0x281CE0u)) {
        auto targetFn = runtime->lookupFunction(0x281CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5350u; }
        if (ctx->pc != 0x2C5350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281CE0_0x281ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5350u; }
        if (ctx->pc != 0x2C5350u) { return; }
    }
    ctx->pc = 0x2C5350u;
label_2c5350:
    // 0x2c5350: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C5350u;
    {
        const bool branch_taken_0x2c5350 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5350u;
            // 0x2c5354: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5350) {
            ctx->pc = 0x2C5378u;
            goto label_2c5378;
        }
    }
    ctx->pc = 0x2C5358u;
    // 0x2c5358: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C5358u;
    {
        const bool branch_taken_0x2c5358 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5358) {
            ctx->pc = 0x2C536Cu;
            goto label_2c536c;
        }
    }
    ctx->pc = 0x2C5360u;
    // 0x2c5360: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c5360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c5364: 0x10500004  beq         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C5364u;
    {
        const bool branch_taken_0x2c5364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2C5368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5364u;
            // 0x2c5368: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5364) {
            ctx->pc = 0x2C5378u;
            goto label_2c5378;
        }
    }
    ctx->pc = 0x2C536Cu;
label_2c536c:
    // 0x2c536c: 0xc0b1504  jal         func_2C5410
    ctx->pc = 0x2C536Cu;
    SET_GPR_U32(ctx, 31, 0x2C5374u);
    ctx->pc = 0x2C5370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C536Cu;
            // 0x2c5370: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C5410u;
    if (runtime->hasFunction(0x2C5410u)) {
        auto targetFn = runtime->lookupFunction(0x2C5410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5374u; }
        if (ctx->pc != 0x2C5374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C5410_0x2c5410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5374u; }
        if (ctx->pc != 0x2C5374u) { return; }
    }
    ctx->pc = 0x2C5374u;
label_2c5374:
    // 0x2c5374: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c5374u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c5378:
    // 0x2c5378: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2c5378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c537c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x2c537cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c5380: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x2c5380u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c5384: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2c5384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c5388: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C538Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5388u;
            // 0x2c538c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C5390u;
    ctx->pc = 0x2c5390u;
}
