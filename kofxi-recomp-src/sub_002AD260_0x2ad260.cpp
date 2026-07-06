#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AD260
// Address: 0x2ad260 - 0x2ad4b8
void sub_002AD260_0x2ad260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD260_0x2ad260");
#endif

    switch (ctx->pc) {
        case 0x2ad2f0u: goto label_2ad2f0;
        case 0x2ad30cu: goto label_2ad30c;
        case 0x2ad3a4u: goto label_2ad3a4;
        case 0x2ad3c4u: goto label_2ad3c4;
        case 0x2ad3e4u: goto label_2ad3e4;
        case 0x2ad410u: goto label_2ad410;
        case 0x2ad430u: goto label_2ad430;
        case 0x2ad460u: goto label_2ad460;
        case 0x2ad484u: goto label_2ad484;
        default: break;
    }

    ctx->pc = 0x2ad260u;

    // 0x2ad260: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2ad260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2ad264: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2ad264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2ad268: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2ad268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2ad26c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2ad26cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad270: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2ad270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2ad274: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x2ad274u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad278: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2ad278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2ad27c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2ad27cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad280: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2ad280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ad284: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2ad284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2ad288: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ad288u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad28c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2ad28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2ad290: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ad290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ad294: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x2ad294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2ad298: 0x8c820168  lw          $v0, 0x168($a0)
    ctx->pc = 0x2ad298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 360)));
    // 0x2ad29c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2AD29Cu;
    {
        const bool branch_taken_0x2ad29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD29Cu;
            // 0x2ad2a0: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad29c) {
            ctx->pc = 0x2AD2E0u;
            goto label_2ad2e0;
        }
    }
    ctx->pc = 0x2AD2A4u;
    // 0x2ad2a4: 0x6600009  bltz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AD2A4u;
    {
        const bool branch_taken_0x2ad2a4 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x2AD2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD2A4u;
            // 0x2ad2a8: 0xac800168  sw          $zero, 0x168($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad2a4) {
            ctx->pc = 0x2AD2CCu;
            goto label_2ad2cc;
        }
    }
    ctx->pc = 0x2AD2ACu;
    // 0x2ad2ac: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x2ad2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2ad2b0: 0x8c430158  lw          $v1, 0x158($v0)
    ctx->pc = 0x2ad2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
    // 0x2ad2b4: 0x10730005  beq         $v1, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AD2B4u;
    {
        const bool branch_taken_0x2ad2b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x2AD2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD2B4u;
            // 0x2ad2b8: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad2b4) {
            ctx->pc = 0x2AD2CCu;
            goto label_2ad2cc;
        }
    }
    ctx->pc = 0x2AD2BCu;
    // 0x2ad2bc: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2ad2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ad2c0: 0x2405008e  addiu       $a1, $zero, 0x8E
    ctx->pc = 0x2ad2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x2ad2c4: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2AD2C4u;
    {
        const bool branch_taken_0x2ad2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD2C4u;
            // 0x2ad2c8: 0x240600f4  addiu       $a2, $zero, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad2c4) {
            ctx->pc = 0x2AD398u;
            goto label_2ad398;
        }
    }
    ctx->pc = 0x2AD2CCu;
label_2ad2cc:
    // 0x2ad2cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ad2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ad2d0: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x2ad2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x2ad2d4: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x2ad2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2ad2d8: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x2AD2D8u;
    {
        const bool branch_taken_0x2ad2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD2D8u;
            // 0x2ad2dc: 0xdc620150  ld          $v0, 0x150($v1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad2d8) {
            ctx->pc = 0x2AD48Cu;
            goto label_2ad48c;
        }
    }
    ctx->pc = 0x2AD2E0u;
label_2ad2e0:
    // 0x2ad2e0: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x2ad2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x2ad2e4: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x2ad2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2ad2e8: 0x14450045  bne         $v0, $a1, . + 4 + (0x45 << 2)
    ctx->pc = 0x2AD2E8u;
    {
        const bool branch_taken_0x2ad2e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2AD2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD2E8u;
            // 0x2ad2ec: 0x8c720004  lw          $s2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad2e8) {
            ctx->pc = 0x2AD400u;
            goto label_2ad400;
        }
    }
    ctx->pc = 0x2AD2F0u;
label_2ad2f0:
    // 0x2ad2f0: 0x8e260040  lw          $a2, 0x40($s1)
    ctx->pc = 0x2ad2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2ad2f4: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x2ad2f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ad2f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ad2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad2fc: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2ad2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2ad300: 0x2063823  subu        $a3, $s0, $a2
    ctx->pc = 0x2ad300u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x2ad304: 0xc0ad948  jal         func_2B6520
    ctx->pc = 0x2AD304u;
    SET_GPR_U32(ctx, 31, 0x2AD30Cu);
    ctx->pc = 0x2AD308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD304u;
            // 0x2ad308: 0x2463021  addu        $a2, $s2, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6520u;
    if (runtime->hasFunction(0x2B6520u)) {
        auto targetFn = runtime->lookupFunction(0x2B6520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD30Cu; }
        if (ctx->pc != 0x2AD30Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6520_0x2b6520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD30Cu; }
        if (ctx->pc != 0x2AD30Cu) { return; }
    }
    ctx->pc = 0x2AD30Cu;
label_2ad30c:
    // 0x2ad30c: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x2ad30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2ad310: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ad310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad314: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x2ad314u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2ad318: 0xb0802a  slt         $s0, $a1, $s0
    ctx->pc = 0x2ad318u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2ad31c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AD31Cu;
    {
        const bool branch_taken_0x2ad31c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad31c) {
            ctx->pc = 0x2AD338u;
            goto label_2ad338;
        }
    }
    ctx->pc = 0x2AD324u;
    // 0x2ad324: 0x58a0004c  blezl       $a1, . + 4 + (0x4C << 2)
    ctx->pc = 0x2AD324u;
    {
        const bool branch_taken_0x2ad324 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x2ad324) {
            ctx->pc = 0x2AD328u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD324u;
            // 0x2ad328: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AD458u;
            goto label_2ad458;
        }
    }
    ctx->pc = 0x2AD32Cu;
    // 0x2ad32c: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x2ad32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ad330: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x2AD330u;
    {
        const bool branch_taken_0x2ad330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD330u;
            // 0x2ad334: 0xae220040  sw          $v0, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad330) {
            ctx->pc = 0x2AD2F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ad2f0;
        }
    }
    ctx->pc = 0x2AD338u;
label_2ad338:
    // 0x2ad338: 0x6600007  bltz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AD338u;
    {
        const bool branch_taken_0x2ad338 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x2AD33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD338u;
            // 0x2ad33c: 0x92420000  lbu         $v0, 0x0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad338) {
            ctx->pc = 0x2AD358u;
            goto label_2ad358;
        }
    }
    ctx->pc = 0x2AD340u;
    // 0x2ad340: 0x10530005  beq         $v0, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AD340u;
    {
        const bool branch_taken_0x2ad340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x2AD344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD340u;
            // 0x2ad344: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad340) {
            ctx->pc = 0x2AD358u;
            goto label_2ad358;
        }
    }
    ctx->pc = 0x2AD348u;
    // 0x2ad348: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2ad348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ad34c: 0x2405008e  addiu       $a1, $zero, 0x8E
    ctx->pc = 0x2ad34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x2ad350: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2AD350u;
    {
        const bool branch_taken_0x2ad350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD350u;
            // 0x2ad354: 0x240600f4  addiu       $a2, $zero, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad350) {
            ctx->pc = 0x2AD398u;
            goto label_2ad398;
        }
    }
    ctx->pc = 0x2AD358u;
label_2ad358:
    // 0x2ad358: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x2ad358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2ad35c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2ad35cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2ad360: 0xac620158  sw          $v0, 0x158($v1)
    ctx->pc = 0x2ad360u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 344), GPR_U32(ctx, 2));
    // 0x2ad364: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x2ad364u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ad368: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x2ad368u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x2ad36c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ad36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ad370: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x2ad370u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2ad374: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x2ad374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x2ad378: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ad378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ad37c: 0x448025  or          $s0, $v0, $a0
    ctx->pc = 0x2ad37cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2ad380: 0x290182b  sltu        $v1, $s4, $s0
    ctx->pc = 0x2ad380u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2ad384: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AD384u;
    {
        const bool branch_taken_0x2ad384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD384u;
            // 0x2ad388: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad384) {
            ctx->pc = 0x2AD3ACu;
            goto label_2ad3ac;
        }
    }
    ctx->pc = 0x2AD38Cu;
    // 0x2ad38c: 0x2410002f  addiu       $s0, $zero, 0x2F
    ctx->pc = 0x2ad38cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x2ad390: 0x2405008e  addiu       $a1, $zero, 0x8E
    ctx->pc = 0x2ad390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x2ad394: 0x24060098  addiu       $a2, $zero, 0x98
    ctx->pc = 0x2ad394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
label_2ad398:
    // 0x2ad398: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ad398u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad39c: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2AD39Cu;
    SET_GPR_U32(ctx, 31, 0x2AD3A4u);
    ctx->pc = 0x2AD3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD39Cu;
            // 0x2ad3a0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD3A4u; }
        if (ctx->pc != 0x2AD3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD3A4u; }
        if (ctx->pc != 0x2AD3A4u) { return; }
    }
    ctx->pc = 0x2AD3A4u;
label_2ad3a4:
    // 0x2ad3a4: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2AD3A4u;
    {
        const bool branch_taken_0x2ad3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD3A4u;
            // 0x2ad3a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad3a4) {
            ctx->pc = 0x2AD478u;
            goto label_2ad478;
        }
    }
    ctx->pc = 0x2AD3ACu;
label_2ad3ac:
    // 0x2ad3ac: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2AD3ACu;
    {
        const bool branch_taken_0x2ad3ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad3ac) {
            ctx->pc = 0x2AD3B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD3ACu;
            // 0x2ad3b0: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AD3ECu;
            goto label_2ad3ec;
        }
    }
    ctx->pc = 0x2AD3B4u;
    // 0x2ad3b4: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x2ad3b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
    // 0x2ad3b8: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x2ad3b8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2ad3bc: 0xc0a32e0  jal         func_28CB80
    ctx->pc = 0x2AD3BCu;
    SET_GPR_U32(ctx, 31, 0x2AD3C4u);
    ctx->pc = 0x2AD3C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD3BCu;
            // 0x2ad3c0: 0x8e24003c  lw          $a0, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28CB80u;
    if (runtime->hasFunction(0x28CB80u)) {
        auto targetFn = runtime->lookupFunction(0x28CB80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD3C4u; }
        if (ctx->pc != 0x2AD3C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028CB80_0x28cb80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD3C4u; }
        if (ctx->pc != 0x2AD3C4u) { return; }
    }
    ctx->pc = 0x2AD3C4u;
label_2ad3c4:
    // 0x2ad3c4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AD3C4u;
    {
        const bool branch_taken_0x2ad3c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ad3c4) {
            ctx->pc = 0x2AD3C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD3C4u;
            // 0x2ad3c8: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AD3ECu;
            goto label_2ad3ec;
        }
    }
    ctx->pc = 0x2AD3CCu;
    // 0x2ad3cc: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2ad3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ad3d0: 0x2405008e  addiu       $a1, $zero, 0x8E
    ctx->pc = 0x2ad3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x2ad3d4: 0x24060807  addiu       $a2, $zero, 0x807
    ctx->pc = 0x2ad3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2055));
    // 0x2ad3d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ad3d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad3dc: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2AD3DCu;
    SET_GPR_U32(ctx, 31, 0x2AD3E4u);
    ctx->pc = 0x2AD3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD3DCu;
            // 0x2ad3e0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD3E4u; }
        if (ctx->pc != 0x2AD3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD3E4u; }
        if (ctx->pc != 0x2AD3E4u) { return; }
    }
    ctx->pc = 0x2AD3E4u;
label_2ad3e4:
    // 0x2ad3e4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2AD3E4u;
    {
        const bool branch_taken_0x2ad3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD3E4u;
            // 0x2ad3e8: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad3e4) {
            ctx->pc = 0x2AD488u;
            goto label_2ad488;
        }
    }
    ctx->pc = 0x2AD3ECu;
label_2ad3ec:
    // 0x2ad3ec: 0xfc500150  sd          $s0, 0x150($v0)
    ctx->pc = 0x2ad3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 336), GPR_U64(ctx, 16));
    // 0x2ad3f0: 0xae360030  sw          $s6, 0x30($s1)
    ctx->pc = 0x2ad3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 22));
    // 0x2ad3f4: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x2ad3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
    // 0x2ad3f8: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x2ad3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2ad3fc: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x2ad3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_2ad400:
    // 0x2ad400: 0xdc940150  ld          $s4, 0x150($a0)
    ctx->pc = 0x2ad400u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x2ad404: 0x8c720004  lw          $s2, 0x4($v1)
    ctx->pc = 0x2ad404u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2ad408: 0x1a800017  blez        $s4, . + 4 + (0x17 << 2)
    ctx->pc = 0x2AD408u;
    {
        const bool branch_taken_0x2ad408 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x2AD40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD408u;
            // 0x2ad40c: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad408) {
            ctx->pc = 0x2AD468u;
            goto label_2ad468;
        }
    }
    ctx->pc = 0x2AD410u;
label_2ad410:
    // 0x2ad410: 0x8e260040  lw          $a2, 0x40($s1)
    ctx->pc = 0x2ad410u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2ad414: 0x13803c  dsll32      $s0, $s3, 0
    ctx->pc = 0x2ad414u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) << (32 + 0));
    // 0x2ad418: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x2ad418u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x2ad41c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ad41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad420: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2ad420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2ad424: 0x2463021  addu        $a2, $s2, $a2
    ctx->pc = 0x2ad424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x2ad428: 0xc0ad948  jal         func_2B6520
    ctx->pc = 0x2AD428u;
    SET_GPR_U32(ctx, 31, 0x2AD430u);
    ctx->pc = 0x2AD42Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD428u;
            // 0x2ad42c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6520u;
    if (runtime->hasFunction(0x2B6520u)) {
        auto targetFn = runtime->lookupFunction(0x2B6520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD430u; }
        if (ctx->pc != 0x2AD430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6520_0x2b6520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD430u; }
        if (ctx->pc != 0x2AD430u) { return; }
    }
    ctx->pc = 0x2AD430u;
label_2ad430:
    // 0x2ad430: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ad430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad434: 0x10b0000d  beq         $a1, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x2AD434u;
    {
        const bool branch_taken_0x2ad434 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 16));
        ctx->pc = 0x2AD438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD434u;
            // 0x2ad438: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad434) {
            ctx->pc = 0x2AD46Cu;
            goto label_2ad46c;
        }
    }
    ctx->pc = 0x2AD43Cu;
    // 0x2ad43c: 0x18a00005  blez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AD43Cu;
    {
        const bool branch_taken_0x2ad43c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2AD440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD43Cu;
            // 0x2ad440: 0x265982f  dsubu       $s3, $s3, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) - GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad43c) {
            ctx->pc = 0x2AD454u;
            goto label_2ad454;
        }
    }
    ctx->pc = 0x2AD444u;
    // 0x2ad444: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x2ad444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2ad448: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2ad448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ad44c: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x2AD44Cu;
    {
        const bool branch_taken_0x2ad44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD44Cu;
            // 0x2ad450: 0xae220040  sw          $v0, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad44c) {
            ctx->pc = 0x2AD410u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ad410;
        }
    }
    ctx->pc = 0x2AD454u;
label_2ad454:
    // 0x2ad454: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x2ad454u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
label_2ad458:
    // 0x2ad458: 0xc0abd84  jal         func_2AF610
    ctx->pc = 0x2AD458u;
    SET_GPR_U32(ctx, 31, 0x2AD460u);
    ctx->pc = 0x2AD45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD458u;
            // 0x2ad45c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AF610u;
    if (runtime->hasFunction(0x2AF610u)) {
        auto targetFn = runtime->lookupFunction(0x2AF610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD460u; }
        if (ctx->pc != 0x2AD460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AF610_0x2af610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD460u; }
        if (ctx->pc != 0x2AD460u) { return; }
    }
    ctx->pc = 0x2AD460u;
label_2ad460:
    // 0x2ad460: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2AD460u;
    {
        const bool branch_taken_0x2ad460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD460u;
            // 0x2ad464: 0x40102d  daddu       $v0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad460) {
            ctx->pc = 0x2AD48Cu;
            goto label_2ad48c;
        }
    }
    ctx->pc = 0x2AD468u;
label_2ad468:
    // 0x2ad468: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ad468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ad46c:
    // 0x2ad46c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2ad46cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad470: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2AD470u;
    {
        const bool branch_taken_0x2ad470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD470u;
            // 0x2ad474: 0xaea30000  sw          $v1, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad470) {
            ctx->pc = 0x2AD48Cu;
            goto label_2ad48c;
        }
    }
    ctx->pc = 0x2AD478u;
label_2ad478:
    // 0x2ad478: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2ad478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad47c: 0xc0adb7e  jal         func_2B6DF8
    ctx->pc = 0x2AD47Cu;
    SET_GPR_U32(ctx, 31, 0x2AD484u);
    ctx->pc = 0x2AD480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD47Cu;
            // 0x2ad480: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6DF8u;
    if (runtime->hasFunction(0x2B6DF8u)) {
        auto targetFn = runtime->lookupFunction(0x2B6DF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD484u; }
        if (ctx->pc != 0x2AD484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6DF8_0x2b6df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD484u; }
        if (ctx->pc != 0x2AD484u) { return; }
    }
    ctx->pc = 0x2AD484u;
label_2ad484:
    // 0x2ad484: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x2ad484u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
label_2ad488:
    // 0x2ad488: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ad488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ad48c:
    // 0x2ad48c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2ad48cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ad490: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2ad490u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ad494: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2ad494u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ad498: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2ad498u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ad49c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2ad49cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ad4a0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ad4a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ad4a4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ad4a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ad4a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ad4a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad4ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD4ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD4ACu;
            // 0x2ad4b0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AD4B4u;
    // 0x2ad4b4: 0x0  nop
    ctx->pc = 0x2ad4b4u;
    // NOP
    ctx->pc = 0x2ad4b8u;
}
